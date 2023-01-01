#include <iostream>
#include <math.h>
using namespace std;
class point{
    int x,y;
    friend void distance(point, point);
    public :
      point(int a, int b){
          x=a;
          y=b;
      } // constructor declaration 
      void print(){
        cout<<"the point is:("<<x<<","<<y<<")"<<endl;
      }
      void distance( point, point);
};
void point:: distance(point p1, point p2){
     int a,b;
     double c;
     a=(p1.x-p2.x)*(p1.x-p2.x);
     b=(p1.y-p2.y)*(p1.y-p2.y);
     c=sqrt(a+b);
     cout<<"the distance between points is:"<<c;
}
// point::complex(int x, int y){ // default declaration
//     a=x;
//     b=y;
// }
int main() {
    // implicit call
    point p1(3,6);
    p1.print();
    point p2(5,7);
    p2.print();
    point p3(6,9);
    p3.distance(p1,p2);
    return 0; 
}