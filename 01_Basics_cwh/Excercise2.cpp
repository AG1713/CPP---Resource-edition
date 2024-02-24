# include<iostream>
# include<string>
using namespace std;

bool permutation_in_string(string s1, string key){
    string sample = key;
    int count = 0;
    int size  = key.size();

    for (int i=0 ; i<s1.size() ; i++)  {
        if (sample.find(s1[i]) != string::npos) /*if found*/{
            count++;
            sample.erase(sample.find(s1[i]));
            if(count == size){
                return true;
            }
        }
        else{
            count = 0;
        }
    }
    return false;
}


int main(){

    string s = "uygrefwiu";
    string k = "ffwe";

    cout<<"Answer : "<<permutation_in_string(s, k)<<endl;
    
    return 0;
}