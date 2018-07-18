#include <windows.h>
#include "extcode.h"
#include "fitsio.h"

_declspec (dllexport) int32 add(int32 x, int32 y) {
	return x+y;
}

_declspec (dllexport) MgErr fits(CStr filename) {
	fitsfile *fptr;
	MgErr status = noErr;

	fits_create_file(&fptr, filename, &status);
	fits_write_imghdr(fptr, 8, 0, NULL, &status);
	fits_close_file(fptr, &status);

	return status;
}
