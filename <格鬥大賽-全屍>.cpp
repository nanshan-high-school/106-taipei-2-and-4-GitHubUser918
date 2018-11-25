#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int atk[n], def[n], num[n],win, score, lage = 0, x = 0;
  for(int i=0;i<n;i++){
    cin >> atk[i] >> def[i];
    num[i] = 0;
    
  }for(int i=0;i<n;i++){
    int a, d;
    win = 0;
    score = 0;
    x = 0;
    for(a = 0;a<n;a++){
      if(atk[i] > atk[a+1] && a+1<n){
        win++;
      }if(def[i] > def[d+1] && d+1<n){
          score++;
      }if(win < score){
        x += win;
      }else {
        x += score;
      }win = 0;
      score = 0;
      if(atk[i] > atk[a-1] && a-1>0){
          win++;
      }if(def[i] > def[d-1] && d-1>0){
          score++;
      }
    }if(win < score){
        x += win;
      }else {
        x += score;
      }if(x > lage && i+1<n){
      lage = x;
      }
  }cout<<lage;
}
