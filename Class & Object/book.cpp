#include <iostream>

using namespace std;

class book{
    private:
    int bookno;
    char booktitle[20];
    float price,cost;
    void total_cost(int n)
    {
       cost = n*price;
    }

    public:
    void input()
    {
        cout<<"Enter the book number: ";
        cin>>bookno;
        cout<<"Enter the book title: ";
        cin>>booktitle;
        cout<<"Enter the book price: ";
        cin>>price;
    }
    void purchase()
    {
        int n;
        cout << "Enter the number of books: ";
        cin >> n;
        cout << "Total cost is:";
        total_cost(n);  
        cout << cost;
    }
};

int main()
{
    book b1;
    b1.input();
    b1.purchase();
    return 0;
}