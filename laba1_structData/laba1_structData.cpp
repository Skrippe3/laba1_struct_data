#include <iostream>
#include<cmath>
using namespace std;

long long gcd(long long a, long long b, long long& x, long long& y) {
    if (a == 0) {
        x = 0; y = 1;
        return b;
    }
    long long x1, y1;
    int d = gcd(b % a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return d;
}


int main()
{
    setlocale(LC_ALL, "Russian");
    cout << "Перебейнос Константин Евгеньевич \t" << "090301-ПОВа-023" << endl;
    long long  a, b, c, d, x, y;
    cout << "Введите значение a"<<endl;
    cin >> a;

    cout << "Введите значение b " << endl;
    cin >> b;

    cout << "Введите значение c " << endl;
    cin >> c;

    d = gcd(a, b, x, y);
    if (c % d == 0) {
        long long t = c / d * x;
        long long t2 = b / d;
        if (t == 0)cout << 0 << " " << c / d * y;
        if (t > 0)cout << t + t2 * (-(t / t2)) << " " << c / d * y - a / d * (-(t / t2));
        if (t < 0)cout << t + t2 * (-((t - t2 + 1) / t2)) << " " << c / d * y - a / d * ((-((t - t2 + 1) / t2)));
    }
    else cout << "Impossible";
    return 0;
}
    

