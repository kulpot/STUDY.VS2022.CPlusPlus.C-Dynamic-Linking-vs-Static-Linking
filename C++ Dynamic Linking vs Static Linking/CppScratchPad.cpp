// 3 Steps Preprocessor process(stages of compilation process): 1. Preprocessor, 2. Compiler, 3. Linker
// Key Concept:the linker generates .exe file, and the compiler generates.obj file
// recursively copy/paste all #include

#include <iostream>
using std::cout;
using std::endl;

// ----------------------- C++ Translation Units --------------------------------------------------------
//ref link:https://www.youtube.com/watch?v=N4khTYkTwtI&list=PLRwVmtr-pp05Bl0j6lwXd8tU754nUEB5P&index=4

// C++ only looks 1 file at a time
//cl < -- - invoke in C++
//del * .exe * .obj < -- - delete 2files(exe / objFILE)


/* 
* --------------- CMD -------------------------------START
* 
* C:\Users\sunny\source\reposCPlusPlus\C++ Translation Units>dir
 Volume in drive C has no label.
 Volume Serial Number is DAE4-938D

 Directory of C:\Users\sunny\source\reposCPlusPlus\C++ Translation Units

21/01/2024  08:12 pm    <DIR>          .
21/01/2024  08:12 pm    <DIR>          ..
20/01/2024  11:29 pm             2,581 .gitattributes
20/01/2024  11:29 pm             6,585 .gitignore
21/01/2024  08:15 pm    <DIR>          C++ Translation Units
20/01/2024  11:26 pm             1,483 C++ Translation Units.sln
21/01/2024  08:12 pm    <DIR>          x64
               3 File(s)         10,649 bytes
               4 Dir(s)  452,536,356,864 bytes free

C:\Users\sunny\source\reposCPlusPlus\C++ Translation Units>cd C++ Translation Units

C:\Users\sunny\source\reposCPlusPlus\C++ Translation Units\C++ Translation Units>dir
 Volume in drive C has no label.
 Volume Serial Number is DAE4-938D

 Directory of C:\Users\sunny\source\reposCPlusPlus\C++ Translation Units\C++ Translation Units

21/01/2024  08:15 pm    <DIR>          .
21/01/2024  08:15 pm    <DIR>          ..
21/01/2024  08:15 pm               545 AnotherCppFile.cpp
18/01/2024  03:18 pm               208 AnotherCppFile.h
21/01/2024  08:14 pm             6,687 C++ Translation Units.vcxproj
21/01/2024  08:14 pm             1,087 C++ Translation Units.vcxproj.filters
20/01/2024  11:27 pm               225 C++ Translation Units.vcxproj.user
21/01/2024  08:12 pm             3,176 CppScratchPad.cpp
19/01/2024  07:38 pm                59 Hero.h
19/01/2024  07:01 pm                62 Monster.h
19/01/2024  08:17 pm               171 Vector.h
21/01/2024  08:12 pm    <DIR>          x64
               9 File(s)         12,220 bytes
               3 Dir(s)  452,536,348,672 bytes free

----------------CppScratchPad.cpp-----------------------START
 void main()
{
    foo();          // in compiler
}
----------------CppScratchPad.cpp-----------------------END
C:\Users\sunny\source\reposCPlusPlus\C++ Translation Units\C++ Translation Units>cl CppScratchPad.cpp
Microsoft (R) C/C++ Optimizing Compiler Version 19.38.33134 for x86
Copyright (C) Microsoft Corporation.  All rights reserved.

CppScratchPad.cpp
CppScratchPad.cpp(64): error C3861: 'foo': identifier not found
----------------CppScratchPad.cpp-----------------------START
void foo() {}

void main()
{
    foo();
}
----------------CppScratchPad.cpp-----------------------ENDS
C:\Users\sunny\source\reposCPlusPlus\C++ Translation Units\C++ Translation Units>cl CppScratchPad.cpp
Microsoft (R) C/C++ Optimizing Compiler Version 19.38.33134 for x86
Copyright (C) Microsoft Corporation.  All rights reserved.

CppScratchPad.cpp
Microsoft (R) Incremental Linker Version 14.38.33134.0
Copyright (C) Microsoft Corporation.  All rights reserved.

/out:CppScratchPad.exe      <---------- generated file
CppScratchPad.obj           <---------- generated file

C:\Users\sunny\source\reposCPlusPlus\C++ Translation Units\C++ Translation Units>dir
 Volume in drive C has no label.
 Volume Serial Number is DAE4-938D

 Directory of C:\Users\sunny\source\reposCPlusPlus\C++ Translation Units\C++ Translation Units

21/01/2024  08:34 pm    <DIR>          .
21/01/2024  08:34 pm    <DIR>          ..
21/01/2024  08:15 pm               545 AnotherCppFile.cpp
18/01/2024  03:18 pm               208 AnotherCppFile.h
21/01/2024  08:14 pm             6,687 C++ Translation Units.vcxproj
21/01/2024  08:14 pm             1,087 C++ Translation Units.vcxproj.filters
20/01/2024  11:27 pm               225 C++ Translation Units.vcxproj.user
21/01/2024  08:34 pm             6,274 CppScratchPad.cpp
21/01/2024  08:30 pm            85,504 CppScratchPad.exe    <---- the linker generates .exe file
21/01/2024  08:30 pm             1,139 CppScratchPad.obj    <---- the compiler generates .obj file
19/01/2024  07:38 pm                59 Hero.h
19/01/2024  07:01 pm                62 Monster.h
19/01/2024  08:17 pm               171 Vector.h
21/01/2024  08:12 pm    <DIR>          x64
              11 File(s)        101,961 bytes
               3 Dir(s)  452,537,671,680 bytes free
--------------del *.exe *.obj---------------------------
C:\Users\sunny\source\reposCPlusPlus\C++ Translation Units\C++ Translation Units>del *.exe *.obj

C:\Users\sunny\source\reposCPlusPlus\C++ Translation Units\C++ Translation Units>dir
 Volume in drive C has no label.
 Volume Serial Number is DAE4-938D

 Directory of C:\Users\sunny\source\reposCPlusPlus\C++ Translation Units\C++ Translation Units

21/01/2024  08:46 pm    <DIR>          .
21/01/2024  08:46 pm    <DIR>          ..
21/01/2024  08:40 pm               558 AnotherCppFile.cpp
18/01/2024  03:18 pm               208 AnotherCppFile.h
21/01/2024  08:14 pm             6,687 C++ Translation Units.vcxproj
21/01/2024  08:14 pm             1,087 C++ Translation Units.vcxproj.filters
20/01/2024  11:27 pm               225 C++ Translation Units.vcxproj.user
21/01/2024  08:45 pm             7,677 CppScratchPad.cpp
19/01/2024  07:38 pm                59 Hero.h
19/01/2024  07:01 pm                62 Monster.h
19/01/2024  08:17 pm               171 Vector.h
21/01/2024  08:12 pm    <DIR>          x64
               9 File(s)         16,734 bytes
               3 Dir(s)  452,538,892,288 bytes free
---------------AnotherCppFile.cpp---------------------START
void foo() {}
---------------AnotherCppFile.cpp---------------------END
C:\Users\sunny\source\reposCPlusPlus\C++ Translation Units\C++ Translation Units>cl CppScratchPad.cpp AnotherCppFile.cpp
Microsoft (R) C/C++ Optimizing Compiler Version 19.38.33134 for x86
Copyright (C) Microsoft Corporation.  All rights reserved.

CppScratchPad.cpp
CppScratchPad.cpp(149): error C3861: 'foo': identifier not found    <---C++ only looks 1 file at a time
AnotherCppFile.cpp  
Generating Code...          

C:\Users\sunny\source\reposCPlusPlus\C++ Translation Units\C++ Translation Units>dir
 Volume in drive C has no label.
 Volume Serial Number is DAE4-938D

 Directory of C:\Users\sunny\source\reposCPlusPlus\C++ Translation Units\C++ Translation Units

21/01/2024  08:54 pm    <DIR>          .
21/01/2024  08:54 pm    <DIR>          ..
21/01/2024  08:51 pm               558 AnotherCppFile.cpp
18/01/2024  03:18 pm               208 AnotherCppFile.h
21/01/2024  08:52 pm               676 AnotherCppFile.obj   <-- generates obj file 
21/01/2024  08:14 pm             6,687 C++ Translation Units.vcxproj
21/01/2024  08:14 pm             1,087 C++ Translation Units.vcxproj.filters
20/01/2024  11:27 pm               225 C++ Translation Units.vcxproj.user
21/01/2024  08:54 pm             9,511 CppScratchPad.cpp    <-- error: for foo() so didn't generate obj file
19/01/2024  07:38 pm                59 Hero.h
19/01/2024  07:01 pm                62 Monster.h
19/01/2024  08:17 pm               171 Vector.h
21/01/2024  08:12 pm    <DIR>          x64
              10 File(s)         19,244 bytes
               3 Dir(s)  452,537,073,664 bytes free

----------------CppScratchPad.cpp-------------------START
void foo();
//void foo() {}

void main()
{
    foo();
}
----------------CppScratchPad.cpp-------------------END
C:\Users\sunny\source\reposCPlusPlus\C++ Translation Units\C++ Translation Units>del *.obj

C:\Users\sunny\source\reposCPlusPlus\C++ Translation Units\C++ Translation Units>dir
 Volume in drive C has no label.
 Volume Serial Number is DAE4-938D

 Directory of C:\Users\sunny\source\reposCPlusPlus\C++ Translation Units\C++ Translation Units

21/01/2024  09:00 pm    <DIR>          .
21/01/2024  09:00 pm    <DIR>          ..
21/01/2024  08:51 pm               558 AnotherCppFile.cpp
18/01/2024  03:18 pm               208 AnotherCppFile.h
21/01/2024  08:14 pm             6,687 C++ Translation Units.vcxproj
21/01/2024  08:14 pm             1,087 C++ Translation Units.vcxproj.filters
20/01/2024  11:27 pm               225 C++ Translation Units.vcxproj.user
21/01/2024  08:59 pm            10,870 CppScratchPad.cpp
19/01/2024  07:38 pm                59 Hero.h
19/01/2024  07:01 pm                62 Monster.h
19/01/2024  08:17 pm               171 Vector.h
21/01/2024  08:12 pm    <DIR>          x64
               9 File(s)         19,927 bytes
               3 Dir(s)  452,305,694,720 bytes free

C:\Users\sunny\source\reposCPlusPlus\C++ Translation Units\C++ Translation Units>cl CppScratchPad.cpp AnotherCppFile.cpp
Microsoft (R) C/C++ Optimizing Compiler Version 19.38.33134 for x86
Copyright (C) Microsoft Corporation.  All rights reserved.

CppScratchPad.cpp
AnotherCppFile.cpp
Generating Code...
Microsoft (R) Incremental Linker Version 14.38.33134.0
Copyright (C) Microsoft Corporation.  All rights reserved.

/out:CppScratchPad.exe
CppScratchPad.obj
AnotherCppFile.obj

C:\Users\sunny\source\reposCPlusPlus\C++ Translation Units\C++ Translation Units>dir
 Volume in drive C has no label.
 Volume Serial Number is DAE4-938D

 Directory of C:\Users\sunny\source\reposCPlusPlus\C++ Translation Units\C++ Translation Units

21/01/2024  09:05 pm    <DIR>          .
21/01/2024  09:05 pm    <DIR>          ..
21/01/2024  08:51 pm               558 AnotherCppFile.cpp
18/01/2024  03:18 pm               208 AnotherCppFile.h
21/01/2024  09:02 pm               676 AnotherCppFile.obj
21/01/2024  08:14 pm             6,687 C++ Translation Units.vcxproj
21/01/2024  08:14 pm             1,087 C++ Translation Units.vcxproj.filters
20/01/2024  11:27 pm               225 C++ Translation Units.vcxproj.user
21/01/2024  09:03 pm            12,487 CppScratchPad.cpp
21/01/2024  09:02 pm            85,504 CppScratchPad.exe
21/01/2024  09:02 pm             1,123 CppScratchPad.obj
19/01/2024  07:38 pm                59 Hero.h
19/01/2024  07:01 pm                62 Monster.h
19/01/2024  08:17 pm               171 Vector.h
21/01/2024  08:12 pm    <DIR>          x64
              12 File(s)        108,847 bytes
               3 Dir(s)  452,304,834,560 bytes free
--------------cl CppScratchPad.cpp AnotherCppFile.cpp-------------------
sequence: 
the compiler:generates two obj file(AnotherCppFile.obj,CppScratchPad.obj)
the linker links the two generated obj file(AnotherCppFile.obj,CppScratchPad.obj) and created the exe file(CppScratchPad.exe)



* --------------- CMD --------------------------END
*/

