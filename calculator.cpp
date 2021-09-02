#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float num1,
          num2,
          result;

    char opr,
         repeat;

    do {
        cout << "enter numbers: ";
        cin >> num1;

        cout << "operator(+, -, *, /, ^, r): ";
        cin >> opr;
        
		if (opr != 'r') {
	        cout << "enter numbers: ";
	        cin >> num2;
   		}

        switch (opr) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                result = num1 / num2;
                break;
            case '^':
                result = pow(num1, num2);
                break;
            case 'r':
                result = sqrt(num1);
                break;
            default:
            	opr = 'x';
                result = 0;
                break;
        }
        
        cout << "\n";
        
        if (opr != 'r' && opr != 'x') {
	        cout << num1 << " " << opr << " " << num2 << " = " << result << endl;
		} else if (opr == 'r') {
			cout << "root of " << num1 << " is " << result << endl;
		} else {
			cout << "please enter operator correctly" << endl;
		}

        cout << "\nrepeat(y/n)? ";
        cin >> repeat;
        cout << "\n";
    }
    while (repeat == 'y');

    return 0;
}
