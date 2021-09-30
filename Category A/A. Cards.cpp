/*
 * This file is a test case you may use and change to check your code
 * Ahmad elnassag
 */
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int n, a[101];
    float av, sum;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    av = (sum / n) * 2;
    for (int i = 1; i <= n; i++) {
        if (a[i] != 0) {
            for (int j = 1; j <= n; j++) {
                if (a[i] + a[j] == av && i != j) {
                    cout << i << " " << j << endl;
                    a[i] = 0;
                    a[j] = 0;
                }
            }
        }
    }
    return 0;
}
