# include "sortbookdisplayjojmozoo.h"
# include "sortbookmoalefjojmozoo.h"
# include "sortbookchapjojmozoo.h"
# include "sortbookmotajemjojmozoo.h"
# include "sortbookshabakjojmozoo.h"
# include "sortbooknasherjojmozoo.h"
# include "sortbookvazeketabjojmozoo.h"
# include "sortbooknamejojmozoo.h"


int jojmozoo (int b )
{

	int k=0;
	int count=0;
	char l;
	l = getchar ();
		FILE *fin = fopen("listketab.txt", "r+");
		if( fin == NULL )
		{
			cout << "jost o joo ba moshkel roo be roo shode, lotfan egdam konid" ;
			return 0;
		}
		FILE *fp = fopen("ozv.txt", "r");
		if( fin == NULL )
		{
			cout << "jost o joo ba moshkel roo be roo shode, lotfan egdam konid" ;
			return 0;
		}
		char a[10];
		int flag=0;
		cout << "lotfan type ketab ra vared konid" << endl;
		for (k = 0; k<10; ++k) {
		a[k] = getchar ();
		if (a[k]==10) {
			a[k]=0;
			break;
		}
		}
		fseek(fin, 0, SEEK_END);
		int q = ftell (fin);
		int w = sizeof(struct ketabkhane);
		int y = q/w;
		fseek(fin, 0, SEEK_SET); 
		for (int j = 0; j<y; ) {
			fread( &list, sizeof(struct ketabkhane), 1, fin );
			if (strstr (list[0].type, a)>0) {
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
					 k = showbook();
					switch (k) { 
					case 1:
						flag = showdaterezerv (j);
						break;
					case 2: 
						flag = rezervbook (b, j);
						break;
				}
				}
				count++;
			}
		k=0;
		j++;
		}
		if (flag==0)
			cout << "een ketab voojood nadarad" << endl;

		fclose (fin);
		int c = sortbookjojmozoo ();
		switch (c) {
		case 1:
			y = sortbookmoalefjojmozoo (a, count);
			break;
		case 2:
			y = sortbookchapjojmozoo (a, count);
			break;
		case 3:
			y = sortbookmotarjemjojmozoo (a, count);
			break;
		case 4:
			y = sortbookshabakjojmozoo (a, count);
			break;
		case 5:
			y = sortbooknasherjojmozoo (a, count);
			break;
		case 6:
			y = sortbookvazeketabjojmozoo (a, count);
			break;
		case 7:
			y = sortbooknamejojmozoo (a, count);
			break;
		case 8:
			break;
		
		}
		
		return 0;
}