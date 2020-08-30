#include<iostream>
using namespace std;
class complex
{
double real;
double imaginary;
public:
complex operator*(complex c)
{
double real1,real2;
real1=real;
real2=c.real;
real=(real*c.real)-(imaginary*c.imaginary);
imaginary=(real1*c.imaginary)+(imaginary*real2);
complex temp;
temp.real=real;
temp.imaginary=imaginary;
return temp;
}
void display()
{
cout<<“(“<<real<<“,”<<imaginary<<“)”<<endl;
}
void set()
{
cout<<“Enter real: “<<endl;
cin>>real;
cout<<“Enter imaginary: “<<endl;
cin>>imaginary;
}
};
int main()
{
complex c1,c2;
c1.set();
cout<<“Enter 2nd complex no: “<<endl;
c2.set();
c1*c2;
c1.display();
system(” pause”);
}
