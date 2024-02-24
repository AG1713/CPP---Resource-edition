# include<iostream>
using namespace std;
// Now a pure virtual functions is such a function that, you need to create another function with same name in every
// inherited class which will override the virtual function. If nt created, it will return an error.
// Any class that has a pure virtual function is an abstract class. Such type of class needs to be derived due to behaviour of
// pure virtual function. Also, WE CANNOT CREATE OBJECT OF AN ABSTRACT CLASS

class Video{
    protected:
    string title;
    float rating;

    public:
    Video(string s, float r){
        title = s;
        rating = r;
    }
    virtual void display()=0; // do nothing function a.k.a. pure virtual function.
    // This imposes us to override itself
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
    // Note that now if we remove this display function,  we would recieve an error.
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
    string title;
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