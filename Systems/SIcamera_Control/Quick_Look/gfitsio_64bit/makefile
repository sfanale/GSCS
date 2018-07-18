LABVIEW="C:\Program Files\National Instruments\LabVIEW 2013"

gfitsio.dll: gfitsio.c
	cl /LD /I$(LABVIEW)\cintools gfitsio.c user32.lib cfitsio.lib $(LABVIEW)\cintools\labview.lib
