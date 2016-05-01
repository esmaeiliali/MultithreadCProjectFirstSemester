int matchwholeword (char a[], int b)
 {
	int flag =0;
	int count =0;
			FILE *fin = fopen("listketab.txt", "r+");
		if( fin == NULL )
		{
			cout << "jost o joo dagige ketab ba moshkel roo be roo shode, lotfan egdam konid" ;
			return 0;
		}
		FILE *fp = fopen("ozv.txt", "r");
	if( fp == NULL )
	{
			cout << "rezerv ketab ba moshkel roo be roo shode, lotfan egdam konid" ;
			return 0;
	}
	fseek(fin, 0, SEEK_END);
		int q = ftell (fin);
		int w = sizeof(struct ketabkhane);
		int y = q/w;
		int r = strlen (a);
		int z=0;
		fseek(fin, 0, SEEK_SET); 
		for (int j = 0; j<y; ) {
			fread( &list, sizeof(struct ketabkhane), 1, fin );
			for (; z<r+1; ) {
				if (list[0].name[z], a[z]) {
					z++;
				}
				else
					break;
			}
			if (z==r+1)
			{			
				switch (list[0].vazketab[0]) {
				case 'm' : {
					cout << list[0].name << " az " << list[0].moalef << " mojood" << endl;
					int c = getbookdisplay();
					if (c==1) 
						flag = getbook (b, j, y);
					else
						flag++;
					break;
						   }
				case 0: {
					cout << list[0].name << " az " << list[0].moalef << " mojood" << endl;
					int c = getbookdisplay();
					if (c==1) 
						flag = getbook (b, j, y);
					else
						flag++;
					break;
						}
				case 'a':
					cout << list[0].name << " neveshte " << list[0].moalef << " tavasote " << list[0].karbar << " be amanat gerefte shode" << endl;
					int k = showbook();
					switch (k) { 
					case 1:
						flag = showdaterezerv (j);
						k =0;
						break;
					case 2: 
						flag = rezervbook (b, j);
						k =0;
						break;
				}
				}
				count++;
			}
		j++;
		z =0;
		}
		if (flag==0)
			cout << "een ketab voojood nadarad" << endl;
		fclose (fin);
		return count;
}
