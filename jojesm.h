# include "bookrezervdisplay2.h"
# include "sortbookdisplayjojesm.h"
# include "getbook.h"
# include "showdaterezerv.h"
# include "rezervbook.h"
# include "sortbookmoalefjojesm.h"
# include "sortbookchapjojesm.h"
# include "sortbookmotajemjojesm.h"
# include "sortbookshabakjojesm.h"
# include "sortbooknasherjojesm.h"
# include "sortbookvazketabjojesm.h"
# include "sortbooktypejojesm.h"
# include "displaytypesearch.h"
# include "matchcase.h"
# include "matchwholeword.h"

int jojesm(int b )
{


	int count=0;
	char l;
	int y = 0;
	l = getchar ();
		char a[60];
		int flag=0;
		cout << "lotfan name ketab ra vared konid" << endl;
		for (int k=0; k<60; ++k) {
		a[k] = getchar ();
		if (a[k]==10) {
			a[k]=0;
			break;
		}
		}
		int a1 = displaytypesearch ();
		switch (a1) {
		case 1:
			 count = matchwholeword (a, b);
			break;
		case 2:
			count = matchcase (a, b);
			break;
			
		}
	
		int c = sortbookjojesm ();
		switch (c) {
		case 1:
			y = sortbookmoalefjojesm (a, count);
			break;
		case 2:
			y = sortbookchapjojesm (a, count);
			break;
		case 3:
			y = sortbookmotarjemjojesm (a, count);
			break;
		case 4:
			y = sortbookshabakjojesm (a, count);
			break;
		case 5:
			y = sortbooknasherjojesm (a, count);
			break;
		case 6:
			y = sortbookvazeketabjojesm (a, count);
			break;
		case 7:
			y = sortbooktypejojesm (a, count);
			break;
		case 8:
			break;
			
		}

		return 0;
}

