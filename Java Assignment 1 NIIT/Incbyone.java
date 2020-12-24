import java.util.Scanner;
class Incbyone
{
public static void main(String[] args)
{
int num;
System.out.println("Enter a number");
Scanner sc=new Scanner(System.in);
num=sc.nextInt();
System.out.println("Entered number is incremented by one \t" + (num+1));
}
}