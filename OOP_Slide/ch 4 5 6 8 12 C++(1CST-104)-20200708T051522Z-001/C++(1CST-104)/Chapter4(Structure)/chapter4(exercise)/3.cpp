#include<iostream.h>
#include<conio.h>

struct distance
{
	float feet;
	float inches;
	
};

struct volume
{
	distance length;
	distance width;
	distance height;
};

int main()
{
	volume volume1;
	
	cout<<"Enter the lenght in feet and inches:";cin>>volume1.length.feet>>volume1.length.inches<<endl;
	cout<<"Enter the width in feet and inches:";cin>>volume1.width.feet>>volume1.width.inches<<endl;
	cout<<"Enter the height in feet and inches:";cin>>volume1.height.feet>>volume1.height.inches<<endl;
	
	float l=volume1.length.feet+volume1.length.inches/12;
		float w=volume1.width.feet+volume1.width.inches/12;
			float h=volume1.height.feet+volume1.height.inches/12;
	
	
cout<<"Volume="<<l*w*h<<endl;
return 0;
}

