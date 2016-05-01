extern int currentbookNumber;
struct date 
{
	int day;
	int month;
	int year;
};

struct ketabkhane
{
	char name[60];
	char moalef [20];
	char moalef2 [20];
	char moalef3 [20];
	char moalef4 [20];
	char moalef5 [20];
	char zaban[15];
	char nasher[30];
	char motarjem [20];
	char motarjem2 [20];
	char motarjem3 [20];
	char motarjem4 [20];
	char motarjem5 [20];
	struct date chap;
	char type[10];
	char keyfiyat[10];
	char vazketab[8];
	int booknumber;
	char shabak[20];
	struct date gararbazgashtshamsi;
	struct date gararbazgasht;
	struct date rezerv[100];
	char **uv[100];
	struct date amanat;
	char karbar[60];
	int edition;
	struct date bazgasht;
	struct date bazgashtshamsi;

};

struct ketabkhane list[2];

int insertbook()
{
	int k = 0;
	system("cls");
	char c;
	extern int tedadeketabvared;
	FILE *fin = fopen("listketab.txt", "r+");
	fseek(fin, 0, SEEK_END);
	setcolor (880);
	cout << "tedade ketabhaye jadid ra vared konid" << endl;
	cin >> tedadeketabvared;
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
	c = getchar ();
	for( int j=0; j< tedadeketabvared; ++j )
	{
		for ( k=0; k<60; ++k) {
			list[j].name[k] = getchar ();
			if (list[j].name[k]==10) {
				list[j].name[k]=0;
				break;
			}
		}
		for ( k=0; k<15; ++k) {
			list[j].zaban[k] = getchar ();
			if (list[j].zaban[k]==10) {
				list[j].zaban[k]=0;
				break;
			}
		}
		for ( k=0; k<10; ++k) {
			list[j].type[k] = getchar ();
			if (list[j].type[k]==10) {
				list[j].type[k]=0;
				break;
			}
		}
		for ( k=0; k<20; ++k) {
			list[j].motarjem [k] = getchar ();
			if (list[j].motarjem [k]==10) {
				list[j].motarjem [k]=0;
				break;
			}
		}
		for ( k=0; k<20; ++k) {
			list[j].motarjem2 [k] = getchar ();
			if (list[j].motarjem2 [k]==10) {
				list[j].motarjem2 [k]=0;
				break;
			}
		}
		for ( k=0; k<20; ++k) {
			list[j].motarjem3 [k] = getchar ();
			if (list[j].motarjem3 [k]==10) {
				list[j].motarjem3 [k]=0;
				break;
			}
		}
		for ( k=0; k<20; ++k) {
			list[j].motarjem4 [k] = getchar ();
			if (list[j].motarjem4 [k]==10) {
				list[j].motarjem4 [k]=0;
				break;
			}
		}
		for ( k=0; k<20; ++k) {
			list[j].motarjem5 [k] = getchar ();
			if (list[j].motarjem5 [k]==10) {
				list[j].motarjem5 [k]=0;
				break;
			}
		}
		for ( k=0; k<30; ++k) {
			list[j].nasher[k] = getchar ();
			if (list[j].nasher[k]==10) {
				list[j].nasher[k]=0;
				break;
			}
		}
		for ( k=0; k<20; ++k) {
			list[j].moalef [k] = getchar ();
			if (list[j].moalef [k]==10) {
				list[j].moalef [k]=0;
				break;
			}
		}
		for ( k=0; k<20; ++k) {
			list[j].moalef2 [k] = getchar ();
			if (list[j].moalef2 [k]==10) {
				list[j].moalef2 [k]=0;
				break;
			}
		}
		for ( k=0; k<20; ++k) {
			list[j].moalef3 [k] = getchar ();
			if (list[j].moalef3 [k]==10) {
				list[j].moalef3 [k]=0;
				break;
			}
		}
		for ( k=0; k<20; ++k) {
			list[j].moalef4 [k] = getchar ();
			if (list[j].moalef4 [k]==10) {
				list[j].moalef4 [k]=0;
				break;
			}
		}
		for ( k=0; k<20; ++k) {
			list[j].moalef5 [k] = getchar ();
			if (list[j].moalef5 [k]==10) {
				list[j].moalef5 [k]=0;
				break;
			}
		}
		for ( k=0; k<20; ++k) {
			list[j].shabak[k] = getchar ();
			if (list[j].shabak[k]==10) {
				list[j].shabak[k]=0;
				break;
			}
		}
		scanf ("%s" , &list[j].keyfiyat);
		cin >> list[j].chap.day;
		cin >> list[j].chap.month;
		cin >> list[j].chap.year;
		cin >> list[j].booknumber;
		c = getchar ();
		currentbookNumber++;
		cout << j+1 << " omeen ketab vared shod" << endl;
		fwrite( &list[j], sizeof(struct ketabkhane), 1, fin );
		cout << "Baraye edmae barname characteri ra bezanid, sepas ketabe badi ra vared konid" << endl;
		c = getch ();
		gotoxy (0, 24);
		clrchar (22*80);
		gotoxy (0, 24);
}
	cout << "Baraye edmae barname kelidi ra bezanid" << endl;
	c = getch ();
	fclose (fin);
	return 0;
}


	
	