void foo();
//void foo() {}

void main()
{
    foo(); 
}





























// ------------------------- C++ Linker Errors ------------------------------------------------------
//ref link:https://www.youtube.com/watch?v=xNOLRakCOyw&list=PLRwVmtr-pp05Bl0j6lwXd8tU754nUEB5P&index=3

// Linker Errors - if theres is a multiple define in the .obj file 

//void foo()	// 1st define linker error - 2nd in AnotherCppFile.cpp
//{
//
//}
//
//void main()
//{
//	foo();
//}


























//#include "Hero.h"
//#include "Monster.h"

//---------------------------------------COMPILE SEQUENCE FOR MULTIPLE HEADERFILES--------
////-----#include "Hero.h"-----START
////----#include "Vector.h"----START
//#ifndef VECTOR_H		// this is a Header Guard
//#define VECTOR_H		// this is a Header Guard
//
//class Vector
//{
//	float x, y, z;
//	// More stuff...
//};
//#endif
////-----#include "Vector.h"----END
//class Hero
//{
//	Vector position;
//};
////-----#include "Hero.h"-----END
//
//// -------#include "Monster.h"-----------START
////----#include "Vector.h"----START
//#ifndef VECTOR_H		// VECTOR_H only define once
//#endif
////-----#include "Vector.h"----END
//class Monster
//{
//	Vector position;
//};
//// -------#include "Monster.h"-----------END
//#include <iostream>
//using std::cout;
//using std::endl;

