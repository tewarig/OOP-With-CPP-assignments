#include <iostream>
#include <string.h>
using namespace std;

class invoice
{
private:
    string partNumber;
    string description;
    int purchased;
    int pricePerItem;

public:
    invoice(string partNumber, string description, int purchased, int pricePerItem);
    void setpartNumber(string Number);
    string getpartNumber();
    void setDescription(string something);
    string getDescription();
    void setPurchase(int value);
    int getPurchase();
    void setPriceItem(int value);
    int getPriceItem();

    int getInvoiceAmount();
};