#include<iostream.h>
#include<conio.h>
void main()
{
    clrscr();
    float y;
    float f;
    float i;
    float ey;
    cout<< " Enter yards:  " ;
    cin>>y;
    cout<< " Enter feet:  " ;
    cin>>f;
    cout<< " Enter inches" ;
    cin>>i;
    ey=(f/3)+(i/36)+y;
    cout<< " Equivalent yards=  " << ey;
    getch();
    }