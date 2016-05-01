int showdaterezerv (int i)	
{
				FILE *fin = fopen("listketab.txt", "r");
		if( fin == NULL )
		{
			cout << "jost o joo ba moshkel roo be roo shode, lotfan egdam konid" ;
			return 0;
		}
		for (int j = 0; j<i; ) {
			fread( &list, sizeof(struct ketabkhane), 1, fin );
		}
	int flag=0;
	cout << "tarike amanat : " << list[0].amanat.day << "/" << list[0].amanat.month << "/" << list[0].amanat.year << endl ;
	cout << "tarikh haye rezerv :" << endl;
for (int q=0; q<100; ) {
	if (list[0].rezerv[q].day==0)
		q++;
	else {
		cout << list[0].rezerv[q].day << "/" << list[0].rezerv[q].month << "/" << list[0].rezerv[q].year <<  endl;
		q++;
	}
}
flag++;
return flag;
}
