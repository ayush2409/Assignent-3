#include<iostream>
using namespace std;
class Invoice
{
    private:
        string partNumber, partDescription;
        int quantity;
        double price;
    public:
        Invoice()
        {
            partNumber = "";
            partDescription = "";
            quantity = 0;
            price = 0.0;
        }
        void set_quantity(int q)
        {
            quantity = q;
        }
        int get_quantity()
        {
            return quantity;
        }

        void set_price(double p)
        {
            price = p;
        }
        double get_price()
        {
            return price;
        }

        

         void set_partNumber(string pn)
        {
            partNumber = pn;
        }
        string get_partNumber()
        {
            return partNumber;
        }

        void set_partDescription(string pd)
        {
            partDescription = pd;
        }
        string get_partDescription()
        {
            return partDescription;
        }
        double getInvoiceAmount()
        {
            double ia = price * quantity;
            return ia;
        }
};
int main()
{
    string pn,pd;
    int q;
    double p;
    cout<<"Enter Part Number : ";
    getline(cin,pn);
    cout<<"Enter Part Description : ";
    getline(cin,pd);
    cout<<"Enter Quantity : ";
    cin>>q;
    if(q<0)
        q=0;
    cout<<"Enter Price : ";
    cin>>p;
    if(p<0)
        p=0.0;

    Invoice i;
    i.set_partNumber(pn);
    i.set_partDescription(pd);
    i.set_quantity(q);
    i.set_price(p);
    double ia = i.getInvoiceAmount();
    cout<<"The Invoice Amount is : "<<ia;
    return 0;
}
