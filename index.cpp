#include <cstdio>
#include <ctime>
#include <iostream>
#include <string>
using namespace std;
int stopwatch();																	
int main()
{
	int stop; //i have give integar for the stop bec the stop hare i meen it when he press number to select some things
	time_t datetime;  //it`s mean datetime it`s mean the time now
	time (&datetime);
	cout<<ctime (&datetime)<<endl;	 //hare i tell you what is the time now
	cout<<endl<<"did you want to start stop watch ??"<<endl;  //hare i ask you if you want stopwatch promes
	cout<<"1=yes"<<endl;
	cout<<"2=no"<<endl;
	cin>>stop;	 //get the answer and put it in the stop integar
	if (stop == 1) //then the user want to start the stop watch
	{
	stopwatch(); //it`s the stopwatch funcion
	}
	else if (stop == 2);//then the user don`t want to start the stop watch then i will make a loops to clear the last date and rewrite the new data time
	{
		for (;;)   //it`s unlimte loops to replay the time if thare new
		{
	    	time_t retime;
	        time (&retime);
            cout<<ctime (&retime)<<endl;
		    system ("cls");
		}
	}
	system ("pause");	//hare i say stop for the console
}
int stopwatch()	  //it`s the fucking funcion
{
	unsigned int start = clock();	 //unsigned int i mean it`s will not change
	int end; //when he end the stopwatch time
	int sec;  //it`s the sec and it = 1000 milsec
	int min;   //min
	int hour;  //hours
	cout<<"hay in this time i have start the watch"<<endl;
	cin.ignore(); //to stop the funcion when you press any thing
	cout<<"if you want to end it press any kay and press enter and then i will tell how many time you have stoped it"<<endl;
	cin.ignore();
	end = clock() - start; //it`s mean when i end the stop watch it will the oldtime - newtime
	sec = end / 1000;  //to view the sec
	min = sec / 60;	   //to view min
	hour = min / 60;   //to view hour LOL
	cout<<"you have wait"<<endl;
	cout<<"sec:"<<sec<<" min:"<<min<<" hours:"<<hour<<endl;	 //it`s the preview the time how many you was stay
	system ("pause");	//at the last :D i have finsh
	return 0;  //thx my god :D
}
