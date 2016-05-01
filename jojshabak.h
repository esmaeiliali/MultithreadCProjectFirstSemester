# include "sortbookdisplayjojshabak.h"
# include "sortbookmoalefjojshabak.h"
# include "sortbookchapjojshabak.h"
# include "sortbookmotarjemjojshabak.h"
# include "sortbooknamejojshabak.h"
# include "sortbooknasherjojshabak.h"
# include "sortbookvazeketabjojshabak.h"
# include "sortbooktypejojshabak.h"

int jojshabak(int b )
{
	int count=0;
	char l;
	int y = 0;
	l = getchar ();
		char a[20];
		int flag=0;
		cout << "lotfan shabak ketab ra vared konid" << endl;
		for (int k=0; k<20; ++k) {
		a[k] = getchar ();
		if (a[k]==10) {
			a[k]=0;
			break;
		}
		}
		int c = sortbookjojshabak ();
		switch (c) {
		case 1:
			y = sortbookmoalefjojshabak (a, count);
			break;
		case 2:
			y = sortbookchapjojshabak (a, count);
			break;
		case 3:
			y = sortbookmotarjemjojshabak (a, count);
			break;
		case 4:
			y = sortbooknamejojshabak (a, count);
			break;
		case 5:
			y = sortbooknasherjojshabak (a, count);
			break;
		case 6:
			y = sortbookvazeketabjojshabak (a, count);
			break;
		case 7:
			y = sortbooktypejojshabak (a, count);
			break;
		case 8:
			break;		
		}
	
		return 0;
}