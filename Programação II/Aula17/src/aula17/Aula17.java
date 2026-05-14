/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package aula17;

/**
 *
 * @author lucasdelpozo
 */
public class Aula17 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
       /* Caneta c1 = new Caneta();
        c1.setModelo("BIC");
        c1.setPonta(0.5f);
        
        //c1.status();
        System.out.println("Tenho uma caneta " + c1.getModelo() + " de ponta " 
                            + c1.getPonta());
       */
       
       Caneta c1 = new Caneta("BIC", "Rosa", 0.1f);
       c1.status();
    }
    
}
