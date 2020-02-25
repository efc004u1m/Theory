#include <iostream>
using namespace std;

int max(int *p, int n) {
    int a = 0, b = n - 1;
    while (a != b) {
        if (p[a] <= p[b]) {
            a = a + 1;
        } else {
            b = b - 1;
        }
    }
    return p[a];
}

class Parent {
public:
    void PPrint() {
        cout << "Parent print ";
    }
};
class Child: public Parent {
public:
    void CPrint() {
        cout << "Child print ";
    }
};

int tob(int b, int *arr) {
    int i;
    for (i = 0; b > 0; ++i) {
        if (b % 2) {
            arr[i] = 1;
        } else {
            arr[i] = 0;
        }
        b = b/2;
    }
    // 0101
    return (i);
}
int pp(int a, int b) {
    int arr[20];
    int i, tot = 1, ex, len;
    ex = a;
    len = tob(b, arr);
    for (i = 0; i < len; ++i) {
        if (arr[i] == 1) {
            tot = tot*ex;
        }
        ex = ex*ex;
    }
    return (tot);
}

int main () {

    double x = 1, y = 0.5;
    int answer;
    x *= 5;
    answer = -x + (-y);
    cout << answer << endl;

    int arr[4] = {2, 4, 6, 8};
    cout << max(arr, 4) << endl;
    
    arr[0] = 27;
    arr[3] = arr[2];
    cout << arr[0] << " and " << arr[3] << endl;

    Child c;
    c.PPrint();
    cout << endl;

    int a[4][5] = {{1, 2, 3, 4, 5},
                    {6, 7, 8, 9, 10},
                    {11, 12, 13, 14, 15},
                    {16, 17, 18, 19, 20}};
    cout << *(*(a + **a + 2) + 3) << endl;

    cout << pp(2, 10) << endl;
    return 0;
}