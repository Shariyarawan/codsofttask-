#include<iostream>
using namespace std;
int main()
{
   int a,b;
   double choice;
   cout<<"Enter any two numbers"<<a<<b<<endl;
   cout<<"Enter the arithmetic operation/n";
   cout<<"A to add, S to subtract,M to Multiply,D to Divide"<<endl;
   cin>>choice;
   if(choice==A || choice==a){
   d=a+b;
   cout<<"The addition is:"<<d<<endl;
   }
   else if(choice==s || choice==S){
   e=a-b;
   cout<<"The Subtraction is:"<<e<<endl;
   }
   else if(choice==M || choice==m){
   m=a*b;
   cout<<"The Multipliaction is:"<<m<<endl;
   }
   else(choice==d || choice==D){
   n=a/b;
   cout<<"The Division is:"<<d<<endl;
   }

}
