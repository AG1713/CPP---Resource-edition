# include<iostream>
# include<deque>
using namespace std;

// In this type, we can add and delete from both ends (front and rear)


int main(){
    deque<int> d;
    d.push_back(3);
    d.push_back(4);
    d.push_front(1);

    for (int i: d){ // Idk how this works
        cout<<i<<" ";
    }
    cout<<endl;

    d.pop_back();
    
    for (int i: d){ // Idk how this works
        cout<<i<<" ";
    }
    cout<<endl;


    cout<<"Element at index 1 : "<<d.at(1)<<endl;
    cout<<"Front : "<<d.front()<<endl;
    cout<<"Back : "<<d.back()<<endl;

    cout<<"Empty or not : "<<d.empty()<<endl;

    cout<<"Before erase : "<<d.size()<<endl;
    d.erase(d.begin(), d.end());
    cout<<"After erase : "<<d.size()<<endl;

    for (int i: d){ // Idk how this works
        cout<<i<<" ";
    }
    cout<<endl;




    return 0;
}