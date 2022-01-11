import java.io.*;

public class ntow 
{
  private static final String[] units = {""," one"," two"," three"," four"," five"," six"," seven"," eight"," nine"}; 
  private static final String[] doubles = {" ten"," eleven"," twelve"," thirteen"," fourteen"," fifteen"," sixteen"," seventeen"," eighteen"," nineteen"};
  private static final String[] tens = {"",""," twenty"," thirty"," forty"," fifty"," sixty"," seventy"," eighty"," ninety"};
  private static final String[] hundreds = {""," thousand"," million"};
  private static String toword(int number) 
  {    
    String word = "";    
    int index = 0;
    do 
    {
      int num = number % 1000;
      if (num != 0)
      {
          String str = c3orless(num);
          word = str + hundreds[index] + word;
      }
      index++;
      number = number/1000;
    } while (number > 0);
    return word;
  }
  private static String c3orless(int number) 
  {
    String word = "";    
    int num = number % 100;
    if(num < 10)
    {
      word = word + units[num];
    }
    else if(num < 20)
    {
      word = word + doubles[num%10];
    }
    else
    {
      word = tens[num/10] + units[num%10];
    }
    word = (number/100 > 0)? units[number/100] + " hundred" + word : word;
    return word;
  }
  public static void main(String[] args) throws IOException
  {
    BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
    int num=Integer.parseInt(br.readLine());
    if(num>999999999)
    {
      System.out.println("Enter lesser than 99999999");
      System.exit(0);
    }
    else
      System.out.println(toword(num)); 
  }
}