#include<iostream>
using namespace std;
int main(){
    int a[100000];
    memset(a, 0, sizeof(a));
    int n;
    cin>>n;
    a[0]=1;
    int high_num = 0;
    for (int i = 2; i<=n; i++) {
        int carry = 0;
        for (int j = 0; j<=high_num; j++) {
            int mul = i* a[j] + carry;
            a[j] = mul %10;
            carry = mul / 10;
        }
        while (carry) {
            a[++high_num] = carry %10;
            carry /= 10;
            
        }
    }
    for (int i = high_num; i>=0; i--) {
        printf("%d",a[i]);
    }
    return 0;
}
