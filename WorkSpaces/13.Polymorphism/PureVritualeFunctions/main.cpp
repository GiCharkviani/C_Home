#include <iostream>
#include <vector>

using namespace std;

class Shape { // Abstract class
private:
    // Attributes common to all shapes
public:
    virtual void draw() = 0; // pure virtual function
    virtual void rotate() = 0; // pure virtual function
    virtual ~Shape() {};
};

class Open_shape: public Shape { // Abstract class
public:
    virtual ~Open_shape(){}
};

class Closed_shape: public Shape {  // Abstract class
public:
    virtual ~Closed_shape(){}
};

class Line: public Open_shape { // Concrete class
public:
    virtual void draw() override {
        cout << "Drawing a line" << endl;
    }
    virtual void rotate() override {
        cout << "Rotating a line" << endl;
    }
    virtual ~Line() {};
};

class Circle: public Closed_shape { // Concrete class
public:
    virtual void draw() override {
        cout << "Drawing a circle" << endl;
    }
    virtual void rotate() override {
        cout << "Rotating a circle" << endl;
    }
    virtual ~Circle() {};
};

class Square: public Closed_shape { // Concrete class
public:
    virtual void draw() override {
        cout << "Drawing a Square" << endl;
    }
    virtual void rotate() override {
        cout << "Rotating a Square" << endl;
    }
    virtual ~Square() {};
};

void screen_refresh(const vector<Shape *> &shapes) {
    cout << "Refreshing" << endl;
    for(const auto p: shapes)
        p->draw();
}


int main() {
//    Shape s;
//    Shape *p = new Shape();

//    Circle c;
//    c.draw();

//    Shape *ptr = new Circle();
//    ptr->draw();
//    ptr->rotate();

    Shape *s1 = new Circle();
    Shape *s2 = new Line();
    Shape *s3 = new Square();

    vector<Shape *> shapes{s1, s2, s3};
    for(auto shape: shapes)
        shape->rotate();

    screen_refresh(shapes);

    delete s1;
    delete s2;
    delete s3;



    return 0;
}