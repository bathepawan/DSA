#include<iostream>

using namespace std;
#define MAXLENGTH 20

class Queque
{
int head,tail,length;
int data[MAXLENGTH];

public:
	Queque(){
		length=MAXLENGTH;
		tail=head=0;

	}
	Queque(int size){
		length=size;
		tail=head=0;
	}

	void Enqueue(int item){
		if(tail == length)
			cout <<"Overflow"<<endl;
		else
		{
			data[tail]=item;
			tail = tail+1;
			cout <<"Added :"<<item<<endl;
		}
	}
	int Dequeue(){
		if(head == tail)
			{
			cout <<"Underflow"<<endl;
			return 0;
			}
		else
			{
			int temp = data[head];
			head = head + 1;
			if (head==tail)
						{
							head=tail=0;
						}			
			cout << "Dequee: "<<temp<<endl;
			return temp;
			}
	}
	void display()
	{
	cout <<"Head:"<<head<<" , Tail:"<<tail<<" , Length :"<<length<<endl;
	if(head==tail)
	{
		cout<<"Queue Empty"<<endl;
	}else
	{
		for(int i=head;i<tail;i++)
		{
			cout<<data[i]<<"\t";
		}
	}
	cout<<endl;
	}

};
int main(int argc, char const *argv[])
{
	Queque q1(6);
	q1.Enqueue(10);
	q1.Enqueue(20);
	q1.Enqueue(30);
	q1.display();
	cout << q1.Dequeue() << endl;
	cout << q1.Dequeue() << endl;
	cout << q1.Dequeue() << endl;
	q1.display();
	cout << q1.Dequeue() << endl;
	cout << q1.Dequeue() << endl;

	q1.Enqueue(10);
	q1.Enqueue(20);
	q1.Enqueue(30);
	q1.Enqueue(40);
	q1.display();
	cout << q1.Dequeue() << endl;
	cout << q1.Dequeue() << endl;
	cout << q1.Dequeue() << endl;
	q1.Enqueue(50);
	q1.Enqueue(60);
	q1.display();	
	cout << q1.Dequeue() << endl;
	cout << q1.Dequeue() << endl;
	q1.Enqueue(70);
	q1.Enqueue(80);
	q1.display();	
	return 0;

}
