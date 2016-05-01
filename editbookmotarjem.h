int editbookmotarjem (int b)
{
		FILE *fin = fopen("listketab.txt", "r+");
		if( fin == NULL )
		{
			cout << "Tagir Motarjemeen ketab ba moshkel roo be roo shode, lotfan egdam konid" ;
			return 0;
		}
			for (int k =0; k<=b; k++)
	{
		fread( &list[0], sizeof(struct ketabkhane), 1, fin );
			}
			cout << "Name motarjemeen ketab ra vared konid" << endl;
			cin >> list[0].motarjem;
			cin >> list[0].motarjem2;
			cin >> list[0].motarjem3;
			cin >> list[0].motarjem4;
			cin >> list[0].motarjem5;
			fseek (fin, - sizeof (struct ketabkhane), SEEK_CUR);
			fwrite ( &list[0], sizeof(struct ketabkhane), 1, fin );
			cout << "Motarjemeen ketab avaz shod" << endl;
			cout << "baraye edame barname kelidi ra bezanid" << endl;
			char c = getch ();
			c = getch ();
			fclose (fin);
			return 0;
}

