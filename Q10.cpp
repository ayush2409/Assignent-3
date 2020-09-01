#include <bits/stdc++.h> 
using namespace std; 
  

bool flag(char str[],  
              int s, int a) 
{ 
      
     
    if (s == a) 
    return true; 
  
    
    if (str[s] != str[a]) 
    return false; 
  
   
    if (s < a + 1) 
    return flag(str, s + 1, a - 1); 
  
    return true; 
} 
  
bool testPalindrome(char str[]) 
{ 
    int n = strlen(str); 
      
    
    if (n == 0) 
        return true; 
      
    return flag(str, 0, n - 1); 
} 
  

int main() 
{ 
    char str[10];
    cin>>str; 
  
    if (testPalindrome(str)) 
    cout << "Yes"; 
    else
    cout << "No"; 
  
    return 0; 
} 
