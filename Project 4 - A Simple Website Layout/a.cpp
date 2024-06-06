import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    public static void main(String[] args) throws java.lang.Exception
    {
        // your code goes here
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt();

        for (int i = 0; i < tc; i++) {
            String str = sc.next();
            int totalCells = 1;

            int horizontalReach = 0;
            if (str.charAt(0) == '1') {
                horizontalReach += 10; // for left direction
            }
            if (str.charAt(1) == '1') {
                horizontalReach += 10; // for right direction
            }

            int verticalReach = 0;

            if (str.charAt(2) == '1') {
                verticalReach += 10; // for up direction
            }
            if (str.charAt(3) == '1') {
                verticalReach += 10; // for down direction
            }
            
            if(verticalReach >0 ){
                totalCells += verticalReach;
            }
            if(horizontalReach >0){
                totalCells+=horizontalReach;
            }
            
            if(verticalReach >0  && horizontalReach > 0){
                totalCells += horizontalReach*verticalReach;
            }
            
            System.out.println(totalCells);
        }
    }
}