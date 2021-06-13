#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std; 
string generateOTP(int len) 
{ 
    
    string str = "abcdefghijklmnopqrstuvwxyz0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
    int n = str.length(); 
    
    string OTP = ""; 
   
    for (int index=1; index<=len; index++) 
        OTP += str[rand() % n]; 
   
    return(OTP); 
} 
   
 
int main() 
{
    
    int len = 6; 
    srand(time(NULL));
    cout << "Your Generated OTP is :- "<<generateOTP(len).c_str()<<endl;
    
    return 0; 
} 