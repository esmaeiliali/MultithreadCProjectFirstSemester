# include "displayeditbook.h"
# include "editbookname.h"
# include "editbookzaban.h"
# include "editbooktype.h"
# include "editbookmotarjem.h"
# include "editbooknasher.h"
# include "editbookmoalef.h"
# include "editbookshabak.h"
# include "editbookkeyfiat.h"
# include "editbookchap.h"
# include "editbooknumber.h"
# include "editentirebook.h"

int p;
int editbook()
{
	
	FILE *fin = fopen("listketab.txt", "r");
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
	setcolor (1038);
	extern int num;
	cout << "lotfan shenase ketab ra vared konid" << endl;
	cin >> num;
	for (int k =0; k<y; k++)
	{
		fread( &list[0], sizeof(struct ketabkhane), 1, fin );
		if(list[0].booknumber == num)
		{
			displayeditbook ();
			switch (p) 
			{
			case 1:
				editbookname (k);
				break;
			case 2:
				editbookzaban (k);
				break;
			case 3:
				editbooktype (k);
				break;
			case 4:
				editbookmotarjem (k);
				break;
			case 5:
				editbooknasher (k);
				break;
			case 6:
				editbookmoalef (k);
				break;
			case 7:
				editbookshabak (k);
				break;
			case 8:
				editbookkeyfiyat (k);
				break;
			case 9:
				editbookchap (k);
				break;
			case 10:
				editbooknumber (k);
				break;
			case 11 :
				editentirebook(k);
				break;
			}
		}
	}
	fclose (fin);	
	return 0;
}




