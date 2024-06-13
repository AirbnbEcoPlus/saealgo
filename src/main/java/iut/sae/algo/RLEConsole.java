package iut.sae.algo;

import java.util.Scanner;

public class RLEConsole{

    public static void main(String[] args){
        String in="";
        
        if(args.length>0){
            in=args[0];
        }
        else{
            Scanner scanner = new Scanner(System.in);

            System.out.println("Chaine à transformer : ");
            in = scanner.next();

            scanner.close();
        }

        System.out.println("Entrée : "+in);
        try {
            System.out.println("Sortie : "+ Algo.unRLE(in));
        } catch (AlgoException e) {
            // TODO Auto-generated catch block
            e.printStackTrace();
        }
    }
}