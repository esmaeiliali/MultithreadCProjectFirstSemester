# include "returnbook.h"
# include "tamdidketab.h"
# include "jojshabak.h"
# include "jojentesharat.h"
# include "jojmotarjem.h"


int searchitem (int a, int b) {
	switch(a) {
	case 1:
		jojesm(b);
		break;
	case 2:
		jojmoalef(b);
		break;
	case 3:
		jojmozoo(b);
		break;
	case 4:
		jojkalame(b);
		break;
	case 5:
		jojshabak(b);
		break;
	case 6:
		jojentesharat(b);
		break;
	case 7:
		jojmotarjem (b);
		break;
	case 8:
		tamdidketab (b);
		break;
	case 9:
		retbook(b);
		break;
	}
	return 0;
}