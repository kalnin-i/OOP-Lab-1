#include <iostream>
#include <cmath>

using namespace std;

class FunctionCalculator
{
private:
    double x, y, z, a, b;

public:
    FunctionCalculator(double x, double y, double z) : x(x), y(y), z(z) {}

    double calculateB()
    {
        b = x * ((y + atan(pow(abs(pow(x, 2) + z), 0.1))) / (2 * z + x + pow(sin(pow(y, 3)), 2)) + exp((-x + z) / (z + 1)));
        return b;
    }

    double calculateA()
    {
        a = pow((1 + y), 2) * (pow(abs(x + y), 0.3) / pow(b, 2) + z) / (1 + exp(-(x - z)) + pow(abs(y), 0.43));

        return a;
    }
};

int main()
{
    double x = 0.48 * 10;
    double y = 0.47 * 10;
    double z = -1.32 * 10;

    FunctionCalculator calculator(x, y, z);

    double b = calculator.calculateB();
    double a = calculator.calculateA();

    cout << "First a = " << a << endl;
    cout << "First b = " << b << endl;
    cout << " " << endl;

    for (float i = -1; i <= 1; i += 0.2)
    {
        float x = i;

        FunctionCalculator AnotherFunctionCalculator(x, y, z);

        double b = AnotherFunctionCalculator.calculateB();
        double a = AnotherFunctionCalculator.calculateA();

        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
        cout << " " << endl;
    }
    return 0;
}