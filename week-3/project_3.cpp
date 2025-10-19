// Compute sales tax at 6%

#include <iostream>
using namespace std;

int main() {
    double totalPurchase, salesTax, totalAmount;

    cout << "Enter total purchase amount: ";
    cin >> totalPurchase;

    salesTax = totalPurchase * 0.06;
    totalAmount = totalPurchase + salesTax;

    cout << "Sales Tax (6%) = " << salesTax << endl ;
    cout << "Total Amount(with tax) = " << totalAmount << endl ;

    return 0;
}