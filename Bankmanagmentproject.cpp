#include<iostream>
using namespace std;
#include<stdio.h>
#include<conio.h>


class Bank
{
    char name[100],add[100],y;
    int Balance;
public:
void Open_account();
void Diposite_money();
void Withdrow_money();
void Display_account();
};
void Bank :: Open_account(){
    cout<<"Enter the full name :: ";
    cin.ignore();
    cin.getline (name,100);
    cout<<"Enter yout adress :: ";
    cin.ignore();
    cin.getline (add,100);
    cout<<"what type of account you want to open saving (s) or current (c) ";
    cin>>y;
    cout<<"amount for deposite :: ";
    cin>>Balance;
    cout<<"your account is created\n";
}
void Bank :: Diposite_money(){

int a;
cout<<"Enter how much you deposite";
cin>>a;
Balance+=a;
cout<<"total amount you Deposite :: \t"<<Balance;
}
void Bank ::Display_account()
{
 cout<<"your full name ::\t" <<name;
 cout<<"your address::\t"<<add;
 cout<<"types of account that you open ::\t"<<y;
 cout<<"amount you deposite::\t"<<Balance;
}
void  Bank :: Withdrow_money(){
    float amount;
cout<<"\n withdrow ::";
cout<<"enter amount to withdrow::";
cin>>amount;
Balance=Balance-amount;
cout<<"now total amount is left ::"<<Balance;



}


int main()
{
    int ch, x;
    Bank obj;
    do
{
 cout<<"1) Open account\n ";
 cout<<"2) diposite money\n ";
 cout<<"3) Withdrow money\n ";
 cout<<"4) Display account\n ";
 cout<<"5) Exit \n";
 cout<<"select the option from above \n";
 cin>>ch;
 switch(ch) 
 {
 case 1: "1)open  account \n ";
 obj.Open_account();
 break;
 case 2: "2 Diposite money \n";
obj.Diposite_money();  
break;
case 3:
cout<<"3)withdrow money:\n";
obj.Withdrow_money();
break;
case 4: "4) Display account \n ";
obj.Display_account();
break;
case 5:
if(ch==5)
{
    exit(1);
}
    default: 
    cout<<"this is not exit try again \n";
}
cout<<"\n do you want to select next option then press :: Y \n";
cout<<"if you Want to exait then press :: N";
x= getch();
if(x=='n'|| x=='N')
exit(0);
 }
 while (x=='Y'||x=='Y');
getch();
return 0;
} 
    