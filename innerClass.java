import java.io.*;
import java.util.*;
class outer
{
    public void print()
    {
     System.out.println("outer class");
    }
    class inner{
        public void print()
        {
            System.out.println("inner class");
        }
    }
}


public class innerClass {
    public static void main()
    {
        outer obj=new outer();
        outer.inner obj1=obj.new inner();
        // obj.inner obj1=new
    // outer obj=new inner();
    // inner obj=new inner();
    } 
    
}
