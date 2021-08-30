#include <iostream>
using namespace std;

int main() {
    float num1,
          num2,
          result;
    char opr;

    cout << "Masukkan Angka: ";
    cin >> num1;

    cout << "Masukkan Operator(+, -, *, /): ";
    cin >> opr;

    cout << "Masukkan Angka: ";
    cin >> num2;

    switch(opr) {
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
        default:
            result = 0;
            break;
    }
    cout << "\n";
    cout << num1 << " " << opr << " " << num2 << " = " << result << endl;

    return 0;
}
