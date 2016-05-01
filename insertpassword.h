# include "delbook.h"
# include "getgozaresh.h"
# include "editbook.h"

extern char karbar[60];
char c;

int insertpass() 
{
	int i = 0;
	system("cls");
	int h=0;
	int flag=0;
	char name[60];
	char fas[30];
	setcolor(176);
	FILE *fin = fopen("insertpass.txt", "r");
	if( fin == NULL )
	{
		cout << "systeme karbar va ramz dochare moshkel shode, lotfan egdam befarmaeed" ;
		return 0;
	}
	while ( 	fread( &name, sizeof(name), 1, fin )>0 )
	{
		fread( &fas, sizeof(fas), 1, fin ); 
		h++;
	}
	fclose (fin);
	FILE *fp = fopen("insertpass.txt", "r");
	if( fp == NULL )
	{
		cout << "jost o joo ozv ba moshkel roo be roo shode, lotfan egdam konid" ;
		return 0;
	}
	gotoxy (0,0);
	cout << "User va password khod ra joda vared konid" << endl;
	char kar[60];
	char ram[30];
	extern char ramz[30];
	for (int i=0; i<60; ++i) {
		karbar[i] = getchar ();
		if (karbar[i]==10) {
			karbar[i]=0;
			break;
		}
	}
	for (i=0; i<30; ++i) {
		ramz[i] = getch ();
		if (ramz[i]==13) {
			ramz[i]=0;
			break;
		}
		printf ("%c" , '*') ;
	}
	cout << endl;
	for ( int op=0 ; op<h ; op++) {
		fread (&kar, sizeof (kar), 1, fp);  
		fread (&ram, sizeof (ram), 1, fp);  
		int y = strlen (ram);
		int x = strlen (kar);
		int p = strlen (ramz);
		int q = strlen (karbar);
		if (x == q && y==p) {
		for (int i=0; i<y; ) {
			if (ramz[i]==ram[i])
				++i;
		else
			break;
		}
		if (i==y)
			flag++;
		else
			flag=0;
		for ( i=0; i<x; ) {
			if (kar[i]==karbar[i])
				++i;
			else
				break;
		}
		if (i==x)
			flag++;
		else
			flag=0;
		}
		if (flag==2)
			break;
	}
			fclose(fp);
			if (flag==2) {
				displaymasool();
				Sleep (5000);
				switch(c) 
			{
			case '1':
				insertbook();
				break;
			case '2':
				delbook();
				break;
			case '3':
				editbook ();
				break;
			case '4':
				getgozaresh();
				break;
				}
			}
			else {
				cout << "karbar ya ramz eshtebah vared shode ast" << endl;
				tone ();
			}
			for (i=0; i<60; ++i) 
			karbar[i]=0;
			for (i=0; i<30; ++i) 
			ramz[i]=0;
			return 0;
}
	
