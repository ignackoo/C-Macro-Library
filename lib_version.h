/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  Library build name and version
**
**  defined according to c# .net applications and library
**  build version definition ... as ... major, minor, build, revision
**  major    = int      ... user defined major ver and is user incremental
**  minor    = int      ... user defined minor ver and is user incremental
**  build    = __DATE__ ... autoincrement __DATE__ ver of build in form ("Mmm dd yyyy")
**  revision = __TIME__ ... autoincrement __TIME__ ver of build in form ("hh:mm:ss")
**
*/
#ifndef __LIB_VERSION_H
#define __LIB_VERSION_H


#ifdef __cplusplus
extern "C" {
#endif

    /* library name */
    char* Library_GetName(void);

    /* library version buid specification */
    unsigned long Library_GetVersionMajor(void);

    unsigned long Library_GetVersionMinor(void);

    unsigned long Library_GetVersionBuild(void);

    unsigned long Library_GetVersionRevision(void);

    /* library version build c language specification */
    unsigned long Library_GetStdc(void);

    unsigned long Library_GetStdcVersion(void);

    unsigned long Library_GetStdcVersionYear(void);

    unsigned long Library_GetStdcHosted(void);

#ifdef __cplusplus
}
#endif


#endif /* __LIB_VERSION_H */
