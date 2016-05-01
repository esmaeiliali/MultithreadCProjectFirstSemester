int rezervbook ( int b, int i ) {
	char name[60];
	char fas[30];
	int flag=0;
	int qe;
	static int j=0;
	static int rs=0;
	FILE *fin = fopen("listketab.txt", "r+");
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
	fseek(fin, 0, SEEK_END);
	int q = ftell (fin);
	int w = sizeof(struct ketabkhane);
	int y = q/w;
	fseek(fin, 0, SEEK_SET);
	for (int p=0; p<b; p++) {
		fread( &name, sizeof(name), 1, fp );
	fread( &fas, sizeof(fas), 1, fp );
	}

	for (int k=0; k<i; k++) {
	fread( &list, sizeof(struct ketabkhane), 1, fin );
	}
	for (; j<100;)
	{
		fseek(fin, 0, SEEK_SET);
		SYSTEMTIME time;
		GetLocalTime( &time );
		int year = time.wYear;
		int month = time.wMonth;
		int day = time.wDay;
		for (; rs<100;) {
			int len = strlen(name);
			list[0].uv[rs] = new char *[len];
			strcpy( *list[0].uv[rs], name);
			rs++;
			break;
		}
		list[0].rezerv[j].day = day;  
		list[0].rezerv[j].month = month;  
		list[0].rezerv[j].year = year ;
		fseek (fin, - sizeof (struct ketabkhane), SEEK_CUR);
		fwrite( &list, sizeof(struct ketabkhane), 1, fin );
		cout << "ketab rezerv shod" << endl;
		char c = getchar ();
		fclose (fin);
		j++;
		flag++;
		qe = rezervbookdisplay2 ();
		if (qe==1)
			break;
		if (qe==2)
			return flag;
	}
	return flag;
}