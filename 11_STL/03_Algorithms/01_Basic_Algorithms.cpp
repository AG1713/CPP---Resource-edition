# include<iostream>
# include<vector>
# include<algorithm>

using namespace std;


int main(){
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.push_back(5);
    v.push_back(7);

    cout<<"Binary search :- "<<binary_search(v.begin(), v.end(), 2)<<endl;

    cout<<"Lower bound => "<<lower_bound(v.begin(), v.end(), 5)-v.begin()<<endl;
    cout<<"Upper bound => "<<upper_bound(v.begin(), v.end(), 5)-v.begin()<<endl;

    int a = 3;
    int b = 5;

    cout<<"max =>"<<max(a,b)<<endl;
    cout<<"min =>"<<min(a,b)<<endl;
    swap(a,b);
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;


    string s1 = "abcd";
    reverse(s1.begin(), s1.end());
    cout<<"String => "<<s1<<endl;


    rotate(v.begin(), v.begin()+1,v.end());
    cout<<"After rotating"<<endl;

    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    sort(v.begin(), v.end()); // This sort works on intro sort algorithm
    // It is a mixture of heap sort, quick sort and insertion sort

    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    


    return 0;
}