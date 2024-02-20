#include <bits/stdc++.h>
using namespace std;
#define s(); ios_base::sync_with_stdio(0);cin.tie(0);
#define inf 1e6
#define ll long long;
#define ig cin.ignore(256, '\n');

int main(){
    s();
    int a, b ,c, cnt = 0;
    cin >> a >> b >> c;
        if(a < 100){
            while(cnt != 1){
                if(b < c){
                    a += pow(b,2) + pow(c,2);
                    
                    if(a % 10 != 5){
                        if(a % 2 == 0){
                            c--;
                        }
                        else{
                            b++;
                        }

                        if(a / (b * c) <= 20)
                            cnt = 1;
                    }
                    else{
                        cnt = 1;
                    }
                }
            }
        }
        else if(a < b){
            if(b < c){
                a = a + 3;
                b = a + c;
                c = b + a;
            }
            else if(a < c){
                a = 2 * a;
                b = a + b;
                c = b + c;
            }
            else{
                a = c+ a;
                b = 2 * b;
                c = b - a;
            }
        }
        else{
            if(c > a){
                a = 3 * b;
                b = c + a;
                c = a + b;
            }
            else if(b > c){
                a = b + c;
                b = 7 * a;
                c = b - a;
            }
            else{
                a = c - 5;
                b = a - b;
                c = 3 * b;
            }
        }
    cout << a << " " << b << " " << c;
    return 0;
}