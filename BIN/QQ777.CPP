#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct student
{
float amt;
char name[20],hs[20];

}emp[5];

void main()
{
 clrscr();
 for(int i=0;i<2;i++)
 {
  cout<<"\n enter the  name  /   house";
  gets(emp[i].name);    gets(emp[i].hs);
  cout<<"\n enter the  amt";
  cin>>emp[i].amt;
 }

cout<<endl;
int j;
for( j=0;j<60;j++)
 cout<<'-';
cout<<endl;
cout<<"Name"<<"      "<<"House"<<"     "<<"amount collected ";
cout<<endl;
for( j=0;j<60;j++)
 cout<<'-';
 cout<<endl;
 for(j=0;j<2;j++)
 {cout<<emp[j].name<<"         "<<emp[j].hs<<"      "<<emp[j].amt<<endl;
  }
 cout<<endl;

for( j=0;j<60;j++)
 cout<<'-';
getch();
}


