#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int num;
    srand(time(0));
    num=rand()%51;
    cout<<"\nWelome to the Number Guessing Game : ";
    cout<<"\nLet's Begin!!!";
    cout<<"\nAll the best!!!";
    cout<<"\nEnter the Number you wish from 1 to 50,you have only 5 attempts :\n";
    for(i=0;i<5;i++)
    {
        cin>>n;
        if(n<num)
        {
            cout<<"\nThe number entered is lower than the right number...Try again";
            if(5-(i+1)>0)
      {
          cout<<"\nTry again, entering a number higher than previous: ";
        }
        }
        else if(n==num)
        {
            cout<<"\nCongratulations you guessed the right number!!!";
        }
        else if (n>num)
        {
             cout<<"\nThe number entered is higher than the right number...Try again";
            if(5-(i+1)>0)
      {
          cout<<"\nTry again, entering a number lower than previous: ";
        }
        }
    }
    if(i==5)
    {
        cout<<"\nSorry you are out of choices :";
        cout<<"\nThe correct solution is : "<<num;
    }
    return 0;
}