// Using Switch case we are going to find area of Circle,Rectangle,Triangle.
#include<iostream.h>
#include<conio.h>
#include<math.h>                         
int main()
{
clrscr();
float area,rad,len,bre,a,b,c,s,;          //rad=radius,len=length,bre=breadth.
int ch;
cout<<"AREA MENU"<<"\n";                 //INDEX
cout<<"1.Circle"<<"\n";
cout<<"2.Rectangle"<<"\n";
cout<<"3.Triangle"<<"\n";
cin>>ch;                               // cin makes to type your own value for output.
cout<,"\n";
switch(ch)                            //Switch case
{
case 1 : cout<<"Enter radius of the circle:';                   //first case starts.
cin>>rad;                                                        //Enter the radius.
area=3.14*rad*rad;                                           // formula for finding the area of the circle.
cout<<"\n"<<"The area of the circle is"<<area<<"\n";          
break;                                                         //break after each case must be used. Or You will get correct answer and wrong answer i.e, the next case also will be executed.
//first case ends here.
case 2: cout<<" Enter length and bradth of rectangle";             // second case starts.
cin>>len>>bre;                                         
area=len*bre;                                                           //Formula for area of Rectangle.
cout<<"\n"<<"The area of the rectangle is"<<area<<"\n";
break;         
//Second case end here.
case 3: cout<<"Enter three sides of the triangle";                  //Third case starts here. 
cin>>a>>b>>c;
s=(a+b+c)/2;                                                      //formuls for area of Triangle.
area=sqrt(s*(s-a)*(s-b)*(s-c));
cout<<"\n"<<"The area of the Triangle is"<<area<<"\n";
break;
//Third case ends here.
default:cout<<"Wrong Choice!!!!!!!";                //this statement is also important because if enter any wrong values or chose wrong option this statement will get executed.
break;
}
return 0;
}
