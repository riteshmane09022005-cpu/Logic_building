import java.util.Scanner;

class program67
{
        public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);
        int ivalue = 0;

        Iteration iteration=new Iteration();                            

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

        icnt = 1;

       do
        {
             System.out.println("---------------");
             System.out.println(icnt +" jay ganesh...");
             //printf("%d jay ganesh...\n",icnt);
             System.out.println("---------------");
            
        }while(icnt <= iNo);
    }
         
    }

}