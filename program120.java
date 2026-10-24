
class program120
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
      int iNo = 175902;

      System.out.println("Number is :" + iNo);

      System.out.println(iNo % 10);
      iNo = iNo / 10;
      System.out.println("Number is :" + iNo);

      System.out.println(iNo % 10);
      iNo = iNo / 10;
      System.out.println("Number is :" + iNo);

      System.out.println(iNo % 10);
      iNo = iNo / 10;
      System.out.println("Number is :" + iNo);

      System.out.println(iNo % 10);
      iNo = iNo / 10;
      System.out.println("Number is :" + iNo);

      System.out.println(iNo % 10);
      iNo = iNo / 10;
      System.out.println("Number is :" + iNo);

      System.out.println(iNo % 10);
      iNo = iNo / 10;
      System.out.println("Number is :" + iNo);
    }
}
