import java.io.*;
import java.util.*;


class a{
    public void print()
    {
      System.out.println("parent class");
    }
}
class b extends a{
    public void prints()
    {
      System.out.println("child class");
    }
}


public class inheritance {
    public static void main(String args[])
    {
        b obj=new b();
        obj.print();


    }
    
}
