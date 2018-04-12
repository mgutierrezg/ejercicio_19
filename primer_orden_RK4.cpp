#include <iostream>

using std::cout;
using std::endl;

// y(0) = 1
//x entre 0 y 3
// dy dx = -y 

float f(float x, float y);

float f(float x, float y){
  return -y;
}

int main(){

  float y = 1.0;
  float x = 0.0;
  float h = 0.1;
  int N = 3/h;
  float x1 = x + h;
  float x2 = x + (h/2.0);
  

  for(int i=0; i<N;i++){
    float k1 = f(x,y);
    float k2 =f(x2,y+((h/2)*k1));
    float k3 =f(x2,y+((h/2)*k2));
    float k4 =f(x1,y+(h*k3));
    float promedio = k1+(2*k2)+(2*k3)+k4;
    y = y + ((h*(1.0/6.0))*promedio);
    x = x + h;
    cout << x << " " << y <<endl; 
  }
  
  return 0;
}
