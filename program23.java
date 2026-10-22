import java.util.Scanner;

class Program23
{
    public static void main(String[] args) 
    {
      Scanner scanner= null;
      String sName = null;
      
      scanner = new Scanner(System.in);                            //refrance use object create

      System.out.println("Enter your name");
      sName = scanner.nextLine();                                          

      System.out.println("Welcome"+sName);                          
    }

}