void Box(int x , int y , int len , int wed)
{
	gotoxy (x,y);
	int i , j = y + 1 ;
	printf("%c",201);
	for ( i = 0 ; i <= len ; i++)
	{
		printf("%c",205);
	}
	printf("%c",187);
	for ( j ; j < (y+wed-1) ; j++)
	{
		gotoxy(x,j);
		printf("%c",186);
		gotoxy((x+len+2),j);
		printf("%c",186);
	}
	gotoxy(x,j);
	printf("%c",200);
	for ( i = 0 ; i <= len ; i++ )
	{
		printf("%c",205);
	}
	printf("%c",188);
	return;
}

/***************** fill box with color - delay *****************/
void DColor(int x, int y, int len , int wed)
{
	gotoxy(x+1,y+1);
	int i = 0 ;
	while( i < wed-2 )
	{
		for ( int j = 0 ; j < len+1  ; j++)
		{
				cout << " ";
		}
		Sleep(25);
		gotoxy(x+1,y+1+i);
		i++;
	}
return;
}

/****************** fill a menue with color *****************/
void Color(int x, int y, int len , int wed)
{
	gotoxy(x+1,y+1);
	int i = 0 ;
	while( i < wed-2 )
	{
		for ( int j = 0 ; j < len+1  ; j++)
		{
				cout << " ";
		}
		gotoxy(x+1,y+1+i);
		i++;
	}
return;
}

/****************** Menue With Delay ! *********************/
void Menue (int x , int y , int len , int wed)
{
    HANDLE handle4;
	handle4 = GetStdHandle(STD_OUTPUT_HANDLE);
	gotoxy (x,y);
	int i , j = y + 1, k ;
	for(k =0 ;  k < wed ; k++)
	{
		Box(x,y,len,k);
		Sleep(30);
	}
	gotoxy(x+1,y+1);
	i = 0 ;
	while( i < wed-2 )
	{
		for (j = 0 ; j < len+1  ; j++)
		{
				cout << " ";
		}
		gotoxy(x+1,y+1+i);
		i++;
	}	
return;
}

/****************** Draw a Box *****************************/
