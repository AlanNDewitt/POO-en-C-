#ifndef GOTOXY_H
#define GOTOXY_H
#include <windows.h>

void gotoxy(int x,int y)
{
	HANDLE hCon;
	COORD dwPos;
	
	dwPos.X = x;
	dwPos.Y = y;
	hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hCon,dwPos);
}
#endif
