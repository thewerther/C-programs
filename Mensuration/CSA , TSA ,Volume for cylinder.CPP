//In this program we can learn how to find Total Surface Area (TSA), Curved Surface Area (CSA), Volume of a cylinder. By using Switch case this program is done.
#include<iostream.h>
#include<conio.h>
#include<math.h>             // for sqrt() function
#include<process.h>         // for exit function
int main()
{ 
clrscr();
char ch,ch1;
float Surface_area,Curved_area,Volu,rad,heg; // rad= radius, heg=height,Volu=Volume. 
cout<<"\n"<<"Cylinder Menu ";                //Index for user selection.
cout<<"\n"<<"1. Total Surface Area";
cout<<"\n"<<"2. Curved Surface Area";
cout<<"\n"<<"3. Volume";
cout<<"\n"<<"4. Exit";
cout<<"\n"<<"Enter Your Choice = ";
do 
{
cin>>ch;
if(ch =='1'|| ch =='2' || ch=='3')
{
cout<<" Enter Radius = ";
cin>>rad;
cout<<" Enter Height = ";
cin>>heg;
}
switch(ch)                                       //Switch case is used.
{
case '1':
Surface_area=2*3.14*rad*(rad+heg);
cout<<"Total Surface Area = "<<Surface_area;
break;
case'2':
cout<<"Curved Surface Area = "<<Curved_area;
break;
case'3':
Volu=3.14*rad*rad*heg;
cout<<"Volume = "<<Volu;
break;
case '4':
cout<<"Breaking";
exit(0);
default : cout<<"Wrong Choice";
cout<<" Enter a valid one";
break;
}
cout<<"\n"<<"Want to enter more(y/n)? = ";
cin>>ch1;
if(ch=='y'||ch1=='Y');
cout<<" Again enter your choice(1-4) = ";
}
while(ch=='y'||ch1=='Y');
return 0;
}
