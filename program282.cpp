
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
        double substraction()
        {
            double Ans = 0;

            Ans = No1 - No2;

            return Ans;
        }
};

int main()
{
   Arithmetic *aobj = new Addition(11,10);   //*pointer
   
   cout<<aobj->Addition()<<endl;  //->

    return EXIT_SUCCESS;
}

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
    Arithmetic *aobj = new Arithmetic(11, 10);

    cout << "Addition is : " << aobj->Addition() << endl;

    cout << "Subtraction is : " << aobj->Subtraction() << endl;

    delete aobj;

    return EXIT_SUCCESS;
}
