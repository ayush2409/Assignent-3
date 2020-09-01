#include<iostream>
using namespace std;

float calculateCharges(float h){
    int hr=h;
  float charge=2.0;
    if(h>0){
        if(h<=3)
            return float(charge);
        else if(h<=24){
            while(hr>3){
                charge+=0.5;
                hr--;
                if(charge>=10 )
                    charge=10;
            }
            return float(charge);
        }
    }
    else
        cout<<"The amount of time entered is not supported";
}

int main(){
    int i;
    float one,two,three,hours;
    for(i=1;i<=3;i++){
        cout<<"Enter parking hours of customer "<<i<<" : ";
        cin>>hours;
        if(i==1)
            one=hours;
        else if(i==2)
            two=hours;
        else
            three=hours;
    }
    cout<<"Car\tHours\tCharge"<<endl;
    cout<<"1\t"<<one<<"\t"<<calculateCharges(one)<<endl;
    cout<<"2\t"<<two<<"\t"<<calculateCharges(two)<<endl;
    cout<<"3\t"<<three<<"\t"<<calculateCharges(three)<<endl;
    cout<<"Total\t"<<one+two+three<<"\t"<<calculateCharges(one)+calculateCharges(two)+calculateCharges(three)<<endl;
    return 0;
}
