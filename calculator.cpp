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
                result = 0;
                break;
        }
        
        cout << "\n";
        
        if (opr != 'r') {
	        cout << num1 << " " << opr << " " << num2 << " = " << result << endl;
		} else {
			cout << "root of " << num1 << " is " << result << endl;
		}

        cout << "\nrepeat(y/n)? ";
        cin >> repeat;
        cout << "\n";
    }
    while (repeat == 'y');

    return 0;
}
