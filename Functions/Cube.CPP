// In this program using function to accept a number and print its cube.
#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
float cube(float);      //Function cube's declaration
int main()
{
system("cls");
float num;
cout<<"\n"<<"The cube of "<<num<<"is"<<cube(num)<<"\n";
return 0;
}
float cube(float a)        //Function cube's definition
{
return a*a*a;
}
