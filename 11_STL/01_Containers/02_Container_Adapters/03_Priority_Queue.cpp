# include<iostream>
# include<queue>
using namespace std;

int main(){
    // Max Heap
    priority_queue<int> max1;

    // Min Heap
    priority_queue<int, vector<int>, greater<int> > min1;


    max1.push(3);
    max1.push(2);
    max1.push(1);
    max1.push(4);
    cout<<max1.size()<<endl;

    int n1 = max1.size(); // We are doing this because
    // if we did max1.size() in for loop, the size keeps changing as we delete the elements
    for(int i=0 ; i<n1 ; i++){
        cout<<(max1.top())<<" ";
        max1.pop();
    }
    cout<<endl;


    
    min1.push(3);
    min1.push(2);
    min1.push(1);
    min1.push(4);
    cout<<min1.size()<<endl;

    int n2 = min1.size(); // We are doing this because
    // if we did min1.size() in for loop, the size keeps changing as we delete the elements
    for(int i=0 ; i<n2 ; i++){
        cout<<(min1.top())<<" ";
        min1.pop();
    }
    cout<<endl;

    cout<<"Empty or not : "<<min1.empty()<<endl;

    return 0;
}