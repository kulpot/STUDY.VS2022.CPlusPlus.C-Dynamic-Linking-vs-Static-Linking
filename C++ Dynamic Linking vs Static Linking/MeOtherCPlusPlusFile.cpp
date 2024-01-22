#include <iostream>
using namespace std;

// ---------------------- C++ Dynamic Linking vs Static Linking -----------------------------------------
//ref link:https://www.youtube.com/watch?v=Jzh4ZULXsvo&list=PLRwVmtr-pp05Bl0j6lwXd8tU754nUEB5P&index=5

__declspec(dllexport) void moo()
{
	cout << "moo" << endl;
}