class a{
     private int x=1;
     private String s="hi";
     public void print()
     {
       System.out.println(x+""+s);
     }
     public void print(int x)
     {
         this.x=x;
         System.out.println(x);
     }

}
class b extends a{
   private int x=2;
   private String s="hello";
   @Override
   public void print()
   {
       System.out.println(x+" "+s);
   }
}


public class methodOverriding {
    public static void main(String args[])
    {
     b obj=new b();
     obj.print();
     obj.print(5);
    }
}
