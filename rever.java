import java.util.*;
class Reversestring
{
public static void main(String args[])
{
String original,reverse="";
Scanner in=new Scanner(System.in());
System.out.println("Reverse the string");
original=in.nextline();
int length=in.length();
for(int i=length-1;i>=0;i--)
reverse=reverse+original.charAt(i);
System.out.printf("Reverse of entered string is:"+reverse);
}
}
