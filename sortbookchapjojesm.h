int sortbookchapjojesm (char a[], int count)
{
			FILE *fin = fopen("listketab.txt", "r+");
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
	int k=0;
	int i=0;
	int *s = new int[count];
		for ( int j = 0; j<y; ) {
			fread( &list, sizeof(struct ketabkhane), 1, fin );
			if (strstr (list[0].name, a)>0) {
					for (; k<count;) {
							s[k]= j;
							k++;
							break;
					
				}
			j++;

		}
			else
				j++;
		}
	FILE *fp = fopen("moratabsazi.txt", "w+");
	if( fp == NULL )
	{
		cout << "moratabsazi natayej ba moshkel roo be roo shode, lotfan egdam konid" ;
		return 0;
	}
	int kp=0;
	int flag = 0;
	for( k=0; k<=count-1; k++) {
		fseek(fin, 0, SEEK_SET); 
		fseek(fin, ((s[k])* sizeof (struct ketabkhane)), SEEK_CUR); 
		fread( &list[0], sizeof(struct ketabkhane), 1,fin );
		for (  kp=k+1; kp<=count-1; kp++) {
					fseek(fin, 0, SEEK_SET);
			fseek(fin, ((s[kp])* sizeof (struct ketabkhane)), SEEK_CUR); 
			fread( &list[1], sizeof(struct ketabkhane), 1,fin );
		if( list[1].chap.year<list[0].chap.year || (list[1].chap.year<=list[0].chap.year &&  list[1].chap.month< list[0].chap.month) || (list[1].chap.year<=list[0].chap.year &&  list[1].chap.month<=list[0].chap.month && list[1].chap.day<list[0].chap.day ))
		{
				strcpy( a, list[0].moalef );
				strcpy( list[0].moalef, list[1].moalef );
				strcpy( list[1].moalef, a );
				strcpy( a, list[0].moalef2 );
				strcpy( list[0].moalef2, list[1].moalef2 );
				strcpy( list[1].moalef2, a );
				strcpy( a, list[0].moalef3 );
				strcpy( list[0].moalef3, list[1].moalef3 );
				strcpy( list[1].moalef3, a );
				strcpy( a, list[0].moalef4 );
				strcpy( list[0].moalef4, list[1].moalef4 );
				strcpy( list[1].moalef4, a );
				strcpy( a, list[0].moalef5 );
				strcpy( list[0].moalef5, list[1].moalef5 );
				strcpy( list[1].moalef5, a );
				strcpy( a, list[0].name );
				strcpy( list[0].name, list[1].name );
				strcpy( list[1].name, a );
				strcpy( a, list[0].zaban );
				strcpy( list[0].zaban, list[1].zaban );
				strcpy( list[1].zaban, a );
				strcpy( a, list[0].nasher );
				strcpy( list[0].nasher, list[1].nasher );
				strcpy( list[1].nasher, a );
				strcpy( a, list[0].motarjem );
				strcpy( list[0].motarjem, list[1].motarjem );
				strcpy( list[1].motarjem, a );
				strcpy( a, list[0].motarjem2 );
				strcpy( list[0].motarjem2, list[1].motarjem2 );
				strcpy( list[1].motarjem2, a );
				strcpy( a, list[0].motarjem3 );
				strcpy( list[0].motarjem3, list[1].motarjem3 );
				strcpy( list[1].motarjem3, a );
				strcpy( a, list[0].motarjem4 );
				strcpy( list[0].motarjem4, list[1].motarjem4 );
				strcpy( list[1].motarjem4, a );
				strcpy( a, list[0].motarjem5 );
				strcpy( list[0].motarjem5, list[1].motarjem5 );
				strcpy( list[1].motarjem5, a );
				strcpy( a, list[0].type );
				strcpy( list[0].type, list[1].type );
				strcpy( list[1].type, a );
				strcpy( a, list[0].keyfiyat );
				strcpy( list[0].keyfiyat, list[1].keyfiyat );
				strcpy( list[1].keyfiyat, a );
				strcpy( a, list[0].vazketab );
				strcpy( list[0].vazketab, list[1].vazketab );
				strcpy( list[1].vazketab, a );
				strcpy( a, list[0].shabak );
				strcpy( list[0].shabak, list[1].shabak );
				strcpy( list[1].shabak, a );
				strcpy( a, list[0].karbar );
				strcpy( list[0].karbar, list[1].karbar );
				strcpy( list[1].karbar, a );
				y = list[1].amanat.day ;
				list[1].amanat.day= list[0].amanat.day;
				list[0].amanat.day = y;
				y = list[1].amanat.month ;
				list[1].amanat.month= list[0].amanat.month;
				list[0].amanat.month = y;
				y = list[1].amanat.year ;
				list[1].amanat.year= list[0].amanat.year;
				list[0].amanat.year = y;
				y = list[1].bazgasht.day ;
				list[1].bazgasht.day= list[0].bazgasht.day;
				list[0].bazgasht.day = y;
				y = list[1].bazgasht.month ;
				list[1].bazgasht.month= list[0].bazgasht.month;
				list[0].bazgasht.month = y;
				y = list[1].bazgasht.year ;
				list[1].bazgasht.year= list[0].bazgasht.year;
				list[0].bazgasht.year = y;
				y = list[1].booknumber;
				list[1].booknumber= list[0].booknumber;
				list[0].booknumber = y;
				y = list[1].chap.day ;
				list[1].chap.day= list[0].chap.day;
				list[0].chap.day = y;
				y = list[1].chap.month ;
				list[1].chap.month= list[0].chap.month;
				list[0].chap.month = y;
				y = list[1].chap.year ;
				list[1].chap.year= list[0].chap.year;
				list[0].chap.year = y;
				y = list[1].gararbazgasht.day ;
				list[1].gararbazgasht.day= list[0].gararbazgasht.day;
				list[0].gararbazgasht.day = y;
				y = list[1].gararbazgasht.month ;
				list[1].gararbazgasht.month= list[0].gararbazgasht.month;
				list[0].gararbazgasht.month = y;
				y = list[1].gararbazgasht.year ;
				list[1].gararbazgasht.year= list[0].gararbazgasht.year;
				list[0].gararbazgasht.year = y;
				for (i=0; i<100; i++) {
				y = list[1].rezerv[i].day ;
				list[1].rezerv[i].day= list[0].rezerv[i].day;
				list[0].amanat.day = y;
				y = list[1].rezerv[i].month ;
				list[1].rezerv[i].month= list[0].rezerv[i].month;
				list[0].rezerv[i].month = y;
				y = list[1].rezerv[i].year ;
				list[1].rezerv[i].year= list[0].rezerv[i].year;
				list[0].rezerv[i].year = y;
				flag++;
				}
			}
		}
		
				}
				for( k=0; k<count; k++ ) {
		fseek(fin, 0, SEEK_SET); 
		fseek(fin, ((s[k])* sizeof (struct ketabkhane)), SEEK_CUR); 
		fread( &list[0], sizeof(struct ketabkhane), 1,fin );
		fwrite( &list[0], sizeof(struct ketabkhane), 1, fp );
		cout << "name ketab : " << list[0].name << endl;
				cout << "name moalef : " <<list[0].moalef << endl ;
				cout << "noe ketab : " << list[0].type << endl;
				cout << "zabane ketab : " << list[0].zaban << endl;
				cout << "motarjem ketab : " << list[0].motarjem << endl;
				cout << "keyfiat ketab : " <<list[0].keyfiyat << endl;
				cout << "vaziyate ketab : " <<list[0].vazketab << endl;
				cout << "--------------------------" << endl ;
				char c = getch ();
				}
				fclose (fp);
			return 0;
			}