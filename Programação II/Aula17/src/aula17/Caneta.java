/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package aula17;

/**
 *
 * @author lucasdelpozo
 */
public class Caneta {
    public String modelo;
    private float ponta;
    private boolean tampada;
    private String cor;
    
    public Caneta(String m, String c, float p){
        this.setModelo(m);
        this.setCor(c);
        this.setPonta(p);
        
        this.tampar();
    }
    
    public String getModelo(){
        return this.modelo;
    }
    public void setModelo(String m){
        this.modelo = m;
    }
    public float getPonta(){
        return this.ponta;
    }
    public void setPonta(float p){
        this.ponta = p;
    }
    public String getCor(){
        return this.cor;
    }
    public void setCor(String c){
        this.cor = c;
    }
    
    
    public void tampar(){
        this.tampada = true;
    }
    public void destampar(){
        this.tampada = false;
    }
    
    public void status(){
        System.out.println("Sobre a Caneta:");
        System.out.println("Modelo: " + this.getModelo());
        System.out.println("Ponta: " + this.getPonta());
        System.out.println("Cor: " + this.cor);
        System.out.println("Tampada: " + this.tampada);
    }
    
    
}
