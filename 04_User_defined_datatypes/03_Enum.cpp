# include<iostream>
using namespace std;

int main(){
    enum meal{ breakfast, lunch, dinner};
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    // idk.............
    meal m1 = lunch;
    cout<<m1<<endl;

    // So enum is something like it allocates breakfast, lunch, dinner as 0,1,2
    // So it makes it easy in some weird way.

    return 0;
}