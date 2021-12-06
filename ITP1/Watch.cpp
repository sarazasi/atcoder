/* 整数を時間に変換 */

#include <iostream>
using namespace std;
int main(void){
  int n,h,m,s;
  cin >> n;

  h = n/3600;
  m = (n%3600)/60;
  s = (n%3600)%60;

  cout << h << "時間" << m << "分" << s << "秒" << endl;
}