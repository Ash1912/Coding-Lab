#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class consumer
{
private:
	int consumer_id;
	char consumer_name[50];
public:
	consumer()
	{
		consumer_id = 0;
		strcpy(consumer_name,"NULL");
	}
	
	void *operator new(size_t size)
	{
		void *point = malloc(size);
		return point;
	}
	void operator delete(void *point)
	{
        free(point);
        cout<<"\nOverloaded the delete operator";
	}
	void display()
	 {
	 	cout<<consumer_id<<endl<<consumer_name;

	 }
	 void input()
	 {
	 	cin>>consumer_id;
	 	getchar();
	 	cin.getline(consumer_name,30);
	 }
	
};

int main()
{
	consumer *c;
	c = new consumer;
	cout<<"Enter the consumer Id and Name :\n";
	c->input();
	cout<<endl;
	cout<<"Details of consumer are :\n";
    c->display();
    delete(c);
}
