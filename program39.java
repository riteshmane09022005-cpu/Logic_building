//Approach3
import java.util.Scanner;

class Program39
{
    public static void main(String[] args) 
    {
        Scanner scanner = null;
        
        Arithmetic arithmetic = null;//refrance

        int ivalue1=0, ivalue2=0, iReasult=0;
        scanner = new Scanner(System.in);

        System.out.println("Enter first number :");
        ivalue1 = scanner.nextInt();

        System.out.println("Enter seacond number :");
        ivalue2 = scanner.nextInt();

        arithmetic = new Arithmetic();

        iReasult = arithmetic.Addition(ivalue1,ivalue2);       

        System.out.println("Addition is :"+iReasult);                           
    }

}
class Arithmetic
{
     public int Addition(int iNo1,int iNo2)
    {
      int iAns = 0;
      iAns = iNo1 + iNo2;
      return iAns;
    }

}