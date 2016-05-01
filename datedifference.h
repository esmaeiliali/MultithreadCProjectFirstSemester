int tedaderoozhayemaha (int a, int b, int c, int d) 
{
	switch (a) {
	case 2:
		a = 31 + c;
		break;
	case 3:
		a =59 + c;
		break;
	case 4:
		a = 90 + c;
		break;
	case 5:
		a = 120 + c;
		break;
	case 6:
		a = 151 + c;
		break;
	case 7:
		a = 181 + c;
		break;
	case 8:
		a = 212 + c;
		break;
	case 9:
		a = 243 + c;
		break;
	case 10:
		a = 273 + c;
		break;
	case 11:
		a = 304 + c;
		break;
	case 12:
		a = 334 + c;
		break;
	default :
		a = c;
	}
		switch (b) {
	case 2:
		b = 31 + d;
		break;
	case 3:
		b =59 + d;
		break;
	case 4:
		b = 90 + d;
		break;
	case 5:
		b = 120 + d;
		break;
	case 6:
		b = 151 + d;
		break;
	case 7:
		b = 181 + d;
		break;
	case 8:
		b = 212 + d;
		break;
	case 9:
		b = 243 + d;
		break;
	case 10:
		b = 273 + d;
		break;
	case 11:
		b = 304 + d;
		break;
	case 12:
		b = 334 + d;
		break;
	default :
		b = d;
	}
	int t = b-a;
	return t;
}