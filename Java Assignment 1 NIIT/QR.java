import java.util.Scanner;
class QR
{
public static void main(String[] args)
{
int a,b,quo,rem;
System.out.println("Enter a numbers");
Scanner sc=new Scanner(System.in);
a=sc.nextInt();
b=sc.nextInt();
quo=a/b;
rem=a%b;
System.out.println("Quotient=" + quo);
System.out.println("Reminder=" + rem);
}
}