

int addozv ()
{
	FILE *fin = fopen("ozv.txt", "r+");
	if( fin == NULL )
	{
		cout << "ezafe kardane ozv ba moshkel roo be roo shode, lotfan egdam konid" ;
			return 0;
		}
	cout << "User khod ra vared konid" << endl;
	char karbar[60];
	char ramz[30];
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
	cout << "Daryafte ozv ba movafagiyat anjam shod" << endl;
	tone2();
	cout << "Baraye edamde kelidi ra bezanid" << endl;
	char c = getchar ();
	c = getch ();
	fclose (fin);
	return 0;
}