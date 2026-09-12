#include <iostream>
using namespace std;

class conditionalTaxClass {
    private:
        double income;
        double taxRate;
        double taxAmount;

    public:
        void getIncome() {
            cout << "Enter your income: ";
            cin >> income;
        }

        void calculateTax() {
            if (income < 5000 ) {
                taxRate = 0.0; // No tax for income below 5,000
             } else if (income >5000 && income <=10000) {
                taxRate = 0.1; // 10% tax for income between 5,001 and 10,000
            } else if ( income > 10000 && income <= 50000) {
                taxRate = 0.2; // 20% tax for income between 10,001 and 50,000
            }
             else {
                taxRate = 0.3; // 30% tax for income above 50,000
            }
            taxAmount = income * taxRate;
        }

        void displayTax() {
            cout << "Your income: " << income << endl;
            cout << "Applicable tax rate: " << (taxRate * 100) << "%" << endl;
            cout << "Total tax amount: " << taxAmount << endl;
        }
};

int main() {
    conditionalTaxClass taxCalculator;
    taxCalculator.getIncome();
    taxCalculator.calculateTax();
    taxCalculator.displayTax();
    return 0;
}
