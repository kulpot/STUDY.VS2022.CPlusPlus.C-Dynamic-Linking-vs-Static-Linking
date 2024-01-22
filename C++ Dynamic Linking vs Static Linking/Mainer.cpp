// ---------------------- C++ Dynamic Linking vs Static Linking -----------------------------------------
//ref link:https://www.youtube.com/watch?v=Jzh4ZULXsvo&list=PLRwVmtr-pp05Bl0j6lwXd8tU754nUEB5P&index=5

/* ------------- CMD -------------------
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

* 
*/


// Static - means compiletime
// Dynamic	- means runtime 


void moo();		//  no define body "{}"

void main()
{
	moo();
}