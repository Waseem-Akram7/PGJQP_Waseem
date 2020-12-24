import java.util.Scanner;
class Addition
{
public static void main(String[] args)
{
int num1,num2,sum;
System.out.println("Enter two numbers");
Scanner sc=new Scanner(System.in);
num1=sc.nextInt();
num2=sc.nextInt();
sum=num1+num2;
System.out.println("The addition of two numbers is=" + sum);
}
}

