import java.util.Scanner;
class PandR
{
public static void main(String[] args)
{
int length,width,peri,rec;
System.out.println("Enter length and width");
Scanner sc=new Scanner(System.in);
length=sc.nextInt();
width=sc.nextInt();
peri=2*length+2*width;
rec=length*width;
System.out.println("The perimeter is" + peri +"The rectangle is"  + rec);
}
}

