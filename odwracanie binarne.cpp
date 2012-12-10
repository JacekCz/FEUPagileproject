#include <iostream>

using namespace std;
//wyœwietlanie binarne
void wysbin (int x){
     cout<< "binarnie ta liczba wyglada tak: \t";
     for( int i = 0 ; i < 32 ; i++){
     cout << (x >> ( 31 - i ) & 1 ) ;
           };
     cout<<"\n";
     };

// odwracanie
void odwracanie( int x, int &y){
     y=0;
     for(int i=0;i<32;i++) 
             y= (y << 1) | (x >> i & 1);
     };

int main(){
    
    int x;
    int y;
    cout<<"wprowadz liczbe \t";
    cin >> x;
    wysbin (x);
    odwracanie (x,y);
    cout<<"przy odwrotnym ukladzie bitow twoja liczba wyglada nastepujaco \t";
    cout << "\n" << y << "\n";
    wysbin(y);
    system ("pause");
}
