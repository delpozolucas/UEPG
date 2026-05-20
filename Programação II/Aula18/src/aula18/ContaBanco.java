/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package aula18;


public class ContaBanco {
    private int numconta;
    private String tipo;
    private String dono;
    private float saldo;
    private boolean status;

    public ContaBanco(int numconta, String tipo, String dono) {
        this.numconta = numconta;
        this.tipo = tipo;
        this.dono = dono;
        this.saldo = 0;
        this.status = false;
    }

    public int getNumconta() {
        return this.numconta;
    }

    public void setNumconta(int numconta) {
        this.numconta = numconta;
    }

    public String getTipo() {
        return this.tipo;
    }

    public void setTipo(String tipo) {
        this.tipo = tipo;
    }

    public String getDono() {
        return this.dono;
    }

    public void setDono(String dono) {
        this.dono = dono;
    }

    public double getSaldo() {
        return this.saldo;
    }

    public void setSaldo(float saldo) {
        this.saldo = saldo;
    }

    public boolean isStatus() {
        return this.status;
    }

    public void setStatus(boolean status) {
        this.status = status;
    }
    
    public void abrirConta(String t){
        if("CC".equals(t)){
            setSaldo(50);
            setStatus(true);
        } else if ("CP".equals(t)){
            setSaldo(150);
            setStatus(true);
        } 
    }
    
    public void fecharConta(){
        if (this.saldo == 0){
            setStatus(false);
        } else {
            System.out.println("Essa conta não está com saldo zerado.");
        }
    }
    
    public void depositar(float v){
        if(status == true){
            this.saldo += v;
        }
    }
    
    public void sacar(float v){
        if(status == true){
            if(this.saldo >= v){
                this.saldo -= v;
            }else{
                System.out.println("Você não tem esse saldo disponível para saque.");
            }
        }
    }
    
    public void pagarMensalidade(){
        if(this.status == true){
            if(tipo.equals("CC")){
                if(this.saldo >= 12){
                    this.saldo -= 12;
                }else{
                    System.out.println("Você não tem saldo disponível para pagar a mensalidade.");
                }
            } 
            if(this.tipo.equals("CP")){
                if(this.saldo >= 20){
                    this.saldo -= 20;
                }else{
                    System.out.println("Você não tem saldo disponível para pagar a mensalidade.");
                }
            }
        }
    }
    
    public void estadoAtual(){
        System.out.println("Status da Conta");
        System.out.println("Número da conta: " + getNumconta());
        System.out.println("Tipo da Conta: " + getTipo());
        System.out.println("Dono da Conta: " + getDono());
        System.out.println("Saldo disponível da Conta: " + getSaldo());
        System.out.println("Estado da Conta: " + isStatus());
    }
    
}
