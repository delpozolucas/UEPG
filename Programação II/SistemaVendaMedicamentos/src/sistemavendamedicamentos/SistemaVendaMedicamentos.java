package sistemavendamedicamentos;
public class SistemaVendaMedicamentos {
    public static void main(String[] args) {
        Farmacia f = new Farmacia("Bompreço");
        
        MedicamentoMarca m[] = new MedicamentoMarca[2];
        m[0] = new MedicamentoMarca("Aspirina", 20, "Bayer");
        m[1] = new MedicamentoMarca("Allegra", 35, "Sanofi");
        
        MedicamentoGenerico g[] = new MedicamentoGenerico[3];
        g[0] = new MedicamentoGenerico("Dipirona", 8);
        g[1] = new MedicamentoGenerico("Paracetamol", 10);
        g[2] = new MedicamentoGenerico("Ibuprofeno", 15);
        
        f.vendaMedicamentoMarca(m[0], 2);
        f.vendaMedicamentoMarca(m[1], 1);
        
        f.vendaMedicamentoGenerico(g[0], 1);
        f.vendaMedicamentoGenerico(g[1], 4);
        f.vendaMedicamentoGenerico(g[2], 2);
        
        f.verVendas();
    }
    
}
