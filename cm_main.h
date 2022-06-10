/******************************************************************************
**  Copyright(c) 2022 ignackoo. All rights reserved.
**
**  Licensed under the MIT license.
**  See LICENSE file in the project root for full license information.
**
**  This file is part of the C Macro Libray.
**
**  Main macros
**
*/
#ifndef __CM_MAIN_H
#define __CM_MAIN_H


#define INT__MAINBEGIN                          int main() {
#define INT__MAINBEGIN__VOID                    int main(void) {
#define INT__MAINBEGIN__ARGC_ARGVPA             int main(int argc, \
                                                          char *argv[]) {
#define INT__MAINBEGIN__ARGC_ARGVPP             int main(int argc, \
                                                          char **argv) {
#define INT__MAINBEGIN__ARGC_ARGVPA_ENVPA       int main(int argc, \
                                                          char *argv[], \
                                                          char *envp[]) {
#define INT__MAINBEGIN__ARGC_ARGVPP_ENVPP       int main(int argc, \
                                                          char **argv, \
                                                          char **envp) {

#define INT__MAINEND                            }


#endif /* __CM_MAIN_H */
