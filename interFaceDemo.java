import java.io.*;
import java.util.*;



interface abc{
     void writer();
}
abstract class b{
    public void learn()
    {
        System.out.println("learn");
    }

}
class c extends b implements abc{
    @Override
    public void writer() {
        {
            System.out.println("writer interface");
        }
    }
    public void get()
    {
        System.out.print("get");
    }
}


public class interFaceDemo {
    public static void main(String args[])
    {
    c obj=new c();
    obj.learn();
    obj.get();
    abc obj1=new c();
    obj1.writer();

    }
}
