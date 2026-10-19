package sistemavendamedicamentos;
public class Farmacia {
    private String nome;
    private float emcaixa;
    private float valorint;

    public Farmacia(String nome) {
        this.nome = nome;
        this.emcaixa = 0;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public float getEmcaixa() {
        return emcaixa;
    }

    public void setEmcaixa(float emcaixa) {
        this.emcaixa = emcaixa;
    }

    public float getValorint() {
        return valorint;
    }

    public void setValorint(float valorint) {
        this.valorint = valorint;
    }
    
    public void vendaMedicamentoMarca (MedicamentoMarca m, int q){
        float pag, tot;
        tot = m.getValor() * q;
        pag = m.getValorDesc() * q; 
        this.valorint = this.getValorint() + tot;
        this.emcaixa = this.getEmcaixa() + pag;
        System.out.println(m.getNome() + " (" + m.getMarca() + ") " + "-> " + m.getValor() 
                           + " * " + q + " - 10% desconto = " + pag);
    }
    
    public void vendaMedicamentoGenerico (MedicamentoGenerico m, int q){
        float pag, tot;
        tot = m.getValor() * q;
        pag = m.getValorDesc() * q;
        this.valorint = this.getValorint() + tot;
        this.emcaixa = this.getEmcaixa() + pag;
        System.out.println(m.getNome() +  " -> " + m.getValor() 
                           + " * " + q + " - 20% desconto = " + pag);
    }
        
    public void verVendas(){
        System.out.println("***************** VALOR DAS VENDAS *****************");
        System.out.println("VALOR TOTAL SEM DESCONTO: " + this.getValorint());
        System.out.println("VALOR TOTAL COM DESCONTO: " + this.getEmcaixa());
    }
}
