#ifndef STACK_H
#define STACK_H

class Stack{
public:
	// Copy Constructor
	Stack( const Stack& );
	Stack(int inCapacity);
	void push(double inDouble);
	double top() const;
	void pop();
	void peek();
	void display();
	bool isFull() const;
	bool isEmpty() const;
private:
	int mCapacity;
	int counter;
	double * mElements;
	double * mTop;


};





#endif