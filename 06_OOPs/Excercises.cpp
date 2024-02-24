# include<iostream>
# include<math.h>

using namespace std;
// Using OOP, create a function which computes distance between two points in x-y plane.

class position{
    int x, y;
    public:
        position(int a, int b){
            x=a;
            y=b;
        }

        void display_point(){
            cout<<"The position of the object is ("<<x<<","<<y<<")"<<endl;
        }
        friend void distance(position o1, position o2);
};

void distance(position o1, position o2){
    double x_diff = o1.x-o2.x;
    double y_diff = o1.y-o2.y;

    double dist = pow(pow((x_diff),2)+pow((y_diff),2),0.5);
    cout<<"The distance between the two points is "<<dist<<endl;
}

int main(){
    position p1(23,1), p2(1,1);
    p1.display_point();
    p2.display_point();

    
    distance(p1,p2);

    return 0;
}