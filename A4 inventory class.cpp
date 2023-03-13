#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

class Inventory {

    private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;
    public:
    Inventory() {
    itemNumber = 0;
    quantity = 0;
    cost = 0;
    }
    Inventory(int itemNum, int q, double c) {
    itemNumber = itemNum;
    quantity = q;
    cost = c;
    }

    void setItemNumber(int itemNum) {
        if (itemNum >= 0) {
            itemNumber = itemNum;
        }
        else {
            cout << "Invalid item number.\n";
            exit(EXIT_FAILURE);
        }
    }

    void setQuantity(int q) {
        if (q >= 0) {
            quantity = q;
        }
        else {
            cout << "Invalid quantity.\n";
            exit(EXIT_FAILURE);
        }
    }

    void setCost(double c) {
        if (c >= 0.0) {
            cost = c;
        }
        else {
            cout << "Invalid cost.\n";
            exit(EXIT_FAILURE);
        }
    }

    void setTotalCost(int q, double c) {
        double tempTotal = q * c;
        totalCost = tempTotal;
    }

    int getItemNumber() const {
        return itemNumber;
    }

    int getQuantity() const {
        return quantity;
    }

    double getCost() const {
        return cost;
    }
    double getTotalCost() const {
        return totalCost;
    }

};

int main() {

    Inventory item;     
    int itemNumber;     
    int quantity;       
    double cost;        
    double totalCost;   
    int choice;         

    cout << "Calculating cost of an item's inventory.\n\n";
    cout << "Enter the Item Number: ";
    cin >> itemNumber;

    cout << "Enter the Quantity on hand: ";
    cin >> quantity;

    cout << "What is this item's cost per unit? ";
    cin >> cost;

    item.setItemNumber(itemNumber);
    item.setQuantity(quantity);
    item.setCost(cost);

    item.setTotalCost(quantity, cost);

    cout << endl;
    cout << "Item Number: " << item.getItemNumber() << endl;
    cout << "Quantity: " << item.getQuantity() << endl;
    cout << "Cost Per Item: " << item.getCost() << endl;
    cout << "Total Cost: " << item.getTotalCost() << endl;

    return 0;
}
