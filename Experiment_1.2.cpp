#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class HotelBill {
private:
    int tableNo;
    string customerName;
    long long customerContact;
    string itemName;
    float itemPrice;
    float discount;
    float billAmount;

public:
    void getDetails() {
        cout << "Enter Table Number: ";
        cin >> tableNo;
        cin.ignore();

        cout << "Enter Customer Name: ";
        getline(cin, customerName);

        cout << "Enter Customer Contact: ";
        cin >> customerContact;
        cin.ignore();

        cout << "Enter Item Name: ";
        getline(cin, itemName);

        cout << "Enter Item Price: ";
        cin >> itemPrice;
    }

    void calculateBill() {
        discount = itemPrice * 0.05f;   // 5% discount
        billAmount = itemPrice - discount;
    }
    void displayBill() {
        cout << "\n========== HOTEL BILL ==========\n";
        cout << "Table Number      : " << tableNo << endl;
        cout << "Customer Name     : " << customerName << endl;
        cout << "Customer Contact  : " << customerContact << endl;
        cout << "Item Name         : " << itemName << endl;
        cout << fixed << setprecision(2);
        cout << "Item Price        : Rs. " << itemPrice << endl;
        cout << "Discount (5%)     : Rs. " << discount << endl;
        cout << "Bill Amount       : Rs. " << billAmount << endl;
        cout << "================================\n";
    }
};

int main() {
    HotelBill h;

    h.getDetails();
    h.calculateBill();
    h.displayBill();

    return 0;
}
