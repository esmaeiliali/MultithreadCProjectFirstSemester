void ploader ()
{
	HANDLE hFind;
    WIN32_FIND_DATA FindData;
	hFind = FindFirstFile("E:\\Ali\\abcd\\*.*", &FindData);
	HANDLE handle;
	handle = GetStdHandle(STD_OUTPUT_HANDLE);
	system("color 2b");
	int Counter1 , Counter2;
    system("title LOADING MENU");
	system("color 2b");
	gotoxy (0,0);
	system("color 2b"); 	
	Box(15,14,49,3);
	gotoxy(17,17);
	SetConsoleTextAttribute (handle ,FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	Counter2=0;
	int i=16;
	for(Counter1 =0 ; Counter1 < 50 ; Counter1++)
	{
		FindNextFile(hFind, &FindData);
		gotoxy(0,0);
        cout << "Loading : " << FindData.cFileName << flush;
		gotoxy(0,0);
		clrchar (50);
	SetConsoleTextAttribute (handle ,FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	gotoxy(i ,15);
	printf("%c",219);
	SetConsoleTextAttribute (handle ,FOREGROUND_RED| BACKGROUND_GREEN |FOREGROUND_INTENSITY);
	gotoxy(39,15);
	Counter2=Counter2+2;
	if(Counter2 > 0)
	{
		cout <<"%" << (Counter2) << flush;
		Sleep(15);
	}
		i++;
	}
	system ("cls");
return;
}
