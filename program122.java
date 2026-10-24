
class program122
{
  public static void main(String A[])
  {
   Digit digit = new Digit();
   digit.displayDigit();
  }
}

class Digit
{
  public void displayDigit()
    {
      int iNo = 9752;
        
      int iDigit = 0;

      while(iNo !=0)
      {
      iDigit = iNo%10;
      iNo = iNo / 10;
      System.out.println(iDigit);
      }

      
    }
}
