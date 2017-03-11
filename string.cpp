#include <iostream>
#include <conio.h>
#include <cstdio>

using namespace std;
char letters(char letter[], int number);
int main()
{
	char x[] = "";
	char ch;
	int i;
	for (i = 0; (ch = getche()) != '\r'; i++)
	{
	x[i] = ch;
	}
	letters(x,i);

	system ("pause");
}
char letters(char letter[], int number)
{
	char iletter;
	int inumber;
	for (inumber = 0;inumber < number;++inumber)
	{
		cout<<letter[inumber]<<endl;
	}
	return letter[number],number;

}

