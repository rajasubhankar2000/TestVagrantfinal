import java.io.*;
import java.util.*;

class emp{
     String name;
     int age;
     static String ceo;

    static{
        ceo="nitin";
    }
    
    public void show(){
       System.out.println(name+" "+age+" "+ceo);
    }
}

public class StaticKey {
    public static void main(String[] args){
   
        emp obj=new emp();
        // emp.ceo="nitin";
        obj.show();
        emp obj1=new emp();
        // emp.ceo="nitin";
        // emp.ceo="raja";
        obj1.show();
        
        
    }
}
