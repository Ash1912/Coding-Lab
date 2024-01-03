#include <iostream>
using namespace std; 
#define MAX 100
 class book
{
    private:
    char  name_of_book[50];
    char author_of_book[50];
    int price;
    public:
    void get(){
        cout<<"Enter name of the book: ";
        cin>>name_of_book;
        cout<<"Enter author of the book: ";
        cin>>author_of_book;
        cout<<"Enter price of the book: ";
        cin>>price;
    }
    friend void display(book &b1);
};
void display(book &b1){
    cout<<"Name of book is: "<<b1.name_of_book<<endl;
    cout<<"Author of book is: "<<b1.author_of_book<<endl;
    cout<<"Price of book is: "<<b1.price<<endl;
}
int main(){
    book a[MAX];
    int n,i;
    cout<<"Enter number of books: \t";
    cin>>n;
    for(i=0;i<n;i++){
        cout<<"Enter details of book :\t"<<i+1<<endl;
        a[i].get();
    }
    cout<<endl;
    for(i=0;i<n;i++){
        cout<<"Details of book :\t"<<i+1<<endl;
        display(a[i]);
    }
    return 0;
}
