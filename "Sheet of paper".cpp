#include <iostream> 
using namespace std;

int main() {
  int array[5];
  array[3] = 20;
  array[1] = array[3];
  array[4] = array[3];
  array[0] = 15;

  cout<<"Please enter an integer for index 2:  ";
  cin>>array[2];

  int total = 0;

  for(int i = 0; i < 5; i++){
    total = total + array[i];
    }
  
  cout<<total;
return 0;
}
