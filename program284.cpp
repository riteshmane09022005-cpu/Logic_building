
#include<iostream>
#include<cstdlib>

using namespace std;

template <class T>
class Arithmetic
{
    public:
        T No1;
        T No2;

        Arithmetic(T A, T B)
        {
            No1 = A;
            No2 = B;
        }

        T Addition()
        {
            T Ans = 0;

            Ans = No1 + No2;

            return Ans;
        }

        T Subtraction()
        {
            T Ans = 0;

            Ans = No1 - No2;

            return Ans;
        }
};

int main()
{
    Arithmetic<int> *aobj = new Arithmetic<int>(11, 10);

    cout << "Addition is : " << aobj->Addition() << endl;

    cout << "Subtraction is : " << aobj->Subtraction() << endl;

   

    return EXIT_SUCCESS;
}
