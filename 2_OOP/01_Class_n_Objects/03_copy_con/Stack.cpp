#include <iostream>
#include "Stack.h"
using namespace std;

Stack::Stack( const Stack& s)
{
	mCapacity = s.mCapacity;
	mElements = new double[mCapacity];
	int nr = s.mTop - s.mElements;
	for(int i=0; i<nr;++i)
	{
		mElements[i] = s.mElements[i];
	}
	mTop = mElements + nr;
}
Stack::Stack(int capacity)
{
	mCapacity = capacity;
	mElements = new double[mCapacity];
	mTop = mElements;
	counter = 0;

}
void Stack::push(double inDouble)
{
	if( !isFull() )
	{
		*mTop = inDouble;
		mTop++;
		counter++;

		display();
	}
	else {
		cout<< "Cannot push(), Stack is Full"<<endl;
	}
	
}
void Stack::pop(){
    //to store and print which number
    //is deleted
    //double temp;
    //check for empty
    if( !isEmpty() )
    {
    	//temp=*mTop;
    	mTop--;
    	counter--;

    	display();
    }else{
    	cout<< "Cannot pop(), Stack is empty!" <<endl;
    }  
}
bool Stack::isFull() const
{
	if(counter == mCapacity)
	{
		return true;
	}
	return false;
}    
bool Stack::isEmpty() const
{
	if(counter == 0)
	{
		return true;

	}
	return false;
}  
void Stack::display()
{
	if( !isEmpty() )
	{
		cout<< "-->  ";
		for(int i=0;i<counter;i++)
		{
			cout<< *(mTop-counter+i);
			cout<<",";
		}
		cout<<" "<< endl;
	}
}
int main()
{
	 Stack s1(5);
	Stack s2 = s1;
	s1.push(1);
	s1.push(10);
	s1.push(2);
	s1.push(200);
	s1.push(3);
	s1.push(100);
	s1.push(1000);

	s1.pop();s1.pop();s1.pop();s1.pop();s1.pop();
	s1.pop();
	s1.pop();

	s2.push(100);

	return 0;
}