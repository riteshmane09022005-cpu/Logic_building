import java.util.Scanner;

class program59
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

        //input updater

        if(iNo < 0)
        {
            iNo = -iNo;
        }
                                        
        for(icnt=1; icnt <= iNo; icnt++)
        {
            System.out.println("jay ganesh.....");
        }
    }

}