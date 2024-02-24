# include<iostream>
# include<map>
# include<string>
using namespace std;
// Map in cpp is dictonary in python, just the data-types of the elements are decided early-on
// Map is an associative array
// Map is implemented using balanced tree
// Time Complexity of erase, insert, find, count - O(log(n)) in case of map
// In un ordered it is O(1)


// Unordered maps implementation is done using Hash Table


// Keys are unique
// Values might be same

int main(){
    map<string,int> marks;
    marks["This_one"]=98;
    marks["That_one"]=5;
    marks["Nobody"]=66;
    cout<<marks["This_one"]<<endl;

    map<string,int>::iterator iter1;
    for (iter1=marks.begin() ; iter1!=marks.end() ; iter1++){
        cout<<(*iter1).first<<" ";   // Accessing keys
        cout<<(*iter1).second<<" ";  // Accessing values
    }
    cout<<endl;

    cout<<"The size is :"<<marks.size()<<endl;

    marks.insert({"Someone",77});

    for (iter1=marks.begin() ; iter1!=marks.end() ; iter1++){
        cout<<(*iter1).first<<" ";   // Accessing keys
        cout<<(*iter1).second<<" ";  // Accessing values
    }
    cout<<endl;

    cout<<"Finding 'Someone' : "<<marks.count("Someone")<<endl;



    cout<<"Before erasing 'Someone'"<<endl;
    for (iter1=marks.begin() ; iter1!=marks.end() ; iter1++){
        cout<<(*iter1).first<<" ";   // Accessing keys
        cout<<(*iter1).second<<" ";  // Accessing values
    }
    cout<<endl;

    marks.erase("Someone");

    cout<<"After erasing 'Someone'"<<endl;
    for (iter1=marks.begin() ; iter1!=marks.end() ; iter1++){
        cout<<(*iter1).first<<" ";   // Accessing keys
        cout<<(*iter1).second<<" ";  // Accessing values
    }
    cout<<endl;

    auto it = marks.find("That_one");
    cout<<(*it).first<<endl;



    return 0;
}