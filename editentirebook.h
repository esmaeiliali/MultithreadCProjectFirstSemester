int editentirebook (int b)
{
	int k = 0;
	FILE *fin = fopen("listketab.txt", "r+");
		if( fin == NULL )
		{
			cout << "Tagir shenase ketab ba moshkel roo be roo shode, lotfan egdam konid" ;
			return 0;
		}
			for (int k =0; k<=b; k++)
	{
		fread( &list[0], sizeof(struct ketabkhane), 1, fin );
			}
	cout << "ettellaate zir ra be tartib vared konid" << endl;
	cout << "Name ketab ra vared konid" << endl;
	cout << "zabane ketab ra vared konid" << endl;
	cout << "type ketab ra vared konid" << endl;
	cout << "motarjem aval ketab ra vared konid" << endl;
	cout << "motarjem dovom ketab ra vared konid" << endl;
	cout << "motarjem sevom ketab ra vared konid" << endl;
	cout << "motarjem chahrom ketab ra vared konid" << endl;
	cout << "motarjem panjom ketab ra vared konid" << endl;
	cout << "nasher ketab ra vared konid" << endl;
	cout << "moalefe aval ketab ra vared konid" << endl;
	cout << "moalefe dovom ketab ra vared konid" << endl;
	cout << "moalefe sevom ketab ra vared konid" << endl;
	cout << "moalefe chaharom ketab ra vared konid" << endl;
	cout << "moalefe panjom ketab ra vared konid" << endl;
	cout << "shabak ketab ra vared konid" << endl;
	cout << "keyfiyat ketab ra vared konid" << endl;
	cout << "tarikhe enteshare ketab ra vared konid, rooz va mah va sal ra joda vared konid" << endl;
	cout << "az vared kardane sefr jeloye maha va roozha jedan khod dari shavad" << endl;
	cout << "masalan be jaye vared kardane 02, 2 ra vared konid" << endl;
	cout << "shenase ketab ra vared konid" << endl; 
	cout << "---------------------------" << endl;
	char c = getch ();
		for (k=0; k<60; ++k) {
			list[0].name[k] = getchar ();
			if (list[0].name[k]==10) {
				list[0].name[k]=0;
				break;
			}
		}
		for ( k=0; k<15; ++k) {
			list[0].zaban[k] = getchar ();
			if (list[0].zaban[k]==10) {
				list[0].zaban[k]=0;
				break;
			}
		}
		for ( k=0; k<10; ++k) {
			list[0].type[k] = getchar ();
			if (list[0].type[k]==10) {
				list[0].type[k]=0;
				break;
			}
		}
		for ( k=0; k<20; ++k) {
			list[0].motarjem [k] = getchar ();
			if (list[0].motarjem [k]==10) {
				list[0].motarjem [k]=0;
				break;
			}
		}
		for ( k=0; k<20; ++k) {
			list[0].motarjem2 [k] = getchar ();
			if (list[0].motarjem2 [k]==10) {
				list[0].motarjem2 [k]=0;
				break;
			}
		}
		for ( k=0; k<20; ++k) {
			list[0].motarjem3 [k] = getchar ();
			if (list[0].motarjem3 [k]==10) {
				list[0].motarjem3 [k]=0;
				break;
			}
		}
		for ( k=0; k<20; ++k) {
			list[0].motarjem4 [k] = getchar ();
			if (list[0].motarjem4 [k]==10) {
				list[0].motarjem4 [k]=0;
				break;
			}
		}
		for ( k=0; k<20; ++k) {
			list[0].motarjem5 [k] = getchar ();
			if (list[0].motarjem5 [k]==10) {
				list[0].motarjem5 [k]=0;
				break;
			}
		}
		for ( k=0; k<30; ++k) {
			list[0].nasher[k] = getchar ();
			if (list[0].nasher[k]==10) {
				list[0].nasher[k]=0;
				break;
			}
		}
		for ( k=0; k<20; ++k) {
			list[0].moalef [k] = getchar ();
			if (list[0].moalef [k]==10) {
				list[0].moalef [k]=0;
				break;
			}
		}
		for ( k=0; k<20; ++k) {
			list[0].moalef2 [k] = getchar ();
			if (list[0].moalef2 [k]==10) {
				list[0].moalef2 [k]=0;
				break;
			}
		}
		for ( k=0; k<20; ++k) {
			list[0].moalef3 [k] = getchar ();
			if (list[0].moalef3 [k]==10) {
				list[0].moalef3 [k]=0;
				break;
			}
		}
		for ( k=0; k<20; ++k) {
			list[0].moalef4 [k] = getchar ();
			if (list[0].moalef4 [k]==10) {
				list[0].moalef4 [k]=0;
				break;
			}
		}
		for ( k=0; k<20; ++k) {
			list[0].moalef5 [k] = getchar ();
			if (list[0].moalef5 [k]==10) {
				list[0].moalef5 [k]=0;
				break;
			}
		}
		for ( k=0; k<20; ++k) {
			list[0].shabak[k] = getchar ();
			if (list[0].shabak[k]==10) {
				list[0].shabak[k]=0;
				break;
			}
		}
		scanf ("%s" , &list[0].keyfiyat);
		cin >> list[0].chap.day;
		cin >> list[0].chap.month;
		cin >> list[0].chap.year;
		cin >> list[0].booknumber;
		c = getchar ();
		currentbookNumber++;
		cout << "etellat ketab daryaft shod" << endl;
		fseek (fin, - sizeof (struct ketabkhane), SEEK_CUR);
		fwrite( &list[0], sizeof(struct ketabkhane), 1, fin );
		cout << "Baraye edmae barname kelidi ra bezanid" << endl;
	c = getch ();
	fclose (fin);
	return 0;
	}