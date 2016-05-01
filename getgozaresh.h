int getgozaresh ()
{
	FILE *fin = fopen("listketab.txt", "r");
	if( fin == NULL )
	{
		cout << "emkane gozareshgiri voojood nadarad, lotfan egdam konid" ;
		return 0;
	}
	fseek(fin, 0, SEEK_END);
	int q = ftell (fin);
	int w = sizeof(struct ketabkhane);
	int y = q/w;
	fseek(fin, 0, SEEK_SET);
	fread( &list, sizeof(struct ketabkhane), y, fin );
	SYSTEMTIME time;
	GetLocalTime( &time );
	int year = time.wYear;
	int month = time.wMonth;
	int day = time.wDay;
	for (int i = 0; i<y ; ++i) 
		if (list[i].bazgasht.day>day && list[i].bazgasht.month>=month && list[i].bazgasht.year>=year)
			cout << "bazgashte " << list[i].name << " az karbar " << list[i].karbar<< " dir shode." << endl;
		return 0;

}