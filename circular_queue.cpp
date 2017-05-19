#include<iostream>
#define MAX 200
using namespace std;

class CQueue{
int data[200];
int front,rear,capacity;
public:
	CQueue(){front=rear=0;capacity=10;}
	CQueue(int c){front=rear=0;capacity=c;}
	void Enqueue(int item){
	if(front==(rear+1)%capacity){
	cout<<"Overflow"<<endl;
	}else
	{
	data[rear]=item;
	rear=(rear+1)%capacity;
	cout<<"Added: "<<item<<endl;
	}	
	}
	void Dequeue(){
	if(front==rear)
		{
			cout<<"Underflow"<<endl;
		}
	else
	{
		cout<<"Removed :"<<data[front]<<endl;
		front = (front+1)%capacity;
		if(front==rear)
			front=rear=0;
	}
	}
	void display()
	{	int i;
		if(rear>=front)
		{
			for(i=front;i<rear;i++)
			{
			cout<<data[i]<<"\t";
			}
		}else
		{
			for(i=front;i<capacity;i++)
				cout<<data[i]<<"\t";
			for(i=0;i<rear;i++)
				cout<<data[i]<<"\t";
		}
		cout<<endl;
	cout<<"Head : "<<front<<" Tail:"<<rear<<endl;
	}
};

int main(){

	CQueue cq1(10);
	cq1.Enqueue(10);
	cq1.Enqueue(20);
	cq1.Enqueue(30);
	cq1.display();
	cq1.Dequeue();
	cq1.Dequeue();
	cq1.Dequeue();
	cq1.Dequeue();
        cq1.Enqueue(10);
	cq1.Enqueue(20);
	cq1.Enqueue(30);
	cq1.Enqueue(40);
	cq1.Enqueue(50);
	cq1.Enqueue(60);
	cq1.display();
	cq1.Dequeue();
	cq1.Enqueue(10);
	cq1.Enqueue(20);
	cq1.Enqueue(30);
	cq1.display();
	cq1.Dequeue();
	cq1.Dequeue();
	cq1.display();
	cq1.Enqueue(70);
	cq1.display();	
	return 0;

}
