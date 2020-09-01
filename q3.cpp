#include<iostream>
using namespace std;

class Complex{
    private:
        float real;
        float imag;
    public:
         Complex(){
           real=0;
           imag=0;
     }
       void input(){
             cout<<"Enter real and imaginary parts respectively: ";
             cin>>real>>imag;
       }
       bool operator == (Complex c2){
             return (real==c2.real && imag==c2.imag);
       }
};

int main()
{
    Complex c1, c2;
    cout<<"Enter first complex number"<<endl;
    c1.input();
    cout<<"Enter second complex number"<<endl;
    c2.input();
  if(c1==c2)
    cout<<"Complex Numbers are equal"<<endl;
  else 
    cout<<"Complex Numbers are not equal!"<<endl
  return 0;
}
