# include<iostream>
# include<vector>
using namespace std;

// Multidimensional arrays are stored linearly in memory, they are just mapped differently
// For eg, an array1[3][2] consists of 3 groups of 2 places arranged linearly
// The formula to get position of any element in this linearly stored array is-
// c*i+j, where
// c is total no. of columns
// i is the row number and j is column no. of the element to be found




// Functions
// In C++, we need to give no. of columns in argument list for an array
// Because, when we pass an array into a function, it decays into a pointer
// Due to this, there is no way for compiler to know how to deal with it
// To know more in detail, here the link - https://stackoverflow.com/questions/12813494/why-do-we-need-to-specify-the-column-size-when-passing-a-2d-array-as-a-parameter




bool if_present(int arr[][2], int rows, int columns, int key)
/* Now here, two things to note
    1. We specified the number of columns, the reason for that is given above
    2. If we need dimensions of the array, we need to specify it in the arguments
        because in the function, the array is decayed into a pointer and there
        is no way to find the dimentions of the array
*/
{
    for (int i=0 ; i<3 ; i++){
        for (int j=0 ; j<2 ; j++){
            if(arr[i][j] == key){
                return true;
            }
        }
    }
    return false;
}

vector<int> spiral_print_ans(int arr[][3], int m, int n){
    // Spiral Print
    // Suppose an array
    // 1 2 3
    // 4 5 6
    // 7 8 9
    // So the numbers would be printed in the order 1,2,3,6,9,8,7,4,5
    vector<int> ans;
    int row = m;
    int col = n;

    int count = 0;
    int total = row*col;

    // Indexes
    int start_row = 0;
    int start_col = 0;
    int end_row = row-1;
    int end_col = col-1;


    while(count < total){
        // print starting row
        for (int index = start_col ; index<=end_col && count < total ; index++){
            ans.push_back(arr[start_row][index]);
            count++;
        }
        start_row++;

        // print ending column
        for (int index =start_row ; index<=end_row && count < total ; index++){
            ans.push_back(arr[index][end_col]);
            count++;
        }
        end_col--;

        // print ending row
        for (int index = end_col ; index>=start_col && count < total ; index--){
            ans.push_back(arr[end_row][index]);
            count++;
        }
        end_row--;

        // print ending column
        for (int index = end_row ; index>=start_row && count < total ; index--){
            ans.push_back(arr[index][end_col]);
            count++;
        }
        end_col--;

    }
    return ans;



}


void rotate_90(vector<vector<int>>& matrix, int rows, int columns){
    int temp;

    // Taking a transpose
    for (int i=0 ; i<rows ; i++){
        for (int j=i ; j<columns ; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // reversing the arrangement of columns
    for (int i=0 ; i<columns/2 ; i++){
        for (int j=0 ; j<rows ; j++){
            // i --> current column
            // j --> urrent row
            swap(matrix[j][i], matrix[j][columns-i-1]);

        }
    }

}



bool Binary_search_in_2D_vector(vector<vector<int>> vec , int rows , int columns, int key){
    int start = 0;
    int end = (rows*columns -1);

    int mid = start + (end-start)/2;

    while(start<=end){
        int element = vec[mid/columns][mid%columns];

        if (element == key){
            return 1;
        }
        else if(element > key){
            end = mid-1;
        }
        else {
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return 0;
}


bool search_matrix(vector<vector<int>>& matrix, int key){
    /*
    The elements in this matrix are sorted row wise and column wise
    but unlike previous example, the last element in each row is
    not lesser than the first element of next row
    */

    int row = matrix.size();
    int col = matrix[0].size();

    int rowIndex = 0;
    int colIndex = col-1;


    while(rowIndex < row && colIndex < col){
        int element = matrix[rowIndex][colIndex];

        if(element == key){
            return true;
        }
        if(element < key){
            rowIndex++;
        }
        else{
            colIndex--;
        }
    }
    return false;

}




int main(){
    // Creating an 2D array
    int arr1[3][2];

    // Taking input
    // for (int i=0 ; i<3 ; i++){+
    //     for (int j=0 ; j<2 ; j++){
    //         cout<<"Element - "<<i<<","<<j<<" = ";
    //         cin>>arr1[i][j];
    //     }
    // }

    // OR

    int arr2[][3] = {{2,3}, {6,5}, {13,6}};
    // OR
    int arr3[3][2] = {1,2,4,6,2,4};

    cout<<"\n\n\n";

    // Output
    // Row major
    // for (int i=0 ; i<3 ; i++){
    //     for (int j=0 ; j<2 ; j++){
    //         cout<<"Element - "<<i<<","<<j<<" = "<<arr1[i][j]<<endl;
    //     }
    // }

    cout<<"\n\n\n";


    // Column major
    // for (int i=0 ; i<2 ; i++){
    //     for (int j=0 ; j<3 ; j++){
    //         cout<<"Element - "<<i<<","<<j<<" = "<<arr1[j][i]<<endl;
    //     }
    // }


    // Searching is done similarly

    // WAVE order
    // Consider 2D array as a matrix with elements '*'
    // * *>*
    // v ^ v
    // * * *
    // v ^ v
    // *>* *
    //


    


    int arr[][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    vector<int> vec1 = spiral_print_ans(arr, 3, 3);

    for (int i=0; i<vec1.size() ; i++){
        cout<<vec1[i]<<" ";
    }
    cout<<endl;


    vector<vector<int>> vec2 = {{1,2,3},{4,5,6},{7,8,9}};
    int rows = vec2.size();
    int columns = vec2[0].size();
    rotate_90(vec2, rows, columns);

    
    // Displaying
    for (int i=0 ; i<rows ; i++){
        for (int j=0 ; j<columns ; j++){
            cout<<vec2[i][j]<<" ";
        }
        cout<<endl;
    }

    vec2 = {{1,2,3},{4,5,6},{7,8,9}};

    cout<<Binary_search_in_2D_vector(vec2, 3, 3, 8)<<endl;


    cout<<endl;
    cout<<endl;
    vector<vector<int>> v1 = {{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24}};

    cout<<search_matrix(v1, 18);

    
    
    return 0;
}