int editpassmasool ()
{
	int h=0;
	int flag=0;
	char name[60];
	char fas[30];
	int i = 0;
	FILE *fin = fopen("insertpass.txt", "r");
	if( fin == NULL )
	{
		cout << "systeme karbar va ramz masoolin dochare moshkel shode, lotfan egdam befarmaeed" ;
		return 0;
	}
	while ( 	fread( &name, sizeof(name), 1, fin )>0 )
	{
		fread( &fas, sizeof(fas), 1, fin ); 
		h++;
	}
	fclose (fin);
	FILE *fp = fopen("insertpass.txt", "r+");
	if( fp == NULL )
	{
		cout << "Tagire ramze masool ba moshkel roo be roo shode, lotfan egdam konid" ;
			return 0;
		}
	cout << "User khod ra vared konid" << endl;
	extern char ramz[30];
	extern char karbar[60];
	scanf ("%s", &karbar);
	cout << "ramz ra baraye tagir vared konid" << endl;
	for (int i=0; i<30; ++i) {
		ramz[i] = getch ();
		if (ramz[i]==13) {
			ramz[i]=0;
			break;
		}
		printf ("%c" , '*') ;
	}
	char kar[60];
	char ram[30];
		for ( int op=0 ; op<h ; op++) {
		fread (&kar, sizeof (kar), 1, fp);  
		fread (&ram, sizeof (ram), 1, fp);  
		int y = strlen (ram);
		int x = strlen (kar);
		int p = strlen (ramz);
		int q = strlen (karbar);
		if (x == q && y==p) {
		for ( i=0; i<y; ) {
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
		if (flag==2)
		{
			cout << "ramz jadid ra vared konid" << endl;
	for (i=0; i<30; ++i) {
		ramz[i] = getch ();
		if (ramz[i]==13) {
			ramz[i]=0;
			break;
		}
		printf ("%c" , '*') ;
	}
	fseek (fp, - sizeof (ram), SEEK_CUR);
	fwrite (&ramz, sizeof (ram), 1, fp);
	fclose (fp);
	for (i=0; i<30; ++i) 
		ramz[i] = 0;
	for (i=0; i<60; ++i) 
		karbar[i]=0;
	cout << "Ramz ba movafagiyat tagir yaft" << endl;
	cout << "Baraye edame kelidi ra bezanid" << endl;
	char c = getch ();
	c = getch ();
	return 0;
		}
		else { 
	for (i=0; i<30; ++i) 
		ramz[i] = 0;
	for (i=0; i<60; ++i) 
		karbar[i]=0;
			cout << "Username va password eshtebah vared shode" << endl;
			tone();
			cout << "Baraye edamde kelidi ra bezanid" << endl;
			char c = getch ();
			c = getch ();
			return 0;
		}
	
}
