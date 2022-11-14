#include <iostream>
#include <cstdio>
using namespace std;
void naturaltime(int);
int time(int ,int);
 

int main () {
    int s,v;
    cin >> s >>v;
    naturaltime(time(s,v));
    return 0;
}

int time(int s,int v){
    int t;
    if (s%v == 0) t = s/v;
    else t = s/v+1;
    int delta = 470 -  t; //470是00:00到07:50經過的時間。
    if (delta < 0){
        int roll = delta / -1440 ; 
        delta += 24 * 60*(1+roll)   ; //
    }
    return delta;
}

void naturaltime(int dt){
    printf("%02d:%02d\n", dt/60,dt%60);
}