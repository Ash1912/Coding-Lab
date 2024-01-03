#include<iostream>
using namespace std;
class Distance
{
    private:
    int value;
    public:
    void getvalue()
    {
        cin>>value;
    }
    bool operator&&(Distance ob)
    {
        
        if(value == 1 && ob.value == 1)
            return true;
        else 
            return false;
        
    }
    bool operator||(Distance ob)
    {
    
      if(value == 1 || ob.value == 1)
        return true;
      else
        return false;
    }

    bool operator!()
    {
    	value = !value;
    }

    
    int display()
    {
        cout<<value<<endl;
    }
};
int main()
{
    
    Distance obj1, obj2,  sum, sub , mul , div, rem;
    cout<<"Enter a (1/0) for object 1: ";
    obj1.getvalue();
    cout<<"Enter for object 2: ";
    obj2.getvalue();
    if(obj1&&obj2)
        cout<<"Result of & is true \n";
    else
        cout<<"Result of & is false \n";
    if(obj1||obj2)
        cout<<"Result of || is true \n";
    else
        cout<<"Result of & is false \n";
     !obj1;
     !obj2;
    cout<<"Overloading the ! operator \n";
    obj1.display();
    obj2.display();
        
}
