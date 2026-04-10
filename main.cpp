#include <iostream>
using namespace std;
void fun();
int main()
{
    cout<<" --------- Alham's plane --------- \n\n\n"<<endl;
   int password;
   string name;
   char x;
   cout <<"enter your name"<<endl;
   cin>>name;

   for(int i=0;i<=2;i++)
    {
   cout<<"enter your password... it is for practice only \n Note: the password is 111"<<endl;
   cin>>password;
    if(password==111)
    {
   cout<<"you pass"<<endl;
   cout<<" Hello "<<name<<" in Aiham's plane we have three kinds of tickets :-"<<endl;
   cout<<" we have first kind is VIP ticket witch is 1000$ ."<<endl;
   cout<<" we have second kind is medium ticket witch is 600$ ."<<endl;
   cout<<" we have last kind is normal ticket witch is 400$ .\n"<<endl<<endl;
   cout<<"please choose kind of tickets :  \n if you want to end program press m"<<endl;
   int price,number,cash,chang,chair;
   string ticket;
   cin>>ticket;
   if(ticket=="VIP"||ticket=="vip")
        {
   cout<<" How many chairs do you want to book ?"<<endl;
   cin>>chair;
   price= chair*1000;
   cout<<" you have to pay "<<price<<" in dollar"<<endl;
   //cout<<" if you want to end program press m if not press any letter"<<endl;
   cin>>cash;
   if(cash < price)
    {
    number =cash / 1000;
   cout<<"depend on your money you can book = "<<number<<" chair"<<endl;
   chang=(cash-(number*1000));
   cout<<" here your chang is = "<<chang<<endl;
   cout<<"nice journey dear "<<name<<endl;
   if(chang==0)
    {
    cout<<" do you want to book another chairs if yes press letter y if not press letter any letter :"<<endl;
    char common;   cin>>common;
    if(common=='y'|| common=='Y')
        {fun();}
    else
        cout<<" nice journey ."<<endl;}
   }
   else{
   chang=cash-price;
   cout<<" here your chang is = "<<chang<<endl;
   cout<<"nice journey dear "<<name<<endl;}
   }
   else if(ticket=="medium")
    {
   cout<<" How many chairs do you book ?"<<endl;
   cin>>chair;
   price= chair*600;
   cout<<" you have to pay "<<price<<" in dollar"<<endl;
   cout<<" if you want to end program press m if not press any letter"<<endl;
   cin>>x;
   cin>>cash;
   if(cash<price)
    {
    number=cash/600;
   cout<<"depend on your money you can book = "<<number<<" chair"<<endl;
   chang=(cash-(number*600));
   cout<<" here your chang is = "<<chang<<endl;
   cout<<"nice journey dear "<<name<<endl;
   if(chang==0)
    {
    cout<<" do you want to book another chairs if yes press letter y if not press letter f :"<<endl;
    char common;   cin>>common;
    if(common=='y'|| common=='Y')
        {fun();}
    else
        cout<<" nice journey ."<<endl;}}
   else{
   chang=cash-price;
   cout<<" here your chang is = "<<chang<<endl;
   cout<<"nice journey dear "<<name<<endl;}
   }
   else if(ticket=="normal")
   {
   cout<<" How many chairs do you book ?"<<endl;
   cin>>chair;
   price= chair*400;
   cout<<" you have to pay "<<price<<" in dollar"<<endl;
   //cout<<" if you want to end program press m if not press any letter"<<endl;
   cin>>cash;
   if(cash<price)
    {
    number=cash/400;
   cout<<"depend on your money you can book = "<<number<<" chair"<<endl;
   chang=(cash-(number*400));
   cout<<" here your chang is = "<<chang<<endl;
   cout<<"nice journey dear "<<name<<endl;
   if(chang==0)
    {
    cout<<" do you want to book another chairs if yes press letter y if not press letter f :"<<endl;
    char common;   cin>>common;
    if(common=='y'|| common=='Y')
        {fun();}
    else
        cout<<" nice journey ."<<endl;}}
   else{
   chang=cash-price;
   cout<<" here your chang is = "<<chang<<endl;
   cout<<"nice journey dear "<<name<<endl;}
   }
   else if(ticket=="m")
   {cout<< " good bye "<<name<<endl;
     }

   break;
         }
    else
    cout<<"you entered wrong password"<<endl;
   }


    return 0;
}
void fun()
{  string name;
   cout<<" Hello "<<name<<" in Aiham's plane we have three kinds of tickets :-"<<endl;
   cout<<" we have first kind is VIP ticket witch is 1000$ ."<<endl;
   cout<<" we have second kind is medium ticket witch is 600$ ."<<endl;
   cout<<" we have last kind is normal ticket witch is 400$ .\n"<<endl<<endl;
   cout<<"please choose kind of tickets :  \n if you want to end program press m"<<endl;
   int price,number,cash,chang,chair; string ticket;
   cin>>ticket;
   if(ticket=="VIP"||ticket=="vip")
        {
   cout<<" How many chairs do you book ?"<<endl;
   cin>>chair;
   price= chair*1000;
   cout<<" you have to pay "<<price<<" in dollar"<<endl;
   //cout<<" if you want to end program press m if not press any letter"<<endl;
   cin>>cash;
   if(cash < price)
    {
    number =cash / 1000;
   cout<<"depend on your money you can book = "<<number<<" chair"<<endl;
   chang=(cash-(number*1000));
   cout<<" here your chang is = "<<chang<<endl;
   if(chang==0)
    {
    cout<<" do you want to book another chairs if yes press letter y if not press letter any letter :"<<endl;
    char common;   cin>>common;
    if(common=='y'|| common=='Y')
        {fun();}
    else
        cout<<" nice journey ."<<endl;}
   }
   else{
   chang=cash-price;
   cout<<" here your chang is = "<<chang<<endl;
   cout<<"nice journey dear "<<name<<endl;}
   }
   else if(ticket=="medium")
    {
   cout<<" How many chairs do you book ?"<<endl;
   cin>>chair;
   price= chair*600;
   cout<<" you have to pay "<<price<<" in dollar"<<endl;
   //cout<<" if you want to end program press m if not press any letter"<<endl;
   cin>>cash;
   if(cash<price)
    {
    number=cash/600;
   cout<<"depend on your money you can book = "<<number<<" chair"<<endl;
   chang=(cash-(number*600));
   cout<<" here your chang is = "<<chang<<endl;
   if(chang==0)
    {
    cout<<" do you want to book another chairs if yes press letter y if not press letter f :"<<endl;
    char common;   cin>>common;
    if(common=='y'|| common=='Y')
        {fun();}
    else
        cout<<" nice journey ."<<endl;}}
   else{
   chang=cash-price;
   cout<<" here your chang is = "<<chang<<endl;
   cout<<"nice journey dear "<<name<<endl;}
   }
   else if(ticket=="normal")
   {
   cout<<" How many chairs do you book ?"<<endl;
   cin>>chair;
   price= chair*400;
   cout<<" you have to pay "<<price<<" in dollar"<<endl;
   //cout<<" if you want to end program press m if not press any letter"<<endl;
   cin>>cash;
   if(cash<price)
    {
    number=cash/400;
   cout<<"depend on your money you can book = "<<number<<" chair"<<endl;
   chang=(cash-(number*400));
   cout<<" here your chang is = "<<chang<<endl;
   if(chang==0)
    {
    cout<<" do you want to book another chairs if yes press letter y if not press letter f :"<<endl;
    char common;   cin>>common;
    if(common=='y'|| common=='Y')
        {fun();}
    else
        cout<<" nice journey ."<<endl;}}
   else{
   chang=cash-price;
   cout<<" here your chang is = "<<chang<<endl;
   cout<<"nice journey dear "<<name<<endl;}
   }
   else if(ticket=="m")
   {cout<< " good bye "<<name<<endl;
    }

}
