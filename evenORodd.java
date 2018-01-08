import java.io.*;
import java.util.Scanner;
class CheckEvenOdd
{
  public static void main(String args[])
  {
    int num;
    System.out.println("");
    Scanner input = new Scanner(System.in);
    num = input.nextInt();
      if ( num % 2 == 0 )
        System.out.println("even");
     else
        System.out.println("odd");
  }
}
