#include <iostream>
using namespace std;
void batang(int x) {
  if (x == 0) {
    printf("daun\n");
  } else {
    batang(x - 1);
    batang(x - 1);
  }
}
int main(){
	printf"%s", batang(3); 
}



