int addmasool ()
{
	int i = 0;
	setcolor (1600);
	system("cls");
	extern char ramz[30];
	extern char karbar[60];
	FILE *fin = fopen("insertpass.txt", "r+");
	if( fin == NULL )
	{
		cout << "ezafe kardane masool ba moshkel roo be roo shode, lotfan egdam konid" ;
			return 0;
		}
	cout << "User khod ra vared konid" << endl;
	scanf ("%s", &karbar);
	cout << "ramz khod ra vared konid" << endl;
	for (int i=0; i<30; ++i) {
		ramz[i] = getch ();
		if (ramz[i]==13) {
			ramz[i]=0;
			break;
		}
		printf ("%c" , '*') ;
	}
	fseek(fin, 0, SEEK_END);
	fwrite( &karbar , sizeof (karbar) , 1, fin );
	fwrite( &ramz, sizeof (ramz), 1, fin );
	cout << endl;
	cout << "Daryafte masool ba movafagiyat anjam shod" << endl;
	cout << "Baraye edamde kelidi ra bezanid" << endl;
	for (i=0; i<60; ++i) {
		karbar[i]=0;
		break;
	}
	for (i=0; i<30; ++i) {
		ramz[i]=0;
		break;
	}
	char c = getchar ();
	c = getch ();
	fclose (fin);
	return 0;
}