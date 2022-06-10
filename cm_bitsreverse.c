#include "cm_bitsreverse.h"


unsigned char ByteReverseBits(unsigned char number)
{
    unsigned int bitsize = 8;
    unsigned char reverse = 0;
    unsigned int i;
    for (i = 0; i < bitsize; i++) {
        if ((number & (1 << i)))
            reverse |= 1 << ((bitsize - 1) - i);
    }
    return(reverse);
}

unsigned short WordReverseBits(unsigned short number)
{
    unsigned int bitsize = 16;
    unsigned short reverse = 0;
    unsigned int i;
    for (i = 0; i < bitsize; i++) {
        if ((number & (1 << i)))
            reverse |= 1 << ((bitsize - 1) - i);
    }
    return(reverse);
}

unsigned long DWordReverseBits(unsigned long number)
{
    unsigned int bitsize = 32;
    unsigned long reverse = 0;
    unsigned int i;
    for (i = 0; i < bitsize; i++) {
        if ((number & (1l << i)))
            reverse |= 1l << ((bitsize - 1) - i);
    }
    return(reverse);
}

#if defined __STDC_VERSION__ && __STDC_VERSION__ >= 199901l
unsigned long long QWordReverseBits(unsigned long long number)
{
    unsigned int bitsize = 64;
    unsigned long long reverse = 0;
    unsigned int i;
    for (i = 0; i < bitsize; i++) {
        if ((number & (1ll << i)))
            reverse |= 1ll << ((bitsize - 1) - i);
    }
    return(reverse);
}
#endif
