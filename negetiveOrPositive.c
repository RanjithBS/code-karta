import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int digit;
		Scanner no=new Scanner(System.in);
	           System.out.println("");
	           digit=no.nextInt();
		if(digit<0)
		{
		 System.out.println("Negetive");
		}
		 else if(digit>0)
		 {
		 System.out.println("Positive");
		 }
		  else
		 {
		 System.out.println("neither positive nor negative");
		 }
	}
}
