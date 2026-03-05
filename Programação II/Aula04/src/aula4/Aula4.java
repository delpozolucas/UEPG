/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula4;

import java.awt.Dimension;
import java.awt.Toolkit;
import java.util.Locale;
import java.util.Date;

/**
 *
 * @author profi
 */
public class Aula4 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        
        System.out.println("Olá Mundo Java!!!");
        
        
        Date relogio = new Date();
        System.out.println("A hora do Sistema é:");
        System.out.println(relogio.toString());
        
        Toolkit tk = Toolkit.getDefaultToolkit();
        Dimension d = tk.getScreenSize();
        System.out.println("A resolução de seu monitor é: " +d.width + "x" +d.height);
        
        Locale idioma = Locale.getDefault();
        System.out.println("O idioma do seu sitema está configurado em: ");
        System.out.println(idioma.getDisplayLanguage());
        
    }
    
}
