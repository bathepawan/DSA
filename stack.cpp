#include<iostream>

using namespace std;

#define MAX 100

class STACK
{
	int top;
	public:
	
	int data[MAX];
	
	STACK(){top=-1;}
	
	bool push(int item)
	{
		if(top>=MAX)
		{
			cout<<"Overflow"<<endl;
			return false;	
		}else
		{
			data[++top]=item;
			return true;		
		}
	}
	
	int pop()
	{
		if(top==-1)
		{
			cout<<"Underflow"<<endl;
			return false;
		}else
		{
			return data[top--];
		}
	}
	
	bool isEmpty(){
		return top==-1;
		}
};

int main(){

	STACK s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout<<endl<<"Top Now:" <<s.pop();
	cout<<endl<<"Top Now:"<<s.pop();
return 0;
}
