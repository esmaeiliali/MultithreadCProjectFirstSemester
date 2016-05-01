int editpassozv ()
{
	int h=0;
	int flag=0;
	char name[60];
	char fas[30];
	int i=0;
	FILE *fin = fopen("ozv.txt", "r");
	if( fin == NULL )
	{
			cout << "jost o joo ozv ba moshkel roo be roo shode, lotfan egdam konid" ;
			return 0;
	}
	while ( 	fread( &name, sizeof(name), 1, fin )>0 )
	{
		fread( &fas, sizeof(fas), 1, fin ); 
		h++;
	}
	fclose (fin);
	FILE *fp = fopen("ozv.txt", "r+");
	if( fp == NULL )
	{
			cout << "jost o joo ozv ba moshkel roo be roo shode, lotfan egdam konid" ;
			return 0;
	}
		cout << "User khod ra vared konid" << endl;
	char kar[60];
	char ram[30];
	char karbar[60];
	char ramz[30];
	scanf ("%s", &karbar);
	cout << "ramz khod ra vared konid" << endl;
	for (i= 0; i<30; ++i) {
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
		for ( i=0; i<x; ) {
			if (kar[i]==karbar[i])
				++i;
			else
				break;
		}
		if (i==x)
			flag++;
		}
		if (flag==2)
			break;
		else
			flag=0;
	}
	if (flag==0 || flag==1) {
				cout << "Karbar ya ramz eshtebah vared shode" << endl;
				return 0;
			}
	cout << "Ramz jadid khod ra vared konid" << endl;
			for (i=0; i<30; ++i) {
		ram[i] = getch ();
		if (ram[i]==13) {
			ram[i]=0;
			break;
		}
		printf ("%c" , '*') ;
	}
	fseek (fp, - sizeof (ramz), SEEK_CUR); 
	fwrite (&ram, sizeof (ram), 1, fp);
	fclose (fp);
	cout << "Ramz ba movafagiyat tagir yaft" << endl;
	cout << "Baraye edame barname kelidi ra bezanid" << endl;
	char c = getch ();
	return 0;
}

