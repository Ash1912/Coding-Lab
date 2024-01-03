#include<iostream>
using namespace std;
class Test
{
    private:
    int value;
    public:
    void getvalue()
    {
        cin>>value;
    }
    bool operator&(Test ob)
    {
        Test t;
        t.value = value&ob.value;
        t.display();
        
    }
    bool operator|(Test ob)
    {
    
        Test t;
        t.value = value|ob.value;
        t.display();
        
    }

    bool operator-()
    {
    	value = -value;
    }

    
    int display()
    { 
        cout<<value<<endl;
    }
};
int main()
{
    
    Test obj1, obj2,  sum, sub , mul , div, rem;
    cout<<"Enter value for object 1: ";
    obj1.getvalue();
    cout<<"Enter value for object 2: ";
    obj2.getvalue();
    cout<<"Result of bitwise and operator ";
    obj1&obj2;
    cout<<"Result of bitwise or operator ";
    obj1|obj2;
     -obj1;
     -obj2;
    cout<<"Overloading the unary minus operator \n";
    obj1.display();
  	obj2.display();
        
}
