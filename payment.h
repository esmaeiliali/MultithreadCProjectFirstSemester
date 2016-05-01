# include "datedifference.h"

int payment(int i)
{


	int t1, t2, t3, t4, t5, t6, t7, t, z, flag, k;
	t1 = list[i].bazgasht.year;
	t2 = list[i].gararbazgasht.year;
	t = t2-t1;
	t4= list[i].bazgasht.month;
	t5= list[i].gararbazgasht.month;
	t6= list[i].bazgasht.day;
	t7= list[i].gararbazgasht.day;
	flag = 0;
	k = 0;
	while (t>0){
		if (t==1) {
			z = tedaderoozhayemaha (t4, t5, t6, t7);
			t--;
			flag ++ ;
			k ++ ;
		}
		else  {
			t--;
			flag ++ ;
			k ++ ;
		}
	}
	while (k==0) {
		if (t== 0)
		z = tedaderoozhayemaha (t4, t5, t6, t7);
		k ++ ;
	}
	t = ((flag * 365) + z);
	if (t2-t1>=4) {
	t3 = (t2-t1)/5;
	t3 ++ ;
	t = t + t3 +1 ;
	}
	return t;
}