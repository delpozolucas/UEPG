/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package aula18;

/**
 *
 * @author lucasdelpozo
 */
public class Aula18 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        ContaBanco c1 = new ContaBanco(12, "CC", "Lucas Sassi");
        
        c1.abrirConta("CP");
        c1.depositar(100000);
        c1.sacar(2000);
        c1.estadoAtual();
        
        ContaBanco c2 = new ContaBanco (13, "CP", "Nicolas de Antoni");
        c2.abrirConta("CP");
        c2.depositar(80);
        c2.estadoAtual();
    }
    
}
