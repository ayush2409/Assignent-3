#include <iostream>
#include<math.h>
using namespace std;

float pi=3.14159;

inline float Volume(float r){
  return (float(4)*(pi*pow(r,3))/float(3));
}
int main(){
    int rad;
    cout<<"Input radius of a sphere: ";
    cin>>rad;
    cout<<"The volume of a sphere is: "<<Volume(rad)<<endl;
    return 0;
}
