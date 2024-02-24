# include<iostream>
# include<set>
using namespace std;
// Implementation is done using Binary Search tree.
// You cannot modify the elements which are already in
// Sorted order


int main(){
    set<int> s;
    s.insert(5);
    s.insert(6);
    s.insert(6);
    s.insert(5);
    s.insert(1);
    s.insert(9);

    // COmplexity of this insert function is O(log(n)) due to Binary Search Tree reasons

    for (int i : s){
        cout<<i<<" ";
    }
    cout<<endl;

    s.erase(s.begin());
    for (int i : s){
        cout<<i<<" ";
    }
    cout<<endl;

    set<int> :: iterator iter = s.begin();
    iter++;

    s.erase(iter);
    for (int i : s){
        cout<<i<<" ";
    }
    cout<<endl;
    

    cout<<"Count : "<<s.count(5)<<endl; // In this case, it is used to check whether a element is present or not
    cout<<"Count : "<<s.count(1)<<endl;

    set<int> :: iterator iter1 = s.find(9); 
    cout<<"Value : "<<*iter1<<endl;

    // insert, find, erase, count - Time Complexity => O(log(n))
    // size, empty, begin => O(1)

    
    return 0;
}