#include<iostream>
using namespace std;
int main()
{
    float num1,num2,ans;
    int choice;
    cout<<"\n1.) Addition";
    cout<<"\n2.) Substracton";
    cout<<"\n3.) Multiplication";
    cout<<"\n4.) Division";
    cout<<"\nEnter the 2 numbers : \n";  
    cin>>num1>>num2;
    cout<<"\nEnter your choice : ";
    cin>>choice;
    switch(choice)
    {
      case  1:
      cout<<num1<<" + "<<num2<<" = "<<num1+num2;
      break;
      case  2:
      cout<<num1<<" - "<<num2<<" = "<<num1-num2;
      break;
      case  3:
      cout<<num1<<" * "<<num2<<" = "<<num1*num2;
      break;
      case  4:
      cout<<num1<<" / "<<num2<<" = "<<num1/num2;
      break;
      default:
      cout<<"Enter the correct choice : ";
    }
    return 0;
}
