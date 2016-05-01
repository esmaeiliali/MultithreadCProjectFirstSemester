int hazfmasool ()
{
	int h=0;
	int flag=0;
	char name[60];
	char fas[30];
	int i = 0;
	int op=0;
	int as=0;
	FILE *fin = fopen("insertpass.txt", "r");
	if( fin == NULL )
	{
		cout << "systeme karbar va ramz dochare moshkel shode, lotfan egdam befarmaeed" ;
		return 0;
	}
	while ( 	fread( &name, sizeof(name), 1, fin )>0 )
	{
		fread( &fas, sizeof(fas), 1, fin ); 
		h++;
	}
	fclose (fin);
	FILE *fp = fopen("insertpass.txt", "r");
	if( fp == NULL )
	{
		cout << "hazf kardane masool ba moshkel roo be roo shode, lotfan egdam konid" ;
			return 0;
		}
	cout << "User baraye hazf ra vared konid" << endl;
	extern char karbar[60];
	extern char ramz[30];
	scanf ("%s", &karbar);
	cout << "ramz ra baraye hazf vared konid" << endl;
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
		for ( op = 0 ; op<h ; op++) {
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
	}
		if (flag==2) {
		 int q = op;
		 	FILE *fq = fopen("hazfemasool.txt", "w+");
	if( fq == NULL )
	{
		cout << "hazf kardane masool ba moshkel roo be roo shode, lotfan egdam konid" ;
			return 0;
			
		}
	fseek (fp, 0, SEEK_SET);
		for ( op=0 ; op<q ; op++) {
		fread (&kar, sizeof (kar), 1, fp);  
		fread (&ram, sizeof (ram), 1, fp);
		fwrite( &kar , sizeof (kar) , 1, fq );
		fwrite( &ram, sizeof (ram), 1, fq );
		}
		fread (&kar, sizeof (kar), 1, fp);  
		fread (&ram, sizeof (ram), 1, fp);
	    for (as = 0; as<h-op-1 ; ++as) {
		fread (&kar, sizeof (kar), 1, fp);  
		fread (&ram, sizeof (ram), 1, fp);
		fwrite (&kar, sizeof (kar), 1, fq);  
		fwrite (&ram, sizeof (ram), 1, fq);
		}
		fclose (fq);
		fclose (fp);
	FILE *fr = fopen("hazfemasool.txt", "r");
	if( fq == NULL )
	{
		cout << "hazf kardane masool ba moshkel roo be roo shode, lotfan egdam konid" ;
			return 0;
			
		}
	FILE *fs = fopen("insertpass.txt", "w+");
	if( fq == NULL )
	{
		cout << "hazf kardane masool ba moshkel roo be roo shode, lotfan egdam konid" ;
			return 0;
			
		}
		for ( as=0; as<h-1 ; ++as) {
		fread (&kar, sizeof (kar), 1, fr);  
		fread (&ram, sizeof (ram), 1, fr);
		fwrite (&kar, sizeof (kar), 1, fs);  
		fwrite (&ram, sizeof (ram), 1, fs);
		}
		fclose (fr);
		fclose (fs);
		cout << endl;
	cout << "Hazfe masool ba movafagiyat anjam shod" << endl;
	cout << "Baraye edamde kelidi ra bezanid" << endl;
	char c = getch ();
	c = getch ();
	fclose (fq);
	for (i=0; i<30; ++i) 
		ramz[i] = 0;
	for (i=0; i<60; ++i) 
		karbar[i]=0;
	return 0;
		}
		else { 
			for (i=0; i<30; ++i) 
				ramz[i] = 0;
			for (i=0; i<60; ++i) 
				karbar[i]=0;
			cout << "Username va password eshtebah vared shode" << endl;
			tone();
			cout << "Baraye edamde enter ra bezanid" << endl;
			char c = getch ();
			c = getch ();
			return 0;
		}
}
