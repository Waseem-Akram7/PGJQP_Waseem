import java.util.Scanner;
class Areaofcircle
{
public static void main(String[] args)
{
int r;
double pi=3.14,area;
System.out.println("Enter radius of circle");
Scanner sc=new Scanner(System.in);
r=sc.nextInt();
area=pi*r*r;
System.out.println("Area of circle is=" + area);
}
}