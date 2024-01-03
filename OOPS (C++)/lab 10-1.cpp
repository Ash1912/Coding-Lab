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
    bool operator<=(Test ob)
    {
        
        if(value <= ob.value)
            return true;
        else 
            return false;
        
    }
    bool operator>=(Test ob)
    {
    
      if(value >= ob.value)
        return true;
      else
        return false;
    }

    bool operator== (Test ob)
    {
    	if(value == ob.value)
    	   return true;
        else
            return false;
    }

    bool operator!= (Test ob)
    {
    	
    	if(value != ob.value)
    	    return true;
        else
            return false;
    }

    
    int display()
    {
        
        return value;
        
    }
};
int main()
{
    
    Test obj1, obj2,  sum, sub , mul , div, rem;
    cout<<"Enter value for object 1: ";
    obj1.getvalue();
    cout<<"Enter value for object 2: ";
    obj2.getvalue();
    if(obj1>=obj2)
        cout<<"Object 1 is greater than or equal to Object 2"<<endl;
    if(obj1<=obj2)
        cout<<"Object 1 is less than or equal to Object 2"<<endl;
    if (obj1==obj2)
        cout<<"Object 1 is equal to object 2"<<endl;
    if (obj1!=obj2)
        cout<<"Object 1 is not equal to object 2"<<endl;
        
}
