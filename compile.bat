@echo off
cls
title Compiler
call "%VS140COMNTOOLS%../../VC/vcvarsall.bat" x86

set name=urmod.dll

set param=-luser32 -lDbghelp -lmsvcrt -lmsvcmrt -llibMinHook-x86-v141-mt -lShlwapi -lWtsApi32 -m32 -lshell32 -lole32 -O3 -lcomdlg32 -lWs2_32 -llib/libcocos2d -Igd -Icocos2d -Icocos2d/include -Icocos2d/kazmath/include -Icocos2d/platform/android -Iincl/CocosDenshion/android -Iincl/CocosDenshion/include -Icocos2d/platform/win32 -Icocos2d/platform/third_party/win32/OGLES
clang -std=c++17 -Wno-macro-redefined -Wno-microsoft-enum-forward-reference -shared %param% -o %name% main.cpp cocos2d\custom\Sprites\CCMenuItemSpriteExtra\CCMenuItemSpriteExtra.cpp 
xcopy /y %name% compiled\%name%*
xcopy /y MinHook.x86.dll compiled\MinHook.x86.dll*

@echo on
