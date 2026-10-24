import java.util.Scanner;

class program125
{
  public static void main(String A[])
  {
   Scanner scanner = new Scanner(System.in);

   Digit digit = new Digit();

   digit.displayDigit(9752);

   System.out.println("Enter number :");
   int iValue = scanner.nextInt();

   digit.displayDigit(iValue);
  }
}

class Digit
{
  public void displayDigit(int iNo)
  
    {
      
        
      int iDigit = 0;

      if(iNo < 0)
      {
        iNo = -iNo;
      }

      while(iNo !=0)
      {
      iDigit = iNo%10;
      iNo = iNo / 10;
      System.out.println(iDigit);
      }

      
    }
}
