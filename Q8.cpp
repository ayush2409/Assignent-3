#include <iostream>
using namespace std;
int main(){
    int a,b,c,i=1;
    cout<<"Pythagorean Triples "<<endl;
    for(a=1;a<500;a++){
       for(b=a+1;b<500;b++){
        for(c=b+1;c<500;c++){
         if(a*a+b*b==c*c){
              cout<<i++<<"\t{"<<a<<","<<b<<","<<c<<"}"<<endl;
         }
        }
       }
    }
    return 0;
 }
