// To identify whether a character entered is vowel or a consonant.
# include<iostream>
using namespace std;



bool permutation_in_string(string s1, string key){
    int count = 0;
    int size  = key.size();

    for (int i=0 ; i<s1.size() ; i++){
        for (int j=0 ; j<key.size() ; j++){
            if(s1[i]==key[j]){
                count++;
            }
            else{
                count = 0;
            }
        }
        if(count == size){
            return true;
        }
    }
    return false;


}



int main(){
    char c1;
    cout<<"Enter the character"<<endl;
    cin>>c1;
    cout<<c1<<endl;

    if (c1 == 'a' || c1 == 'e' || c1 == 'i' || c1 == 'o' || c1 == 'u'){ // note the use of ' '.
        cout<<"It is a vowel.";
    }

    else{
        cout<<"It is a consonant"<<endl;
    }

// Make a program to check whether a year is a leap year or not.
    int year;
    cout<<"Enter the year for which you want to check."<<endl;
    cin>>year;
    if ((year%4 == 0)&&(year&100 != 0)){
       cout<<"The year "<<year<<" u=is a leap year";
    }
    // To be continued.



    string s = "uygrefwiu";
    string k = "wfe";

    cout<<permutation_in_string(s, k)<<endl;


    return 0;
}