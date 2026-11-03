//generic class
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
        T substraction()                    
        {
            T Ans = 0;

            Ans = No1 - No2;

            return Ans;
        }
};

int main()
{
    
    Arithmetic aobj1(10.5, 11.6);  //Error
    

    cout << aobj1.Addition() << "\n";
    cout << aobj1.substraction() << "\n";
    
    

    
    return EXIT_SUCCESS;
}
