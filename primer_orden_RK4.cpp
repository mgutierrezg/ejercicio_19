#include <iostream>

using std::cout;
using std::endl;

// y(0) = 1
//x entre 0 y 3
// dy dx = -y 
int main(){

  float y = 1;
  float x = 0;
  float h = 0.01;
  int N = 3/h;


  for(int i=0; i<N;i++){
    y = y + (h*-y);
    x = x + h;
    cout << x << " " << y <<endl; 
  }
  
  return 0;
}
