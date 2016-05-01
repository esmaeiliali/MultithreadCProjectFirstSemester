int delbook() {
	int k = 0;
	FILE *fin = fopen("listketab.txt", "r");
		if( fin == NULL )
		{
			cout << "hazfe ketab ba moshkel roo be roo shode, lotfan egdam konid" ;
			return 0;
		}
			FILE *fp = fopen("newbooklist.txt", "w+");
		if( fin == NULL )
		{
			cout << "hazfe ketab ba moshkel roo be roo shode, lotfan egdam konid" ;
			return 0;
		}
			fseek(fin, 0, SEEK_END);
		int q = ftell (fin);
		int w = sizeof(struct ketabkhane);
		int y = q/w;
		fseek(fin, 0, SEEK_SET); 
	system("cls");
	setcolor (975);
	extern int num;
	cout << "lotfan shenase ketab ra vared konid" << endl;
	cin >> num;
	for (int k =0; k<y-1; k++)
	{
		fread( &list[0], sizeof(struct ketabkhane), 1, fin );
		if(list[0].booknumber == num)
		{
			fread( &list[0], sizeof(struct ketabkhane), 1, fin );
		}
		fwrite( &list[0], sizeof(struct ketabkhane), 1, fp );
	}
	fclose (fp);
	fclose (fin);

	FILE *fr = fopen("listketab.txt", "w+");
		if( fin == NULL )
		{
			cout << "hazfe ketab ba moshkel roo be roo shode, lotfan egdam konid" ;
			return 0;
		}
			FILE *fs = fopen("newbooklist.txt", "r");
		if( fin == NULL )
		{
			cout << "hazfe ketab ba moshkel roo be roo shode, lotfan egdam konid" ;
			return 0;
		}

		for (k =0; k<y-1; k++)
	{
		fread( &list[0], sizeof(struct ketabkhane), 1, fs );
		fwrite( &list[0], sizeof(struct ketabkhane), 1, fr );
		}
		fclose (fr);
		fclose (fs);
		cout << "ketab ba movafagiyat hazf shod" << endl;
		cout << "baraye edame barname kelidi ra bezanid" << endl;
		char c = getch ();
		return 0;
}
