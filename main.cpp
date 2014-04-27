#include <iostream>
#include <cmath>

using namespace std;

int main(){
bool use = true;
while(use){
cout << "Calculator 1.0" << endl;
cout << "Enter a basic problem (+, *, -, / )" << endl;
char op;
double firstnum, secnum, result;
cin >> firstnum >> op >> secnum;
if(op == '+'){
	result = firstnum + secnum;
	use = false;
		}
else if(op == '-'){
	result = firstnum - secnum;
use = false;
	}
else if(op == '*'){
	result = firstnum * secnum;
	use = false;
	}
else if(op == '/'){
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
