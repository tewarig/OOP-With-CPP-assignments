#include <iostream>
#include "invoice.h"
using namespace std;

invoice::invoice(string partNumber = "name", string description = "something", int purchased = 0, int pricePerItem = 0)
{
    this->partNumber = partNumber;
    this->description = description;
    this->purchased = purchased;
    this->pricePerItem = pricePerItem;
}

void invoice::setpartNumber(string Number)
{

    this->partNumber = Number;
}
string invoice::getpartNumber()
{
    return partNumber;
}
void invoice::setDescription(string something)
{
    this->description = something;
}
string invoice::getDescription()
{
    return description;
}
void invoice::setPurchase(int value)
{
    if (purchased < 0)
    {
        value = 0;
    }

    this->purchased = purchased;
}
int invoice::getPurchase()
{
    return purchased;
}
void invoice::setPriceItem(int value)
{
    if (value < 0)
    {
        value = 0;
    }
    this->pricePerItem = value;
}
int invoice::getPriceItem()
{
    return pricePerItem;
}

int invoice::getInvoiceAmount()
{
    int total;
    total = pricePerItem * purchased;
    return total;
}