//--------------------------------------------------------------------
////#include "Vector.h"
//
//class Vector
//{
//	float x, y, z;
//	// More stuff...
//};
//
//class Hero
//{
//	Vector position;
//};
//
//
////#include "Vector.h"
//
//class Vector
//{
//	float x, y, z;
//	// More stuff...
//};
//
//class Monster
//{
//	Vector position;
//};
//#include <iostream>
//using std::cout;
//using std::endl;

// -------------------------- C++ Header Guards ------------------------------------------------------
//ref link:https://www.youtube.com/watch?v=wRq8pxJEpfc&list=PLRwVmtr-pp05Bl0j6lwXd8tU754nUEB5P&index=2

// Hero.h and Monster.h are both identical

//void main()
//{
//	Hero hero;
//	Monster monster;
//}




























//#include "AnotherCppFile.h" // Preprocessor ---- Header file ------

// -------------------- C++ Header Files -------------------------------------------------------
//ref link:https://www.youtube.com/watch?v=Wa6irrxFG88&list=PLRwVmtr-pp05Bl0j6lwXd8tU754nUEB5P



// Code Files - has .cpp extensions
// Header Files - has .h extensions and some .cpp extensions

////// -----Declarations----- should be in header file
////void foo();
////void foo1();
////void foo2();
////void foo3();
////void foo4();
//
//void main()
//{
//	foo();
//	foo2();
//	foo4();
//}