#include <iostream>

using std::cout;
using std::endl;

// y(0) = 1
//x entre 0 y 3
// dy dx = z
// dz dx = f(x,y,z)
// dy dx = 0 entonces z = 0


float f_z(float x, float z, float y);

float f_z(float x, float z,float y){
  return -y;
}

float f_y(float x, float y,float z);

float f_y(float x, float y,float z){
  return z;
}


int main(){

  float y = 1;
  float x = 0;
  float h = 0.1;
  float z = 0;
  int N = 10/h;
  float x1 = x + h;
  float x2 = x + (h/2.0);


  for(int i=0; i<N;i++){
    float k1 = f_z(x,z,y);
    float k2 =f_z(x2,z+((h/2)*k1),y);
    float k3 =f_z(x2,z+((h/2)*k2),y);
    float k4 =f_z(x1,z+(h*k3),y);
    float promedio = k1+(2*k2)+(2*k3)+k4;
 
    float k11 = f_y(x,y,z);
    float k21 =f_y(x2,y+((h/2)*k1),z);
    float k31 =f_y(x2,y+((h/2)*k2),z);
    float k41 =f_y(x1,y+(h*k3),z);
    float promedio1 = k11+(2*k21)+(2*k31)+k41;

    z = z + ((h*(1.0/6.0))*promedio);
    y = y + ((h*(1.0/6.0))*promedio1); 
    x = x + h;
    cout << x << " " << y <<  " " <<  z << endl; 
  }
  
  return 0;
}
