int gtbook (int c, char d[])
{
		FILE *fin = fopen("listketab.txt", "r");
	if( fin == NULL )
	{
		cout << "jost o joo ba moshkel roo be roo shode, lotfan egdam konid" ;
		return 0;
	}
	FILE *fp = fopen("ozv.txt", "r");
	if( fin == NULL )
	{
		cout << "jost o joo ba moshkel roo be roo shode, lotfan egdam konid" ;
		return 0;
	}
	int flag=0;
	SYSTEMTIME time;
	GetLocalTime( &time );
	int year = time.wYear;
	int month = time.wMonth;
	int day = time.wDay;	
	for (int j=0; j<=c; ++j) {
	fread( &list, sizeof(struct ketabkhane), 1, fin );
	}
	int uo= strlen (d);
	for (int k=0; k<uo+1; ++k)
	{
		list[0].karbar[k] = d[k];
	}
	list[0].vazketab[0] = 'a';
	list[0].vazketab[1] = 'm';
	list[0].vazketab[2] = 'a';
	list[0].vazketab[3] = 'n';
	list[0].vazketab[4] = 'a';
	list[0].vazketab[5] = 't';
	list[0].vazketab[6] = 0;
	list[0].amanat.day = day;  
	list[0].amanat.month = month;  
	list[0].amanat.year = year ;
	list[0].gararbazgasht.day = rooz (day, month);			
	list[0].gararbazgasht.month = mah (day, month); 
	list[0].gararbazgasht.year = sal (day, month, year) ;
	MiladiToShamsi (month, day, year);
	list[0].gararbazgashtshamsi.year = shamsiYear;
	list[0].gararbazgashtshamsi.month = shamsiMonth;
	list[0].gararbazgashtshamsi.day = shamsiDay ;
	fseek (fin, - sizeof (struct ketabkhane), SEEK_CUR);
	fwrite( &list[0], sizeof(struct ketabkhane), 1, fin );
	fclose (fin);
	fclose (fp);
	cout << "ketab amanat dade shod" << endl; 
	flag++;
	cout << "Baraye edame barname kelidi ra vared konid" << endl;
	char g = getch ();
	return flag;
}