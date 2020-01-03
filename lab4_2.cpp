#include<iostream>
#include<cmath>

using namespace std;

//Write function findDistance() here
float findDistance(float u , float a , float t) {
  return u*t + 0.5 * a * pow(t,2);
}

int main(){
  float U , A , T;
  //Calling findDistance() using test cases
  cout << " enter u ";
  cin >> U;
  cout << " enter a ";
  cin >> A;
  cout << " enter t ";
  cin >> T;
  cout << " s is " << findDistance(U,A,T);

  return 0;
}