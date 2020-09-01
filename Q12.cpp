

#include<iostream>
#include<string.h>
using namespace std;

void RevStr(string , int  );
int last ;
int main() {

  string myString;
  getline(cin, myString);
  last = myString.size();
  int start ;
  cin >> start;

  RevStr(myString, start);

  return 0;
}

void RevStr(string myString, int start ) {
  cout << myString[last - 1];
  if (last != start)
  {

    last = last - 1;
    RevStr(myString, start);
  }


}



