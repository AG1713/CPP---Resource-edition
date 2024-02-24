# include<iostream>
# include<list> // Mandatory for working of list
using namespace std;


// Implementation is done using doubly linked list


template <class T>
void display(list<T> &l1){
    list<int> :: iterator iter1; // Idk why iterator isn't of another type or why does it not work on other type of list
    for (iter1=l1.begin() ; iter1!=l1.end() ; iter1++){
        cout<<*iter1<<" ";
    }
    cout<<endl;
}

int main(){
    // In an array, when data is stored, it is linearly stored in a memory.
    /*
    So like consider an intiger array. If the first element is at a given address, say 'a', the next element would be at 'a+4',
    and the next to it will be at address 'a+8' and so on (Integer has a size of 4). The disadvantage of this is if wwe need to
    delete or add any element in between, we need to shft the entire elements to their right, meaning the address would remain
    the same but the values in the address had to +4 (in case of int) for every element.

    This disadvantage is covered by lists
    every data tyoe hsa its own advantages and disadvantages. Like array are the most structured and provide high accessing speed,
    vector have great functionalities and deletion or insertion speed in a list is great.
    */

    list<int> list1; // Basic declaration of a list of length 0
    list<int> list2(3); // Empty list of length 7.
    // Creation is same like vector, we can do the same things to copy a list

    list1.push_back(2);
    list1.push_back(5);
    list1.push_back(2);
    list1.push_back(1);
    list1.push_back(6);
    list1.push_back(8);
    list1.push_back(4);

    // Making an iterator
    // list<int> :: iterator iter;
    // iter = list1.begin();
    // cout<<*iter<<endl; // To get the value stored at the idex 'iter'
    // iter++;
    // cout<<*iter<<endl;

    // Lets make a function to just display the list elements.
    display(list1);



   // list2
    list<int> :: iterator it = list2.begin();
    *it = 7;
    *it++;
    *it = 3;
    *it++;
    *it = 9;
    display(list2);


    // Deleting an element from list
    list2.pop_back(); // Removes the last element
    display(list2);
    list2.pop_front(); // Removes the first element
    display(list2);

    cout<<endl;
    display(list1);
    list1.remove(2); // Removes all element which are matched with the parenthesis' content. Also, its LIST1
    cout<<"remove(2) : ";
    display(list1);
    cout<<endl;

    list1.sort(); // Sorting a list
    display(list1);

    // Merging two lists
    list1.merge(list2);
    // After merging
    display(list1);

    // Reversing the list
    list1.reverse();
    display(list1);

    cout<<"Before erase : "<<list1.size()<<endl;
    list1.erase(list1.begin(), list1.end());
    cout<<"After erase : "<<list1.size()<<endl;

    for (int i: list1){ // Idk how this works
        cout<<i<<" ";
    }
    cout<<endl;



    return 0;
}