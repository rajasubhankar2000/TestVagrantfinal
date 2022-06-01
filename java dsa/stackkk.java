import java.io.*;
import java.util.*;


public class stackkk {
    public static void main(String[] args)
    {
      Stack<Integer> s1=new Stack<>();
      s1.push(2);
      s1.push(4);
      s1.push(10);
      s1.push(5);
      s1.sort(null);
      System.out.print(s1);
 

      Iterator it=s1.iterator();
      while(it.hasNext())
      {
          Object s2=it.next();
          System.out.print(s2+" ");
      }
      System.out.println(s1.peek());
    }
}
