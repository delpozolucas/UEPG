package sistemavendamedicamentos;
public class MedicamentoMarca extends Medicamento{
    private String marca;

    public MedicamentoMarca(String nome, float valor, String marca) {
        super(nome, valor);
        this.marca = marca;
    }

    public String getMarca() {
        return marca;
    }

    public void setMarca(String marca) {
        this.marca = marca;
    }
    
    @Override
    public float getValorDesc(){
        return valor * 0.9f;
    }
    
}
