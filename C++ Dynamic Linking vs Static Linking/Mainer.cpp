// ---------------------- C++ Dynamic Linking vs Static Linking -----------------------------------------
//ref link:https://www.youtube.com/watch?v=Jzh4ZULXsvo&list=PLRwVmtr-pp05Bl0j6lwXd8tU754nUEB5P&index=5


// Static - means compiletime
// Dynamic	- means runtime 


/* ------------- CMD -------------------
* 
*  /c < --compile only	ex. cl / c MeOtherCPlusPlusFile.cpp
*  lib <-- library		ex/ lib /out:KulpotsLibrary.lib MeOtherCPlusPlusFile.obj
* 
* C:\Users\sunny\source\reposCPlusPlus\C++ Dynamic Linking vs Static Linking\C++ Dynamic Linking vs Static Linking>dir
 Volume in drive C has no label.
 Volume Serial Number is DAE4-938D

 Directory of C:\Users\sunny\source\reposCPlusPlus\C++ Dynamic Linking vs Static Linking\C++ Dynamic Linking vs Static Linking

22/01/2024  04:38 pm    <DIR>          .
22/01/2024  04:38 pm    <DIR>          ..
21/01/2024  08:51 pm               558 AnotherCppFile.cpp
18/01/2024  03:18 pm               208 AnotherCppFile.h
21/01/2024  09:02 pm               676 AnotherCppFile.obj
22/01/2024  03:54 pm             6,699 C++ Dynamic Linking vs Static Linking.vcxproj
22/01/2024  03:54 pm             1,086 C++ Dynamic Linking vs Static Linking.vcxproj.filters
22/01/2024  03:46 pm               225 C++ Dynamic Linking vs Static Linking.vcxproj.user
21/01/2024  09:12 pm            13,978 CppScratchPad.cpp
21/01/2024  09:02 pm            85,504 CppScratchPad.exe
21/01/2024  09:02 pm             1,123 CppScratchPad.obj
19/01/2024  07:38 pm                59 Hero.h
22/01/2024  04:38 pm               343 Mainer.cpp
22/01/2024  03:54 pm               211 MeOtherCPlusPlusFile.cpp
19/01/2024  07:01 pm                62 Monster.h
19/01/2024  08:17 pm               171 Vector.h
              14 File(s)        110,903 bytes
               2 Dir(s)  452,301,570,048 bytes free

-------------MeOtherCPlusPlusFile.cpp-------------------------------------START
#include <iostream>
using namespace std;

__declspec(dllexport) void moo()		
{
    cout << "moo" << endl;
}
-------------MeOtherCPlusPlusFile.cpp-------------------------------------END
C:\Users\sunny\source\reposCPlusPlus\C++ Dynamic Linking vs Static Linking\C++ Dynamic Linking vs Static Linking>cl /c MeOtherCPlusPlusFile.cpp
Microsoft (R) C/C++ Optimizing Compiler Version 19.38.33134 for x86
Copyright (C) Microsoft Corporation.  All rights reserved.

MeOtherCPlusPlusFile.cpp
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.38.33130\include\ostream(779): warning C4530: C++ exception handler used, but unwind semantics are not enabled. Specify /EHsc
C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Tools\MSVC\14.38.33130\include\ostream(779): note: the template instantiation context (the oldest one first) is
MeOtherCPlusPlusFile.cpp(9): note: see reference to function template instantiation 'std::basic_ostream<char,std::char_traits<char>> &std::operator <<<std::char_traits<char>>(std::basic_ostream<char,std::char_traits<char>> &,const char *)' being compiled

C:\Users\sunny\source\reposCPlusPlus\C++ Dynamic Linking vs Static Linking\C++ Dynamic Linking vs Static Linking>dir
 Volume in drive C has no label.
 Volume Serial Number is DAE4-938D

 Directory of C:\Users\sunny\source\reposCPlusPlus\C++ Dynamic Linking vs Static Linking\C++ Dynamic Linking vs Static Linking

22/01/2024  05:08 pm    <DIR>          .
22/01/2024  05:08 pm    <DIR>          ..
21/01/2024  08:51 pm               558 AnotherCppFile.cpp
18/01/2024  03:18 pm               208 AnotherCppFile.h
22/01/2024  05:03 pm               708 AnotherCppFile.obj
22/01/2024  03:54 pm             6,699 C++ Dynamic Linking vs Static Linking.vcxproj
22/01/2024  03:54 pm             1,086 C++ Dynamic Linking vs Static Linking.vcxproj.filters
22/01/2024  03:46 pm               225 C++ Dynamic Linking vs Static Linking.vcxproj.user
21/01/2024  09:12 pm            13,978 CppScratchPad.cpp
21/01/2024  09:02 pm            85,504 CppScratchPad.exe
21/01/2024  09:02 pm             1,123 CppScratchPad.obj
19/01/2024  07:38 pm                59 Hero.h
22/01/2024  05:07 pm             1,854 Mainer.cpp
22/01/2024  05:07 pm               407 MeOtherCPlusPlusFile.cpp
22/01/2024  05:08 pm            78,718 MeOtherCPlusPlusFile.obj
19/01/2024  07:01 pm                62 Monster.h
19/01/2024  08:17 pm               171 Vector.h
22/01/2024  05:07 pm    <DIR>          x64
              15 File(s)        191,360 bytes
               3 Dir(s)  452,244,410,368 bytes free

-------------------------STATIC LINK----------------------------------START
------------STATIC LINKING: Static lib-----------------------------------
C:\Users\sunny\source\reposCPlusPlus\C++ Dynamic Linking vs Static Linking\C++ Dynamic Linking vs Static Linking>lib /out:KulpotsLibrary.lib MeOtherCPlusPlusFile.obj
Microsoft (R) Library Manager Version 14.38.33134.0
Copyright (C) Microsoft Corporation.  All rights reserved.


C:\Users\sunny\source\reposCPlusPlus\C++ Dynamic Linking vs Static Linking\C++ Dynamic Linking vs Static Linking>dir
 Volume in drive C has no label.
 Volume Serial Number is DAE4-938D

 Directory of C:\Users\sunny\source\reposCPlusPlus\C++ Dynamic Linking vs Static Linking\C++ Dynamic Linking vs Static Linking

22/01/2024  05:21 pm    <DIR>          .
22/01/2024  05:21 pm    <DIR>          ..
21/01/2024  08:51 pm               558 AnotherCppFile.cpp
18/01/2024  03:18 pm               208 AnotherCppFile.h
22/01/2024  05:03 pm               708 AnotherCppFile.obj
22/01/2024  03:54 pm             6,699 C++ Dynamic Linking vs Static Linking.vcxproj
22/01/2024  03:54 pm             1,086 C++ Dynamic Linking vs Static Linking.vcxproj.filters
22/01/2024  03:46 pm               225 C++ Dynamic Linking vs Static Linking.vcxproj.user
21/01/2024  09:12 pm            13,978 CppScratchPad.cpp
21/01/2024  09:02 pm            85,504 CppScratchPad.exe
21/01/2024  09:02 pm             1,123 CppScratchPad.obj
19/01/2024  07:38 pm                59 Hero.h
22/01/2024  05:21 pm           113,922 KulpotsLibrary.lib    <---------------- generated
22/01/2024  05:20 pm             4,724 Mainer.cpp
22/01/2024  05:11 pm               407 MeOtherCPlusPlusFile.cpp
22/01/2024  05:08 pm            78,718 MeOtherCPlusPlusFile.obj
19/01/2024  07:01 pm                62 Monster.h
19/01/2024  08:17 pm               171 Vector.h
22/01/2024  05:07 pm    <DIR>          x64
              16 File(s)        308,152 bytes
               3 Dir(s)  452,240,691,200 bytes free

######## MeOtherCPlusPlusFile.obj --> static link to KulpotsLibrary.lib ###########
-----------Erasing MeOtherCPlusPlusFile.obj to prove its link and no longer needed-------------
C:\Users\sunny\source\reposCPlusPlus\C++ Dynamic Linking vs Static Linking\C++ Dynamic Linking vs Static Linking>erase *MeOtherCPlusPlusFile.obj

C:\Users\sunny\source\reposCPlusPlus\C++ Dynamic Linking vs Static Linking\C++ Dynamic Linking vs Static Linking>dir
 Volume in drive C has no label.
 Volume Serial Number is DAE4-938D

 Directory of C:\Users\sunny\source\reposCPlusPlus\C++ Dynamic Linking vs Static Linking\C++ Dynamic Linking vs Static Linking

22/01/2024  05:25 pm    <DIR>          .
22/01/2024  05:25 pm    <DIR>          ..
21/01/2024  08:51 pm               558 AnotherCppFile.cpp
18/01/2024  03:18 pm               208 AnotherCppFile.h
22/01/2024  05:03 pm               708 AnotherCppFile.obj
22/01/2024  03:54 pm             6,699 C++ Dynamic Linking vs Static Linking.vcxproj
22/01/2024  03:54 pm             1,086 C++ Dynamic Linking vs Static Linking.vcxproj.filters
22/01/2024  03:46 pm               225 C++ Dynamic Linking vs Static Linking.vcxproj.user
21/01/2024  09:12 pm            13,978 CppScratchPad.cpp
21/01/2024  09:02 pm            85,504 CppScratchPad.exe
21/01/2024  09:02 pm             1,123 CppScratchPad.obj
19/01/2024  07:38 pm                59 Hero.h
22/01/2024  05:21 pm           113,922 KulpotsLibrary.lib
22/01/2024  05:24 pm             6,679 Mainer.cpp
22/01/2024  05:11 pm               407 MeOtherCPlusPlusFile.cpp
19/01/2024  07:01 pm                62 Monster.h
19/01/2024  08:17 pm               171 Vector.h
22/01/2024  05:07 pm    <DIR>          x64
              15 File(s)        231,389 bytes
               3 Dir(s)  452,241,006,592 bytes free
##############Compile Mainer.cpp then staticly link to KulpotsLibrary.lib##########
C:\Users\sunny\source\reposCPlusPlus\C++ Dynamic Linking vs Static Linking\C++ Dynamic Linking vs Static Linking>cl Mainer.cpp /link KulpotsLibrary.lib
Microsoft (R) C/C++ Optimizing Compiler Version 19.38.33134 for x86
Copyright (C) Microsoft Corporation.  All rights reserved.

Mainer.cpp
Microsoft (R) Incremental Linker Version 14.38.33134.0
Copyright (C) Microsoft Corporation.  All rights reserved.

/out:Mainer.exe
KulpotsLibrary.lib
Mainer.obj
   Creating library Mainer.lib and object Mainer.exp

C:\Users\sunny\source\reposCPlusPlus\C++ Dynamic Linking vs Static Linking\C++ Dynamic Linking vs Static Linking>dir
 Volume in drive C has no label.
 Volume Serial Number is DAE4-938D

 Directory of C:\Users\sunny\source\reposCPlusPlus\C++ Dynamic Linking vs Static Linking\C++ Dynamic Linking vs Static Linking

22/01/2024  05:31 pm    <DIR>          .
22/01/2024  05:31 pm    <DIR>          ..
21/01/2024  08:51 pm               558 AnotherCppFile.cpp
18/01/2024  03:18 pm               208 AnotherCppFile.h
22/01/2024  05:03 pm               708 AnotherCppFile.obj
22/01/2024  03:54 pm             6,699 C++ Dynamic Linking vs Static Linking.vcxproj
22/01/2024  03:54 pm             1,086 C++ Dynamic Linking vs Static Linking.vcxproj.filters
22/01/2024  03:46 pm               225 C++ Dynamic Linking vs Static Linking.vcxproj.user
21/01/2024  09:12 pm            13,978 CppScratchPad.cpp
21/01/2024  09:02 pm            85,504 CppScratchPad.exe
21/01/2024  09:02 pm             1,123 CppScratchPad.obj
19/01/2024  07:38 pm                59 Hero.h
22/01/2024  05:21 pm           113,922 KulpotsLibrary.lib
22/01/2024  05:31 pm             9,010 Mainer.cpp
22/01/2024  05:30 pm           164,352 Mainer.exe
22/01/2024  05:30 pm               760 Mainer.exp
22/01/2024  05:30 pm             1,698 Mainer.lib
22/01/2024  05:30 pm               735 Mainer.obj
22/01/2024  05:11 pm               407 MeOtherCPlusPlusFile.cpp
19/01/2024  07:01 pm                62 Monster.h
19/01/2024  08:17 pm               171 Vector.h
22/01/2024  05:07 pm    <DIR>          x64
              19 File(s)        401,265 bytes
               3 Dir(s)  452,239,237,120 bytes free

C:\Users\sunny\source\reposCPlusPlus\C++ Dynamic Linking vs Static Linking\C++ Dynamic Linking vs Static Linking>Mainer.exe
moo
-------------------------
KulpotsLibrary.lib was staticly copied and link to Mainer.exe
------------------------
------------------------PROVE: Erase KulpotsLibrary.lib if moo still runs-----------------
C:\Users\sunny\source\reposCPlusPlus\C++ Dynamic Linking vs Static Linking\C++ Dynamic Linking vs Static Linking>erase KulpotsLibrary.lib

C:\Users\sunny\source\reposCPlusPlus\C++ Dynamic Linking vs Static Linking\C++ Dynamic Linking vs Static Linking>Mainer.exe
moo
-------------------------STATIC LINK----------------------------------END
-------------------------DYNAMIC LINK----------------------------------START
-----1st erase Mainer.exe Mainer.exp Mainer.lib Mainer.obj
C:\Users\sunny\source\reposCPlusPlus\C++ Dynamic Linking vs Static Linking\C++ Dynamic Linking vs Static Linking>erase Mainer.exe Mainer.exp Mainer.lib Mainer.obj

C:\Users\sunny\source\reposCPlusPlus\C++ Dynamic Linking vs Static Linking\C++ Dynamic Linking vs Static Linking>dir
 Volume in drive C has no label.
 Volume Serial Number is DAE4-938D

 Directory of C:\Users\sunny\source\reposCPlusPlus\C++ Dynamic Linking vs Static Linking\C++ Dynamic Linking vs Static Linking

22/01/2024  05:46 pm    <DIR>          .
22/01/2024  05:46 pm    <DIR>          ..
21/01/2024  08:51 pm               558 AnotherCppFile.cpp
18/01/2024  03:18 pm               208 AnotherCppFile.h
22/01/2024  05:03 pm               708 AnotherCppFile.obj
22/01/2024  03:54 pm             6,699 C++ Dynamic Linking vs Static Linking.vcxproj
22/01/2024  03:54 pm             1,086 C++ Dynamic Linking vs Static Linking.vcxproj.filters
22/01/2024  03:46 pm               225 C++ Dynamic Linking vs Static Linking.vcxproj.user
21/01/2024  09:12 pm            13,978 CppScratchPad.cpp
21/01/2024  09:02 pm            85,504 CppScratchPad.exe
21/01/2024  09:02 pm             1,123 CppScratchPad.obj
19/01/2024  07:38 pm                59 Hero.h
22/01/2024  05:44 pm            11,633 Mainer.cpp
22/01/2024  05:11 pm               407 MeOtherCPlusPlusFile.cpp
19/01/2024  07:01 pm                62 Monster.h
19/01/2024  08:17 pm               171 Vector.h
22/01/2024  05:07 pm    <DIR>          x64
              14 File(s)        122,421 bytes
               3 Dir(s)  452,240,912,384 bytes free



-------------------------DYNAMIC LINK----------------------------------END

* 
*/


void moo();		//  no define body "{}"

void main()
{
	moo();
}