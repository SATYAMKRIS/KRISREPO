#include<iostream>  
using namespace std;
  
int main()  
{  
    int num, count = 1, rem, sum;  
        while(count <= 1000)  
    {  
        num = count;  
        sum = 0;  
        while(num)  
        {  
            rem = num%10;  
            sum = sum+(rem*rem*rem);  
            num = num/10;  
        }  
        if(count==sum)  
        {  
            cout<<"  "<<count;  
        }  
        count++;  
    }  
    return 0;  
}  