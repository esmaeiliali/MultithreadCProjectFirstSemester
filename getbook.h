# include "gtbook.h"

int getbook (int b, int c, int y) 
{
	int tedadebook=0;

	char d[60];
	char th[30];
	int flag=0;
	FILE *fin = fopen("listketab.txt", "r");
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
	fseek (fin, 0, SEEK_SET);
		for (int i=0; i<b; ++i) 
	{
		fread( &d , sizeof (d) , 1, fp );
		fread( &th , sizeof (th) , 1, fp );
	}
				for (int j = 0; j<y; j++) {
			fread( &list, sizeof(struct ketabkhane), 1, fin );
			if (strstr (list[0].karbar, d)>0) {
				tedadebook++;
									
			}
				}
			fseek (fin, 0, SEEK_SET);
			switch (tedadebook) {
			case 0:
				cout << "Shoma mitoonid 2 ketab daryaft konid" << endl;
				flag = gtbook (c, d);
				break;
			case 1:
				cout << "Shoma mitoonid yek ketab daryaft konid" << endl;
				flag = gtbook (c, d);
				break;
			case 2:
				cout << "Shoma nemitoonid ketabi daryaft konid" << endl;
				break;
			}
			return flag;
}
