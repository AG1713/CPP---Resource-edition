# include<iostream>
#include<cstring> // I HAVE INCLUDED THIS
using namespace std;

class Video{
    protected:
    string title;
    float rating;

    public:
    Video(string s, float r){
        title = s;
        rating = r;
    }
    virtual void display(){ // If this is not a virtual function, then below, if we run display function where we made a pointer array 
    // containing of object, the funcion would return 'display' of base class 'Video' and not the contructor of other classes.
        cout<<"Noting to see here"<<endl;
    }
};

class Visual: public Video{
    int videolength;
    public:
    Visual(string s, float r, int vl):Video(s, r){
        videolength = vl;
    }

    void display(){
        cout<<"Rating : "<<rating<<" out of 5 stars"<<endl;
        cout<<"The length of the video is "<<videolength<<" minutes"<<endl;
    }
};

class Description: public Video{
    int content;
    public:
    Description(string s, float r, int c):Video(s,r){
        content = c;
    }

    void display(){
        cout<<"Rating : "<<rating<<" out of 5 stars"<<endl;
        cout<<"The length of the discription is "<<content<<" words"<<endl;
    }
};


int main(){
    string title = new char[30]; // This is somehow a string, would work even without the part after '='
    float rating, vlen;
    int content;

    // For any random video
    title = "Rickroll for 1 hour";
    vlen = 60.01;
    rating = 3.9;
    content = 54;

    Visual Rickroll(title, rating, vlen);
    Rickroll.display();

    Description insert_video_name_here(title, rating, content);
    insert_video_name_here.display();

    Video* ptr_arr[2];
    ptr_arr[0] = &Rickroll;
    ptr_arr[1] = &insert_video_name_here;
    // If we don't use '&' here this will not work and say that there is no conversion defined  to convert 'Video' into 'Visual'.
    ptr_arr[0]->display();
    ptr_arr[1]->display();

    return 0;
}


// RULES FOR DEFINING A VIRTUAL FUNCTION
/*
1) They cannot be static.
2) They can be accessed by object functions.
3) Virtual functions can be a friend of another class.
4) A virtual function in a base class might not be used at all.
5) If a virtual function defined in a base in a base class, there is no need of redefining in the derived class. Now consider the above
   classes, if 'Visual' class didn't had an display function of its own then the virtual display functon will be operated.
*/