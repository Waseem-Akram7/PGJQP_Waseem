import java.util.Scanner;
class Average
{
public static void main(String[] args)
{
int n1,n2,n3,n4,n5,avg,sum;
System.out.println("Enter the numbers");
Scanner sc=new Scanner(System.in);
n1=sc.nextInt();
n2=sc.nextInt();
n3=sc.nextInt();
n4=sc.nextInt();
n5=sc.nextInt();
sum=n1+n2+n3+n4+n5;
avg=sum/5;
System.out.println("the average of 5 numbers is=" + avg);
}
}