# include <stdio.h>
# include <fstream>
# include <conio.h>
# include <string.h>
# include <windows.h>
# include <time.h>
#include <process.h>
using namespace std;
# include "miladitoshamsi.h"
#include "gotoxy.h"
# include "clrpartscreen.h"
# include "tone.h"
# include "tone2.h"
# include "tone3.h"
# include "tone4.h"
#include <iostream>
# include "tone5.h"
# include "tone6.h"
# include "pthread.h"
# include "setcolor.h"
# include "displayasli.h"
# include "displaymasool.h"
# include "displaykarbar.h"
# include "returnbookday.h"
# include "returnbookmonth.h"
# include "returnbookyear.h"
# include "bookrezervdisplay.h"
# include "getbookdisplay.h"
# include "insertbook.h"
# include "insertpassword.h"
# include "jojesm.h"
# include "jojmoalef.h"
# include "jojmozoo.h"
# include "jojkalame.h"
# include "searchbook.h"
# include "searchozv.h"
# include "addozv.h"
# include "addmasool.h"
# include "hazfmasool.h"
# include "delozv.h"
# include "editpassozv.h"
# include "editpassmasool.h"
# include "sjk.h"
# include "sjk2.h"
# include "graphic.h"
# include "ploader.h"
//# include "sjk3.h"
# include "mouse.h"
//# include <mouse.h>


int flag=0;
char choice;
char karbar[60];
char ramz[30];
int tedadeketabvared;
int currentbookNumber = 0;
int num;

void * time1(void *p)
{
	
	while (1) {
		char date[9] , time[9];
	_strtime(time);
	_strdate(date);
	char UpdateTime[100];
	strcpy(UpdateTime,"title Current date is: ");
	strcat(UpdateTime,date);
	strcat(UpdateTime,"                                                   Current time is: ");
    strcat(UpdateTime,time);
	system(UpdateTime);
	Sleep(1000);
	}
	return NULL;
}
int main () {
	pthread_t pt;
	pthread_t et;
	int handle=pthread_create(&pt,NULL,&time1,NULL);
	int handle1=pthread_create(&et,NULL,&mouse,NULL);
	Sleep (700);
	ploader();
	sjk();
	system ("cls");
	gotoxy (0,0);
	displayasli();
	Sleep (1000);
	while (1) {
		switch(choice) {
	case '1':
		insertpass ();
		break;
	case '2':
		addmasool ();
		break;
	case '3':
		hazfmasool();
		break;
	case '4':
		editpassmasool();
		break;
	case '5': {
		int y = searchozv();
		if (y==0) {
			cout << "ozvi ba een user va password voojood nadarad"<< endl;
			tone ();
			cout << "baraye edame, kelidi ra bezanid" << endl ;
			char c = getchar ();
			c = getch ();
			break;
		}
		else {
		int x = displaykarbar();
		searchitem(x, y);
		break;
		}
			}
	case '6':
		addozv();
		break;
	case '7':
		delozv();
		break;
	case '8':
		editpassozv ();
		break;
	case '9':
//		sjk3();
		break;
	}
		system("cls");
		choice = displayasli();
		Sleep (5000);
	}
	return 0;
}















