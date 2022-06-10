/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  Token pasting macros
**
*/
#ifndef __CM_TOKEN_H
#define __CM_TOKEN_H


/* op #, is replaced by a string literal that contains the argument passed */
#define TOSTRING0(v)                    #v
#define TOSTRING(v)                     TOSTRING0(v)

   
/* op ## concatenates two arguments leaving no blank spaces between them */
#define TOCONCAT0(t1,t2)                t1##t2
#define TOCONCAT(t1,t2)                 TOCONCAT0(t1,t2)


#endif /* __CM_TOKEN_H */
