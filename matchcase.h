int matchcase (char a[], int b)
{
			int flag=0;
			FILE *fin = fopen("listketab.txt", "r+");
		if( fin == NULL )
		{
			cout << "jost o joo ba moshkel roo be roo shode, lotfan egdam konid" ;
			return 0;
		}
		int count =0;
	fseek(fin, 0, SEEK_END);
		int q = ftell (fin);
		int w = sizeof(struct ketabkhane);
		int y = q/w;
		fseek(fin, 0, SEEK_SET); 
		for (int j = 0; j<y; ) {
			fread( &list, sizeof(struct ketabkhane), 1, fin );
			if (strstr (list[0].name, a)>0) {
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
				case 'a': {
					cout << list[0].name << " neveshte " << list[0].moalef << " tavasote " << list[0].karbar << " be amanat gerefte shode" << endl;
					int k = showbook();
					switch (k) { 
					case 1:
						flag = showdaterezerv (j);
						k =0;
						break;
					case 2: 
						flag = rezervbook (b, j);
						k = 0;
						break;
				}
						  }
					case 'r' : {
						cout << list[0].name << " neveshte " << list[0].moalef << " tavasote " << flush ;
							for (int rs=0; rs<100; rs++) {
								if (!*list[0].uv[rs])
									cout <<	*list[0].uv[rs] << endl;
							}
							cout << "rezerv shode" << endl;
							break;
				}
				}
				count++;
			}
		j++;
		}
		if (flag==0)
			cout << "een ketab voojood nadarad" << endl;

		fclose (fin);
		return count;
}