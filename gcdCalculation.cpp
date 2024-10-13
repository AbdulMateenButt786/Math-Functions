#include<iostream>
using namespace std;
int calculateGcd(int a,int b)
{ 
    while (b!=0)
    {
    int rem=a%b;
       a=b;
       b=rem;
    }
    return a;
}
void displayGcd()
{
    int num1;
    cin>>num1;
    int num2;
    cin>>num2;
   int result=calculateGcd(num1,num2);
   cout<<result; 
}
int main()
{
    displayGcd();
}
