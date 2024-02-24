# include<iostream>
using namespace std;




int main(){
    char ch[20];
    // At the end, we automatically have NULL charactre \0

    cout<<"Enter your name :";
    cin>>ch; // Not individually
    // cin stops execution when you enter space, tab or enter
    // to avoid this, you can do cin.getline()

    cout<<"Your name is "<<ch<<endl;

    // REFER CPPREFERRENCE FOR STRING FUNCTIONS, MANY FUNCTIONS ARE BASED ON IT



    return 0;
}