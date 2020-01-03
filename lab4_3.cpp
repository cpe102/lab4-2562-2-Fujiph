#include<iostream>
#include<cmath>

using namespace std;

//Write function findDistance() here
int findDivisor( int x ) {
    int i = 2;
    while (i > 1) {
        if ( x%i == 0 ) {
            return i;
        }
        else {
            i++;
        }
    }
}

int main(){
    int sum ;
    cout << " enter number ";
    cin >> sum ;
    cout << " Expected Output = " << findDivisor( sum ) ;

}
