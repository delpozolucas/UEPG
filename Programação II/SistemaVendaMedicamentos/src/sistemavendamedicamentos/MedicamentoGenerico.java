package sistemavendamedicamentos;
public class MedicamentoGenerico extends Medicamento{
    
    public MedicamentoGenerico(String nome, float valor) {
        super(nome, valor);
    }    
    
    @Override
    public float getValorDesc(){
        return valor * 0.8f;
    }
}
