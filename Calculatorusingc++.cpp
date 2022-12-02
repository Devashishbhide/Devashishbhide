#include<iostream>
using namespace std;
int main()
{
 float num1;
 char op;
 float num2;
 float result;

 cout<<"enter the first number :"<<endl ;
 cin>>num1;

 cout<<"enter the opertion  :"<<endl;
 cin>>op;

 cout<<"enter the second number  :"<<endl;
 cin>>num2;
 
 switch (op)
 {
 case '+': 
  
  (result=num1+num2);
  
  cout<<"Your Answer is  : "<<result;
  break;

 case '-':
(result=num1-num2);
 cout<<"Your Answer is  : "<<result;
 break;

 
 case '*': 
  
  (result=num1*num2);
  cout<<"Your Answer is  : "<<result;
  break;

 case '/':
(result=num1/num2);
 cout<<"Your Answer is  : "<<result;
 break;

   default  :
 cout<<"the opertion is not valid";
 
 return 0;
 }
}