#include<iostream>
#include<cmath>
using namespace std ;


float Operation( float x , float Y , float e = 2.71828) {
    Y = 3 * pow(x,3) + 2 * e + pow(2,2*x+1) + pow((pow(x,2) + 1),0.5);
    return Y;
}

int main () {
    float y , X;
    cout << "enter x = ";
    cin >> X;
    cout << "result y = " << Operation(X,y) ;
}
