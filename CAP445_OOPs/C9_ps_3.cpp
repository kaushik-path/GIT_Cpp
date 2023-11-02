#include<iostream>
using namespace std;

class MusicPlayer{
    public:
    virtual void PlaySong(){
        cout<<"Playing Music"<<endl;
    }
};
class SofiSong:public MusicPlayer{
    public:
    void PlaySong(){
        cout<<"Playing Sofi Song"<<endl;    
    }
};
class DhhSong:public MusicPlayer{
    public:
    void PlaySong(){
        cout<<"Playing DHH Song"<<endl;
    }
};
class JazzSong:public MusicPlayer{
    public:
    void PlaySong(){
        cout<<"Playing Jazz Song"<<endl;
    }
};

int main(){
    // JazzSong Js;
    // DhhSong Ds;
    // SofiSong Ss;
    // Js.PlaySong();
    // Ds.PlaySong();
    // Ss.PlaySong();
    MusicPlayer *mp;
    JazzSong J1;
    J1.PlaySong();
    mp=&J1;
    mp->PlaySong();
    DhhSong D1;
    mp=&D1;
    mp->PlaySong();
    return 0;
}
