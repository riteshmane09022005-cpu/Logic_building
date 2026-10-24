
import java.util.Scanner;

class program126
{
    public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);
        int iRet = 0;

        Digit digit = new Digit();

        digit.displayDigit(9752);

        System.out.println("Enter number :");
        int iValue = scanner.nextInt();

        digit.displayDigit(iValue);

        iRet = digit.CountDigit(iValue);

        System.out.println("Number of digit: " + iRet);

        scanner.close();
    }
}

class Digit
{
    public void displayDigit(int iNo)
    {
        int iDigit = 0;
        int icount = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;
            icount++;
        }

        System.out.println("icount is: " + icount);
    }

    public int CountDigit(int iNo)
    {
        int icount = 0;

        if(iNo < 0)
        {
            iNo = -iNo;
        }

        if(iNo == 0)
        {
            return 1;
        }

        while(iNo != 0)
        {
            iNo = iNo / 10;
            icount++;
        }

        return icount;
    }
}
