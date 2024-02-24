# include<iostream>
using namespace std;

int main(){

    // When in a loop, there might be some iterations after if, if they occur, u break out of the loop; or a 
    // situation where u need to skip a iteration, for this we use 'break;' and 'continue;'in C++.

    // ***Break***
    for (int i = 0; i < 10; i++)
    {
        if (i==3){
            break;
        }
        cout<<i<<endl;
    }
    cout<<"Spacer between break exampe and continue example"<<endl;
    

    // ***Continue***
    for (int i = 0; i < 10; i++)
    {
        if (i==3){
            continue;
        }
        cout<<i<<endl;
    }

    return 0;
}