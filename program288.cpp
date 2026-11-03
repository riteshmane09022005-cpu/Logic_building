
#include<iostream>
#include<cstdlib>

using namespace std;

template <class T>
class Arithmetic
{
public:
    T No1;
    T No2;

    Arithmetic(T A, T B);
    T Addition();
    T Subtraction();
        
};
template <class T>//
Arithmetic <T> :: Arithmetic(T A, T B)            //T
{
    No1 = A;
    No2 = B;
}
template <class T> //
T Arithmetic <T> :: Addition()           //T
{
    T Ans = 0;

    Ans = No1 + No2;

    return Ans;
}
template <class T>//
T Arithmetic <T> :: Subtraction()     //T
{
    T Ans = 0;

    Ans = No1 - No2;

    return Ans;
}
int main()
{
    Arithmetic<int> *aobj = new Arithmetic<int>(11, 10);

    cout << "Addition is : " << aobj->Addition() << endl;

    cout << "Subtraction is : " << aobj->Subtraction() << endl;

    delete aobj;

    return EXIT_SUCCESS;
}
