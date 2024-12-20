// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;




int main(){
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    
    cout << "You will get " ;

    srand(time(0)) ;
    int g = rand()%7 ;
    if(g==0) cout << "A" ;
    else if(g==1) cout << "B+" ;
    else if(g==2) cout << "B" ;
    else if(g==3) cout << "C+" ;
    else if(g==4) cout << "C" ;
    else if(g==5) cout << "D+" ;
    else if(g==6) cout << "D" ;
    else cout << "F" ;

    cout <<  " in this 261102." ;

    return 0 ;
}