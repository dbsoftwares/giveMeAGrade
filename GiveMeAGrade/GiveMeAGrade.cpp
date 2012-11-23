// GiveMeAGrade.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "conio.h"
#include <string>
#include <iostream>

using namespace std;

	string firstName = "";
	string lastName = "";
	int testScore = 0;
	int programmingScore = 0;
	int averageScore = 0;
	char grade;

void getInputFromUser()
{
	cout <<"Enter your first name"<< endl;
	cin >> firstName;
	cout <<"Enter your last name"<< endl;
	cin >> lastName;
	cout <<"Enter your test score"<< endl;
	cin >> testScore;
	cout <<"Enter your programming score"<< endl;
	cin>> programmingScore;
}

void calculateGrade(int testScore,int programmingScore)
{
	averageScore = (testScore + programmingScore)/2;

	if (averageScore >= 90 ) grade ='A';
	else if (averageScore >= 80 ) grade ='B';
	else if (averageScore >= 70 ) grade ='C';
	else if (averageScore >= 60 ) grade ='D';
	else grade ='E';
	
}

void printDataToStdOutput ()
{
	cout << "Your name is : "<< firstName + " "+ lastName <<endl;
	cout << "Your test score is : "<< testScore <<endl;
	cout << "Your programming score is : " << programmingScore <<endl;
	cout << "Your average score is: " << averageScore <<endl;
	cout << "Your grade is : grade " <<grade <<endl;
	cout << "Filed...";
}
		
		
int _tmain(int argc, _TCHAR* argv[])
{
	getInputFromUser();
	calculateGrade(testScore, programmingScore);
	printDataToStdOutput();
	getch();
	return 0;
}


