# include<iostream>
# include<functional> // Necessary
# include<algorithm> // For sorting array
using namespace std;
// Function objects (Functors)

int main(){
    int arr[] = {2,3,5,2,44,7,64};
    sort(arr, arr+5); // First 5 elements gets sorted in ascending order.
    sort(arr, arr+7, greater<int>()); // Adding a function object

    for (int i=0 ; i<7 ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}