import java.util.Scanner;

class program58
{
        public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);
        int ivalue = 0;

        Iteration iteration=new Iteration();                             //   filter and updater

        System.out.println("Enter the frequancy:");
        ivalue = scanner.nextInt();

       iteration.Display(ivalue); //parameter pass
    }
}
class Iteration
{
 public void Display(int iNo)
    {
        int icnt=0;

        //input filter

        if(iNo <= 0)
        {
         System.out.println("invalid input");

         return ;                                   //function chi return value void aahe
        }
        for(icnt=1; icnt <= iNo; icnt++)
        {
            System.out.println("jay ganesh.....");
        }
    }

}