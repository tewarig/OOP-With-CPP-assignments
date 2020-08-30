#include <iostream>
#include "invoice.h"
using namespace std;

int main()
{
    invoice a1("Coke", "Cold Drink", 10, 20);
    a1.setpartNumber("Ninja Melk");
    a1.setDescription("Energy drink");
    a1.setPriceItem(70);
    cout << a1.getpartNumber() << " " << a1.getDescription() << "\n";
    cout << "item purchased:" << a1.getPurchase() << " item price:" << a1.getPriceItem() << "\n";
    cout << "total amount:";
    cout << a1.getInvoiceAmount();

    return 0;
}