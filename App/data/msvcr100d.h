
typedef struct normaltypes
{
  char c;
  short s;
  float f;
  int i;
  long long l;
}NORMALTYPES;

typedef struct chaindelc
{
  int a, *b, c[3];
  char d;
}CHAINDECL;

typedef struct instruct
{
  NORMALTYPES b;
}INSTRUCT;

typedef struct bitfields
{
  int i:30;
  int i1:15;
  int i2:17;
  int i3:32;
}BITFIELDS;

typedef enum enums
{
  i1,
  i2,
  i3,
  i4,
  i5
}ENUMS;

typedef union unions
{
  char c;
  int i;
  float f;
  long l;
}UNIONS;

typedef struct misc
{
  int bf1:20;
  union u
  {
    int i;
    char c;
  }U;
  float f;
  int bf2:15;
  int bf3:20;
}MISC;

typedef char TYPE1;
typedef TYPE1 TYPE2;

typedef struct allinone
{
  ENUMS e;
  MISC m;
  TYPE2 *s;
}ALLINONE;

typedef ALLINONE TOPTYPE;

typedef struct buffer_in_struct
{
  unsigned char* buf;
  int i;
}BIS;

/////////////////////////////////////////////////////////////////////////////

void __stdcall inittest();
void __stdcall closetest();

//just normal basetypes
void __stdcall test_normal(int i, char c, short s, double d, long long l);

//c strings
void __stdcall test_string(char *s);

//const c string 
void __stdcall test_conststring(const char *cs);

//buffer (default 1024)
void __stdcall test_buffer(unsigned char *buf);

//array fixed size
void __stdcall test_arrayfixed(double arf[42]);

//array without size (default size 1024)
void __stdcall test_arrayopen(double ar[]);

//pointer 
void __stdcall test_pointer(double *p);

//structs
void __stdcall test_basetypes(NORMALTYPES bt);
void __stdcall test_chaindecl(CHAINDECL cd);
void __stdcall test_instruct(INSTRUCT is);

//bitfields
void __stdcall test_bitfields(BITFIELDS bf);

//enumerations
void __stdcall test_enums(ENUMS e);

//unions
void __stdcall test_unions(UNIONS u);

//misc structs
void __stdcall test_misc(MISC m);
void __stdcall test_toptype(TOPTYPE t);

//return c strings
char* __stdcall test_string_ret(char *cs);

//return c buffer
unsigned char* __stdcall test_buffer_ret(unsigned char *b);

//return a struct
NORMALTYPES __stdcall test_basetypes_ret(NORMALTYPES bt);

//return a really complex struct
TOPTYPE __stdcall test_misc_ret(TOPTYPE t);

//return pointer on a struct
CHAINDECL* __stdcall test_chaindelc_ret(CHAINDECL *t);

//return struct with buffer
BIS __stdcall test_buffer_in_struct_ret(BIS bis);

//return a array
unsigned char (*__stdcall test_array_ret(void))[3][4];