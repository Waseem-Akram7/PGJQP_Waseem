 import java.util.Scanner;
class areaofsquare
{
public static void main(String[] args)
{
int side1,side2,area;
System.out.println("Enter sides");
Scanner sc=new Scanner(System.in);
side1=sc.nextInt();
side2=sc.nextInt();
area=side1*side2;
System.out.println("The area of square is=" + area);
}
}