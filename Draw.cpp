#include <iostream>
#include <fstream>
#include <Windows.h>
#include <string>

/**
 *
 * @author NgocTien.TNT
 */

using namespace std;

void InputFile(string str)
{
	ifstream input(str);
	char st[500];
	while (input.getline(st, 500))
	{
		cout << st << endl;
		Sleep(70);
	}
	input.close();
}

void OutputLoading()
{
	for (int i = 0; i < 10; i++)
	{
		cout << "Loading..." << i + 1 << "0%" << endl;
		Sleep(500);
	}
    cout << "Successful loading...\n";
}

void OutputSpace()
{
    for (int i = 0; i < 15; i++)
    {
        cout << endl;
        Sleep(70);
    }
}

int main()
{
    char st[50];
    bool kt = true;
    do 
    {
        cout<<"Enter password: ";
        cin.getline(st, 50);
        if (strcmp(st,"tuthienka")==0)
        {
            cout<<"Password correct!\n";
            Sleep(300);
            OutputLoading();
            kt = false;
            InputFile("input1.inp");
            OutputSpace();
            InputFile("input2.inp");
            OutputSpace();
            InputFile("input3.inp");
            OutputSpace();
        }
        else
        {
            cout<<"Sorry the password is incorrect! Please re-enter!\n";
        }
    } while (kt);
}