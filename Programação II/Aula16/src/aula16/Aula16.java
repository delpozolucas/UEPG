/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package aula16;

/**
 *
 * @author lucasdelpozo
 */
public class Aula16 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Caneta c1 = new Caneta();
        c1.cor = "Azul";
        c1.ponta = 0.5f;
        c1.destampar();
        
        c1.status();
        c1.rabiscar();
        
        Caneta c2 = new Caneta();
        c2.modelo = "Bic";
        c2.cor = "Vermelha";
        c2.carga = 50;
        c2.tampar();
        
        c2.status();
        c2.rabiscar();
        
    }
    
}
