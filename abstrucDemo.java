import java.io.*;
import java.util.*;
abstract class writer{
    public abstract void write();

}
class pen extends writer{
    public void write()
    {
        System.out.println("write something");
    }
}



public class abstrucDemo {
    public static void main(String[] args)
    {
    writer obj=new pen();
    obj.write();
    }
}
