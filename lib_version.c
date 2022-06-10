#include "cm_stdc.h"
#include "cm_datetoint.h"
#include "cm_timetoint.h"
#include "lib_version.h"


/* library name */
const char LIB_NAME[] = "CMacroLibrary";

/* library version major, minor */
const int  LIB_VERSION_MAJOR = 1;
const int  LIB_VERSION_MINOR = 4;


/* library version buid specification */
char* Library_GetName(void)
{
	return((char*)&LIB_NAME);
}

unsigned long Library_GetVersionMajor(void)
{
	return((unsigned long)LIB_VERSION_MAJOR);
}

unsigned long Library_GetVersionMinor(void)
{
	return((unsigned long)LIB_VERSION_MINOR);
}

unsigned long Library_GetVersionBuild(void)
{
	return((unsigned long)GET_DATE(__DATE__));
}

unsigned long Library_GetVersionRevision(void)
{
	return((unsigned long)GET_TIME(__TIME__));
}


/* library version build c language specification */
unsigned long Library_GetStdc(void)
{
    return((unsigned long)_STDC);
}

unsigned long Library_GetStdcVersion(void)
{
    return((unsigned long)_STDC_VERSION);
}

unsigned long Library_GetStdcVersionYear(void)
{
    return((unsigned long)_STDC_VERSIONYEAR);
}

unsigned long Library_GetStdcHosted(void)
{
    return((unsigned long)_STDC_HOSTED);
}
