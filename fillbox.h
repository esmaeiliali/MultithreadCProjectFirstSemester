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