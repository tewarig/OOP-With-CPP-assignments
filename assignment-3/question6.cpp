e<iostream>
using namespace std;

class invoice{
    private: 
    string partNumber;
    string description;
    int purchased;
    int pricePerItem ;
    public:
    invoice(string partNumber="name" , string description="something", int purchased=0,int pricePerItem=0)
    {
        this->partNumber= partNumber ;
        this->description = description;
        this->purchased = purchased;
        this->pricePerItem = pricePerItem;
        
    }
    
    void setpartNumber(string Number)
    {  
        
        this->partNumber = Number;
    }
    string getpartNumber()
    {
        return partNumber;
    }
    void setDescription (string something)
    {
      this->description = something;
    }
    string getDescription(){
        return description;
    }
    void setPurchase(int value){
        if(purchased<0){
         value = 0;
        }
            
            this->purchased = purchased;
       
    }
    int getPurchase(){
        return purchased;
    }
    void setPriceItem(int value){
        if(value<0){
          value = 0;
        }
        this->pricePerItem = value;
        
    }
    int getPriceItem(){
        return pricePerItem;
    }
    
    
    int getInvoiceAmount(){
        int total ;
        total = pricePerItem * purchased;
        return total;
    }
};

int main(){
    invoice a1("Coke" , "Cold Drink" , 10 , 20);
    a1.setpartNumber("Ninja Melk");
    a1.setDescription("Energy drink");
    a1.setPriceItem(70);
    cout<<a1.getpartNumber()<<" "<<a1.getDescription()<<"\n";
    cout<<"item purchased:" <<a1.getPurchase()<<" item price:"<<a1.getPriceItem()<<"\n";
    cout<<"total amount:";
    cout<<a1.getInvoiceAmount();
    
    
    return 0;
}

/*
Ninja Melk Energy drink                                                                                                    
item purchased:10 item price:70                                                                                            
total amount:700 
*/









