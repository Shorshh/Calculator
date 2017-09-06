#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;
void color(int X);

int main(){
bool use = true;
while(use){
cout << "Calculator 1.0" << endl;
cout << "Enter a basic problem (+, *, -, / )" << endl;
char op;
double firstnum, secnum, result;
cin >> firstnum >> op >> secnum;
if(op == '+'){
        color (6);
	result = firstnum + secnum;
	use = false;
		}
else if(op == '-'){
        color (1);
	result = firstnum - secnum;
use = false;
	}
else if(op == '*'){
        color (3);
	result = firstnum * secnum;
	use = false;
	}
else if(op == '/'){
     color (4);
	result = firstnum / secnum;
	use = false;
	}
else{
	cout << "Error, retry" << endl; break;}

cout << "Your result is:" << result << endl;
	cout << "press any number to continue..." << endl;
	int random;
	cin >> random;
	if(random > 0){
		break;
	}
	}
}
void color(int X)
{
    SetConsoleTextAttribute(GetStdHandle (STD_OUTPUT_HANDLE),X);
}
