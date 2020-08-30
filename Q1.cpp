#include <iostream>
using namespace std;

class Complex 
{
    private:
      float real;
      float imaginary;
    public:
       Complex(): real(0), imaginary(0){ }
       void input()
       {
           cout << "Enter real and imaginary parts respectively: ";
           cin >> real;
           cin >> imaginary;
       }

       Complex operator - (Complex c2)
       {
           Complex temp;
           temp.real = real - c2.real;
           temp.imagiary = imaginary - c2.imaginary;

           return temp;
       }

       void output()
       {
           if(imaginary < 0)
               cout << "Output Complex number: "<< real << imaginary << "i";
           else
               cout << "Output Complex number: " << real << "+" << imaginary << "i";
       }
};

int main()
{
    Complex c1, c2, result;

    cout<<"Enter first complex number:\n";
    c1.input();

    cout<<"Enter second complex number:\n";
    c2.input();

    result = c1 - c2;
    result.output();

    return 0;
}
