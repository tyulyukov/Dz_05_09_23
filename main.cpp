#include <iostream>
#include <cmath>
using namespace std;

int main_2_4();
int main_2_5();
int main_2_6();
int main_2_7();
int main_2_8();
int main_2_9();

int main() {
    main_2_4();
    main_2_5();
    main_2_6();
    main_2_7();
    main_2_8();
    main_2_9();
    return 0;
}

int main_2_4() {
    double y = 420, d = 69;
    double R = (pow(sin(y), 2) + 0.3 * d) / (exp(y) + log(d));
    cout << R;
    return 0;
}

int main_2_5() {
    double y = 69, x = 420;
    double F = sqrt(pow(2 + y, 2) + pow(sin(y + 5), 1 / 7)) / (log(x + 1) - pow(y, 3));
    cout << F;
    return 0;
}

int main_2_6() {
    double x = 11;
    double V9 = pow(cos(pow(x, 2) + atan(sqrt(abs(x - 1.8)))), 5) / pow(sin(pow(pow(x, 2) + 1.5, 2)), 5) + pow(pow(x, 3.5), 1 / 3);
    cout << V9;
    return 0;
}


//=====================


int main_2_7() {
    double x;
    cin >> x;
    double y = (log(x) + 2 * x) / (pow(x, 2) + 1) + (x + 1) / (2 * pow(x, 2) + 1);
    cout << y;
    return 0;
}

int main_2_8() {
    const double t = 4.1;
    double p = 3;
    double k = sqrt(p + pow(t, 2));
    double x = p + k;
    double y = pow(atan(pow(x, 2)), 3);
    cout << y;
    return 0;
}

int main_2_9() {
    double a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    if (a == 0)
    {
        cout << "Dividing by 0 is impossible" << endl;
    }
    else
    {
        double x = 6 * a - a * b / 2;
        cout << x;
    }

    return 0;
}
