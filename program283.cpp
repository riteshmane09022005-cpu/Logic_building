
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

        double Subtraction()
        {
            double Ans = 0;

            Ans = No1 - No2;

            return Ans;
        }
};

int main()
{
    Arithmetic *aobj = NULL;           //Error

    aobj = new Arithmetic(11,10); //Error

    cout<<aobj->Addition()<<endl;

    return EXIT_SUCCESS;
}
