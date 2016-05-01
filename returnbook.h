# include "payment.h"

int retbook (int b)
{
	char d[60];
	char th[30];
	SYSTEMTIME time;
	GetLocalTime( &time );
	int year = time.wYear;
	int month = time.wMonth;
	int day = time.wDay;
	int i = 0;
	FILE *fin = fopen("listketab.txt", "r+");
	if( fin == NULL )
	{
		cout << "bazgasht ketab ba moshkel roo be roo shode, lotfan egdam konid" ;
		return 0;
	}
	FILE *fp = fopen("ozv.txt", "r");
	if( fin == NULL )
	{
		cout << "jost o joo az tarige shabak ba moshkel roo be roo shode, lotfan egdam konid" ;
		return 0;
	}
	fseek(fin, 0, SEEK_END);
	int q = ftell (fin);
	int w = sizeof(struct ketabkhane);
	int y = q/w;
	fseek(fin, 0, SEEK_SET); 
	fseek(fin, 0, SEEK_SET);
	fseek(fp, 0, SEEK_SET);
	for (i=0; i<b; ++i) {
		fread( &d , sizeof (d) , 1, fp );
		fread( &th , sizeof (th) , 1, fp );
	}
	char c = getchar ();
	for (i = 0; i<y; ) {
		fread( &list, sizeof(struct ketabkhane), 1, fin );
		if (strstr (list[0].karbar, d)>0) {
	list[0].bazgasht.day = day;  
	list[0].bazgasht.month = month;  
	list[0].bazgasht.year = year ;
	list[0].vazketab[0] = 'm';
	list[0].vazketab[1] = 'o';
	list[0].vazketab[2] = 'j';
	list[0].vazketab[3] = 'o';
	list[0].vazketab[4] = 'o';
	list[0].vazketab[5] = 'd';
	list[0].vazketab[6] = 0;
	int tedad= payment (i);
	if (tedad>=8)
	{
		int roozha =tedad-7;
		int pool = roozha*100;
		cout << "Shoma bayad " << pool << " pool be ketabkhane jarime dahid." << endl;
		}
	}
		list[i].karbar[i]=0;
		i++;
	}
	fseek(fin, 0, SEEK_SET); 
	fwrite( &list, sizeof(struct ketabkhane), y, fin );
	fclose (fin);
	cout << "Ketab ba Movafagiyat bazgasht dade shod" << endl;
	return 0;
}









