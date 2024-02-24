#include<iostream>
using namespace std;

class Box {
    int width;
    //ctor //private constructor 
    Box(int _w) : width(_w){};

public:
    // //ctor
    // Box(int _w) : width(_w){};

    int getWidth() const {
        return width;
    }

    void setWidth(int _val) {
        width = _val;
    }
    friend class BoxFactory;
};

class BoxFactory {
    int count;

public: 
    Box getABox(int _w) {
        ++count;
        return Box(_w);
    }
};

int main() {
    // Box b(5);
    // cout << b.getWidth() << endl;

    BoxFactory bfact;
    Box b = bfact.getABox(5);
    cout << b.getWidth() << endl;

    return 0;
}