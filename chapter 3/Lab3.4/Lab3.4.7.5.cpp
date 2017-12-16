#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <ctime>

using namespace std;

struct Date 
{
	int year;
	int month;
	int day;
};

Date today(void)
{
	time_t t = time(NULL); 
	tm tl = *localtime(&t);
	return { tl.tm_year + 1900, tl.tm_mon + 1, tl.tm_mday };
}

int main(void)
{ 
	Date t = today();
	cout << t.year << "-" << t.month << "-" << t.day << endl;
	system("pause");
	return 0;
}