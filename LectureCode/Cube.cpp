#include <iostream>
using namespace std;

class Cuboid
{
    // access specifier:
    private:
    int width;
    int height;
    int length;


    public:

    Cuboid(int w, int h, int l) :  width(w), height(h), length(l)
    {
        if (height < 0)
        {
            cout<<"No!"<<endl;
            height = 0;
        }
    }

    // setter
    void setWidth(int newWidth)
    {
        if (newWidth < 0)
        {
            cout<<"No!"<<endl;
        }
        else
        {
            width = newWidth;
        }
    }

    // getter
    int getWidth()
    {
        return width;
    }



    void display()
    {
        cout<<"Width: "<<width<<endl;
        cout<<"Height: "<<height<<endl;
        cout<<"Length: "<<length<<endl;
    }

};

int main()
{



    // Instantiating Cuboid object and initializes
    Cuboid cuboid1(2, -3, 4);

    

    cuboid1.display();




    // instantiating an int
    int x1 = 10;

    // initializing
    x1 = 66;
    

    
    return 0;
}