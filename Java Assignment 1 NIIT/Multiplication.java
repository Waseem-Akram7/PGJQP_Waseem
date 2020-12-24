import java.util.Scanner;
class Multiplication
{
public static void main(String[] args)
{
int num1,num2,num3,mul;
System.out.println("Enter three numbers");
Scanner sc=new Scanner(System.in);
num1=sc.nextInt();
num2=sc.nextInt();
num3=sc.nextInt();
mul=num1*num2*num3;
System.out.println("The multiplication of three numbers is=" + mul);
}
}
