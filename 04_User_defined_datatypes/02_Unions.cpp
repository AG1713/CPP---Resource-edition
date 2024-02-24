// Unions
# include<iostream>
using namespace std;

union money
{
    int price;
    char online;
    float donation;
};


int main(){
    // Unions are similar to structs, but with better memory management.
    union money person1;
    person1.price = 33; // now similar to struct, we set a value.
    cout<<person1.price<<endl;
    person1.online = 'o'; // Now contrary to struct, we can store only one type of value
    // here and the previous value gets overwritten.
    cout<<person1.price<<endl; // Thus we get a garbage value.
    cout<<person1.online<<endl;

    return 0;
}