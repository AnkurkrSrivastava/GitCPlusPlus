    #include<iostream>
    using namespace std;
    class Rectangle {
    int length,breadth;
    public:
    Rectangle(){}      //constructor
    Rectangle(int l, int b)  {
            length=l;
            breadth=b;
    }
    Rectangle(Rectangle &r )  //copy constructor
        {
            length=r.length;
            breadth=r.breadth;}
    void display()
    {
    cout<<length<<" "<<breadth<<endl; 
    }};

    int main()
    {
    Rectangle r1(10,20);   //object r1 is created and initialized
        Rectangle r2(r1);   //copy constructor called
        Rectangle r3=r1;   //copy constructor called again
        Rectangle r4;         //r4 is created, not initialized
        r4=r1;         //copy constructor called
        cout << "\n Length and breadth of r1: "; 
        r1.display();
        cout << "\n Length and breadth of r2: "; 
        r2.display();
        cout << "\n Length and breadth of r3: ";
        r3.display();
        cout << "\n Length and breadth of r4: "; 
        r4.display(); 
        return 0;
    }