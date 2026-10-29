#include <iostream>
#include<string>
using namespace std;

class media{
public:
    virtual void play() { 
        cout << "Playing Media" << endl;
     }
};
class song :public media{
public:
    void play() override{
        cout<<"Playing Music Track!";
    }
};
int main(){
    song s1;
    s1.play();
}