# include<iostream>
using namespace std;

void reversearray(int arr[], int size, int index=0){
    int s=index;
    int e = size-1;
    int temp;

    while(s<=e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

void sorted_merge(int arr1[], int size1, int arr2[], int size2, int arr3[]){
    int index1=0;
    int index2=0;
    int index3=0;
    for(int i=0 ; i<size1+size2 ; i++){
        // Do check here if end of any array is reached first
        if(index1 == size1){
            arr3[index3++] = arr2[index2++];
        }

        else if(index2 == size2){
            arr3[index3++] = arr1[index1++];
        }

        else{
            if(arr1[index1]>arr2[index2]){
                arr3[index3++] = arr2[index2++];
            }
            else{
                arr3[index3++] = arr1[index1++];
            }
        }
    }
}


void move_zeros(int arr[], int size){
    int i = 0;
    int j = 0;

    for (int j=0 ; j<size ; j++){
        if(arr[j] != 0){
            swap(arr[j], arr[i]);
            i++;
        }
    }
}



int main(){
    int arr1[] = {4,2,3,1,7,9,0};

    for(int i:arr1){
        cout<<i<<" ";
    }
    cout<<endl;
    
    reversearray(arr1, sizeof(arr1)/ sizeof(arr1[0]));
    cout<<"After reversing"<<endl;
    for(int i:arr1){
        cout<<i<<" ";
    }
    cout<<endl;


    reversearray(arr1, sizeof(arr1)/ sizeof(arr1[0]), 2);
    cout<<"After reversing"<<endl;
    for(int i:arr1){
        cout<<i<<" ";
    }


    cout<<endl;
    cout<<endl;
    // -------------------------------------------------------------------------------------

    int a1[] = {2,4,6,8};
    int a2[] = {1,3,6,7,9};
    int a3[9];

    sorted_merge(a1, sizeof(a1)/sizeof(a1[0]), a2, sizeof(a2)/sizeof(a2[0]), a3);
    
    for(int i = 0 ; i!=9 ; i++){
        cout<<a3[i]<<" ";
    }
    cout<<endl;


    // ---------------------------------------------------------------------

    int arr4[] = {1,3,2,0,0,3};
    move_zeros(arr4, sizeof(arr4)/sizeof(arr4[0]));
    for(int i: arr4){
        cout<<i<<" ";
    }
    cout<<endl;


    return 0;
}