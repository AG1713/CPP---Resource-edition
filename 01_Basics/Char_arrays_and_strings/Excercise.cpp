# include<iostream>
using namespace std;


int getlength(char arr[]){
    int count = 0;
    for (int i=0 ; arr[i]!= '\0' ; i++){
        count++;
    }
    return count;
}


int main(){
    // Get name of a string
    char name[20] = "guomwimepo";
    cout<<getlength(name)<<endl;


    char string1[20] = "iureefhnfe\0iurer";
    string string2 = "iureefhnfe\0iurer";

    cout<<string1<<endl;
    cout<<string2<<endl;




    return 0;
}