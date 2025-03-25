#include <iostream>
#include <cmath> 

using namespace std;

class Circle {
private:
    double radius;
    string color;
public:
    Circle() { radius = 0.0, color="White"; }
    Circle(string c) { color=c,radius = 0.0; }
    Circle(double r) {radius = r, color="White";}
    Circle(double r,string c) {color=c;radius = r;}
    
    void setRadius(double r) { radius = r; }
    double getDiameter() { return radius * 2; }
    double getArea() { return radius * radius * M_PI; }
    double getCircumference() { return 2 * radius * M_PI; }

    string getColor() {return color;}
    void setColor(string co) { color = co; }
    bool isSimilar(Circle &a){
        return (getDiameter() == a.getDiameter() && getColor() == a.getColor());
    }
};

int main() {
    Circle c1("Red");
    Circle c2(7);
    Circle CircleMara(7,"Red");

    c1.setRadius(5); 
    c2.setColor("Red");
    

    cout << "The area of c1: " << c1.getArea() << endl;
    cout << "The circumference of c1: " << c1.getCircumference() << endl;
    cout << "The diameter of c1: " << c1.getDiameter() << "\n\n";

    cout << "The area of c2: " << c2.getArea() << endl;
    cout << "The circumference of c2: " << c2.getCircumference() << endl;
    cout << "The diameter of c2: " << c2.getDiameter() << endl;
    cout << endl;
    cout << "c1 is similar to c2? : " ;
    if(c1.isSimilar(c2)) cout << "Yes";
    else cout << "No";
    cout << endl;
    cout << "c2 is similar to CircleMara? : ";
    if(c2.isSimilar(CircleMara)) cout << "Yes";
    else cout << "No";
    return 0;
}