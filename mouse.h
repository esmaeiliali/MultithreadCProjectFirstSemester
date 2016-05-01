extern char choice;
	extern char c;
extern int p;
void * mouse(void *p1)
{
	Sleep (1000);
    HANDLE hIn;
    HANDLE hOut;
    DWORD EventCount;
    int LoopCount = 0;
    int KeyEvents = 0;
    INPUT_RECORD InRec;
    DWORD NumRead;
    hIn = GetStdHandle(STD_INPUT_HANDLE);
    hOut = GetStdHandle(STD_OUTPUT_HANDLE);
		while (1)
        {
			Sleep (100);
			GetNumberOfConsoleInputEvents(hIn,
                                      &EventCount);
			ReadConsoleInput(hIn,
                             &InRec,
                             1,
                             &NumRead);
			//cout << InRec.Event.MouseEvent.dwMousePosition.Y << " " << InRec.Event.MouseEvent.dwMousePosition.X << flush;
			if ((InRec.Event.MouseEvent.dwMousePosition.Y==1)|| (InRec.Event.KeyEvent.uChar.AsciiChar == '1') ) {
						switch (flag) {
						case 1:
						choice='1';
						break;
						case 2:
						c = '1';
						break;
						case 3:
						p=1;
						break;
					}
			}
			if ((InRec.Event.MouseEvent.dwMousePosition.Y==2) || (InRec.Event.KeyEvent.uChar.AsciiChar == '2')) {
						switch (flag) {
						case 1:
						choice='2';
						break;
						case 2:
						c = '2';
						break;
						case 3:
							p=2;
							break;
					}
			}
					if ((InRec.Event.MouseEvent.dwMousePosition.Y==3) || InRec.Event.KeyEvent.uChar.AsciiChar == '3')
						switch (flag) {
						case 1:
						choice='3';
						break;
						case 2:
						c = '3';
						break;
						case 3:
							p=3;
							break;
					}
					if (InRec.Event.MouseEvent.dwMousePosition.Y==4 || InRec.Event.KeyEvent.uChar.AsciiChar == '4')
						switch (flag) {
						case 1:
						choice='4';
						break;
						case 2:
						c = '4';
						break;
						case 3:
							p=4;
							break;
					}
                    if (InRec.Event.MouseEvent.dwMousePosition.Y==5 || InRec.Event.KeyEvent.uChar.AsciiChar == '5')
						switch (flag) {
						case 1:
						choice='5';
						break;
						case 3:
							p=5;
							break;
					}
					if (InRec.Event.MouseEvent.dwMousePosition.Y==6 || InRec.Event.KeyEvent.uChar.AsciiChar == '6')
						switch (flag) {
						case 1:
						choice='6';
						break;
						case 3:
							p=6;
							break;
					}
					if (InRec.Event.MouseEvent.dwMousePosition.Y==7 || InRec.Event.KeyEvent.uChar.AsciiChar == '7')
						switch (flag) {
						case 1:
						choice='7';
						break;
						case 3:
							p=7;
							break;
					}
					if (InRec.Event.MouseEvent.dwMousePosition.Y==8 || InRec.Event.KeyEvent.uChar.AsciiChar == '8')
						switch (flag) {
						case 1:
						choice='8';
						break;
						case 3:
							p=8;
							break;
					}
					if (InRec.Event.MouseEvent.dwMousePosition.Y==9 || InRec.Event.KeyEvent.uChar.AsciiChar == '9')
						switch (flag) {
						case 1:
						choice='9';
						break;
						case 3:
							p=9;
							break;
					}
					if (InRec.Event.MouseEvent.dwMousePosition.Y==10 || InRec.Event.KeyEvent.uChar.AsciiChar == '10')
			        	switch (flag) {		
						case 3:
							p=10;
							break;
					}
					if (InRec.Event.MouseEvent.dwMousePosition.Y==11 || InRec.Event.KeyEvent.uChar.AsciiChar == '11')
			        	switch (flag) {		
						case 3:
							p=11;
							break;
					}
					GetNumberOfConsoleInputEvents(hIn,&EventCount);
				}
				}
				
	


