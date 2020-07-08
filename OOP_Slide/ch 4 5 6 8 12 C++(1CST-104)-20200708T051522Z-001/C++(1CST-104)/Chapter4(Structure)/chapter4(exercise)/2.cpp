#include<iostream.h>
#include<conio.h>
struct point
{
	int p1xcor,p1ycor;
	int p2xcor,p2ycor;
	int sumxcor,sumycor;
};

int main()
{

    
	point P1xcor,P1ycor,P2xcor,P2ycor,Sumxcor,Sumycor;
	
	cout<<"Enter coordinates for p1:";
	cin>>P1xcor.p1xcor>>P1ycor.p1ycor;
	
	cout<<"Enter coordinates for p2:";
	cin>>P2xcor.p2xcor>>P2ycor.p2ycor;
	
	Sumxcor.sumxcor=P1xcor.p1xcor+P2xcor.p2xcor;
	Sumycor.sumycor=P1ycor.p1ycor+P2ycor.p2ycor;
	
	cout<<"Coordinates of p1+p2 are:"<<Sumxcor.sumxcor<<","<<Sumycor.sumycor;
	return 0;}
	
