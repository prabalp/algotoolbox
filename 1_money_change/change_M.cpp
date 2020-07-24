#include <iostream>

int get_change(int m) {
  //write your code here
  int rem[2],que[2];
  que[0]=m/10;
  rem[0]=m%10;
  que[1]=rem[0]/5;
  rem[1]=rem[0]%5;


  return que[0]+que[1]+rem[1];
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
