// GiveMeAGrade.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>


int _tmain(int argc, _TCHAR* argv[])
{

	using namespace std;
	char read(string name1,string name2,int test,int program,int avrge,char x)
	{
		cout <<"inter your first name"<< endl;
		cin >> name1;
		cout <<"inter your end name"<< endl;
		cin >> name2;
		cout <<"inter your test score"<< endl;
		cin >> test;
		cout <<"inter your programming score"<< endl;
		cin>> program;
		avrge=(test + program)/2;
		cout << avrge;
		if (avrge>=90)x='a';
		else if (avrge>=80)x='b';
		else if (avrge>=70)x='c';
		else if (avrge>=60)x='d';
		else cout<< "filed";

		cout << "your name is :"<<name1<<endl;
		cout<<"your fname is :"<<name2<<endl;
		cout <<"your test score is :"<<test<<endl;
		cout<<"your programming score is :"<<program<<endl;
		cout<<"your grade is :"<<x<<endl;




	}

	int main ()
	{

		string name1;
		string name2;

		int test;
		int program;
		int avrge;
		char x;
		read(name1,name2,test,program,avrge,x);

		return 0;
	}
	return 0;
}

