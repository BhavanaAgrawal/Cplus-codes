#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{clrscr();
randomize();
int n,m=5;
n=20+random(m);
for(int i=n;i<=25;i++)
{ cout<<i<<'*';
}
getch();
}
