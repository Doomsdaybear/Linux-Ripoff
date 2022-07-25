#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

void MainTerminal() {
	string User;
	string Pass;
	string CommandUsed;
	string filename;
	string filetext;
	int Sleeptime = 2000;
	Sleep(Sleeptime);
	cout << "Enter Commands Here." << endl;
	cin >> CommandUsed;
	if (CommandUsed == "write") {
		
		cout << "Please enter the file name" << endl;
		cin >> filename;
		cout << "Good, now please start typing the file text (DO NOT USE ENTER TO MAKE A NEWLINE, THIS WILL SUBMIT THE TEXT" << endl;
		cin >> filetext;
		cout << "OK! Your text file is ready to be read anytime!" << endl;
		MainTerminal();
	}
	if (CommandUsed == "read") {
		string confirmfile;
		cout << "Please enter filename:" << endl;
		cin >> confirmfile;
		if (confirmfile == filename) {
			cout << filetext << endl;
			MainTerminal();
		}
	}
}

void Startup() {
	string User;
	string Pass;
	int Sleeptime = 2000;
	cout << "Welcome to Linux Ripoff! Does this app really need explaining?" << endl;
	Sleep(2000);
	cout << "To begin, please create a username!" << endl;
	cin >> User;
	cout << "Cool username,"<<User << endl;
	Sleep(2000);
	cout << "Now, to end the creation system, please create a password!" << endl;
	cin >> Pass;
	cout << "Ok! That ends the formalities " << User << "." << endl;
	Sleep(Sleeptime);
	cout << "Have fun stepping into the rabbit hole of the Linx community (I use Arch btw)" << endl;
	
}





int main() {
	Startup();

	MainTerminal();

	return 0;
}