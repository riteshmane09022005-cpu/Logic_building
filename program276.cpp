
#include<iostream>
#include<cstdlib>

using namespace std;

class Arithmetic
{
    public:
        double No1;
        double No2;

        Arithmetic(double A, double B)
        {
            No1 = A;
            No2 = B;
        }

        double Addition()
        {
            double Ans = 0;

            Ans = No1 + No2;

            return Ans;
        }
};

int main()
{
    Arithmetic aobj1(10.5, 11.5);
    Arithmetic aobj2(20.5, 21.5);

    cout << aobj1.Addition() << "\n";
    cout << aobj2.Addition() << "\n";

    return EXIT_SUCCESS;
}
