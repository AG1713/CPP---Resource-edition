# include<iostream>
using namespace std;

int main(){
    // Variables(pointers) are not automatically assigned by a valid address. If they are not initialized explicitly,
    // then they might be assigned with a garbage value.
    // Pointers that are not initialized with a valid address may cause substantial damage.
    // Thus we initialize them to 'NULL'.
    /*
    Using 'NULL' pointer will cause an error in almost all systems. Literal meaning of NULL pointer is, 
    a pointer pointing to nothing. NULL pointer points the base address of the segment.
    */
    
    int *ptr = NULL;
    // cout<<*ptr<<endl;
    int a = 8;
    ptr = &a;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    
    // Below seems the same
    int *ptr1 = nullptr;
    // cout<<*ptr1<<endl;
    int a1 = 8;
    ptr1 = &a1;
    cout<<ptr1<<endl;
    cout<<*ptr1<<endl;
    return 0;
}