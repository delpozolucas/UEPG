package sistemavendamedicamentos;
public abstract class Medicamento {
    protected String nome;
    protected float valor;

    public Medicamento(String nome, float valor) {
        this.nome = nome;
        this.valor = valor;
    }
    
    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public float getValor() {
        return valor;
    }

    public void setValor(float valor) {
        this.valor = valor;
    }
    
    public float getValorDesc(){
        return valor;
    }
}
