#include <iostream>
#include <windows.h>
#include <conio.h>
#include <dos.h>
using namespace std;

int main()
{
	char h = '\3';
	Sleep(3002);
	Beep(523, 500);
	system("cls");
	cout << endl
		 << endl
		 << endl
		 << "\t\t\t\t" << endl
		 << "\t\t\t\t" << endl
		 << "\t\t";
	Sleep(500);

	for (int i = 0; i < 40; i++)
	{
		cout << "_";
	}
	Sleep(500);
	Beep(523, 500);

	cout << endl
		 << endl
		 << "\t\t\t\t" << endl;
	Sleep(500);
	Beep(523, 500);
	cout << "\t\t\t\t" << endl;
	Sleep(500);
	Beep(523, 500);
	cout << "\t\t\t\t";
	Sleep(500);
	Beep(523, 500);
	cout << endl
		 << "\t\t\t" << h << "\t    " << h << "";
	Sleep(500);
	Beep(523, 500);
	cout << endl
		 << "\t" << h << "" << h << "";
	Sleep(500);
	Beep(523, 500);
	cout << endl
		 << "\t\t\t" << h << "" << h << "" << h << "" << h << "";
	Sleep(500);
	Beep(523, 500);
	cout << endl
		 << "\t\t\t" << h << "" << h << "" << h << "";
	Sleep(500);
	Beep(523, 500);
	cout << endl
		 << "\t\t\t" << h << "" << h << "" << h << " ";
	Sleep(500);
	Beep(523, 500);
	// cout << endl << "\t\t\t |" << h << "  " << h << "  " << h << "  " << h << "  " << h << "  " << h << "  " << h << "  " << h << "  " << h << "|";
	Sleep(500);
	Beep(523, 500);
	cout << endl
		 << "\t\t\t | " << h << "  " << h << "" << h << "    " << h << " ";
	Sleep(500);
	Beep(523, 500);
	cout << endl
		 << "\t\t\t |";
	for (int i = 0; i < 25; i++)
	{
		cout << "_";
	}
	Sleep(500);
	Beep(523, 500);
	cout << "|" << endl
		 << endl
		 << endl;
	Sleep(500);
	Beep(523, 500);
	cout << "\t\t\t\t";
	Sleep(500);
	Beep(523, 500);
	cout << endl
		 << "\t\t\t";
	cout << endl
		 << "\t";
	Sleep(500);
	Beep(523, 500);
	cout << endl
		 << "";
	Sleep(500);
	Beep(523, 500);
	cout << endl
		 << ;
	cout << endl
		 << "";
	Sleep(500);
	Beep(523, 500);
	cout << endl
		 << "\t";
	Sleep(500);
	Beep(523, 500);
	cout << endl
		 << "\t\t\t\t\t";
	Sleep(500);
	Beep(523, 500);
	cout << endl
		 << "\t\t\t\t";
	Sleep(500);
	Beep(523, 500);
}
