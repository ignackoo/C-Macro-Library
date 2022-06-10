#include <stdio.h>
#include "cm_bitsprint.h"


void BytePrintBitStr(unsigned char uc)
{
	unsigned char ucmask = 0x80;
	while(ucmask)
	{
		printf("%d", (int)((uc & ucmask) ? 1 : 0));
		ucmask = ucmask >> 1;
	}
}

void WordPrintBitStr(unsigned short us)
{
	unsigned short usmask = 0x8000;
	while(usmask)
	{
		printf("%d", (int)((us & usmask) ? 1 : 0));
		usmask = usmask >> 1;
	}
}

void DWordPrintBitStr(unsigned long ul)
{
	unsigned long ulmask = 0x80000000;
	while(ulmask)
	{
		printf("%d", (int)((ul & ulmask) ? 1 : 0));
		ulmask = ulmask >> 1;
	}
}

#if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901l
void QWordPrintBitStr(unsigned long long ull)
{
	unsigned long long ullmask = 0x8000000000000000;
	while(ullmask)
	{
		printf("%d", (int)((ull & ullmask) ? 1 : 0));
		ullmask = ullmask >> 1;
	}
}
#endif
