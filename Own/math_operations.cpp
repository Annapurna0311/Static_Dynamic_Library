#include"math_operations.h"
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while(a > 0 && b > 0) {
        if(a > b) {
            a = a % b;
        }
        else {
            b = b % a; 
        }
    }
    if(a == 0) {
        return b;
    }
    return a;
}
int lcm(int a, int b){
    return a * b / gcd(a , b);
}
bool checkprime(int a){
    int cnt = 0;
    for(int i = 1;i <= sqrt(a); i++){
        if(a % i == 0){
            cnt++;
            if(a / i != i){
                cnt++;
            }
        }
    }
    if(cnt==2) return true;
    else return false;
}
    
                                
                            
