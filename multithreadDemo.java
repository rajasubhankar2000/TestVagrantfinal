import java.io.*;
import java.util.*;
class a extends Thread{
  public void run()
  {
      for(int i=1;i<5;i++)
      {
       System.out.println("hi");
       try{Thread.sleep(500);}catch(Exception e){};
      }
  }
}
class b extends Thread{
    public void run()
    {
        for(int i=0;i<5;i++)
        {
         System.out.println("hello");
         try{Thread.sleep(500);}catch(Exception e){};
        }
    }
  }


public class multithreadDemo {
    public static void main(String[]args)
    {
     a obj=new a();
     b obj1=new b();

     obj.start();
     obj1.start();
    //  obj.run();
    //  obj1.run();
    }
}
