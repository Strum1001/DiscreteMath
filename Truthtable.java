import java.util.Scanner;
        
public class TruthTable {

    //Shayna Strum
    public static void main (String[] args){
        int x=0, y = 0;
        boolean p = true,r = true;
        System.out.println("p    q");
        for(; x<2; x++){
            
            boolean q =true;
            for(y =0;y<2; y++ ){
                System.out.print(p+" "+q +" = " + (q||p)); // truth table for q or p
            q = false;
               System.out.println();

            }
            p =false;
        }
        System.out.println("r    p    q");
        for(x=0; x<2; x++){
           p=true;

            for(int z =0; z<2; z++){  
                 boolean q =true;
                for(y =0;y<2; y++ ){
                    System.out.print(r+ " "+p+" "+q +" = " + (q&&p||r)); truth table for q and p or r
                    q = false;
                    System.out.println();

            }
            p =false;
        }
        r=false;
    }
    
}
    
}
