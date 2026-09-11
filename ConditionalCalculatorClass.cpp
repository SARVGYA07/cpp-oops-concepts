#include <iostream>
using namespace std;

class conditionalcalculator {
    private:
        double num1, num2;
        char operation;
    public:
        void getdata() {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Enter operation (+, -, *, /): ";
            cin >> operation;
        }

        void calculate() {
            switch (operation) {
                case '+':
                    cout << "Sum: " << num1 + num2 << endl;
                    break;
                case '-':
                    cout << "Difference: " << num1 - num2 << endl;
                    break;
                case '*':
                    cout << "Product: " << num1 * num2 << endl;
                    break;
                case '/':
                    if (num2 != 0) {
                        cout << "Quotient: " << num1 / num2 << endl;
                    } else {
                        cout << "Error: Division by zero!" << endl;
                    }
                    break;
                default:
                    cout << "Invalid operation!" << endl;
            }
        }
};

int main() {
    conditionalcalculator obj;
    obj.getdata();
    obj.calculate();
    return 0;
}
