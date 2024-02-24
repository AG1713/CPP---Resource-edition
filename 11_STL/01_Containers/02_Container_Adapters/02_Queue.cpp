# include<iostream>
# include<queue>
using namespace std;

int main(){
    queue<string> q;

    q.push("This");
    q.push("That");
    q.push("Then");
    
    cout<<"Front element : "<<q.front()<<endl;
    cout<<"Back element : "<<q.back()<<endl;
    cout<<q.size()<<endl;
    q.pop();
    cout<<"Popped"<<endl;
    cout<<"Front element : "<<q.front()<<endl;
    cout<<"Back element : "<<q.back()<<endl;
    cout<<q.size()<<endl;

    
    
    return 0;
}