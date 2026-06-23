package aula24;
public class Aula24 {
    public static void main(String[] args) {
        //Pessoa p1 = new Pessoa();
        Visitante v1 = new Visitante();
        
        v1.setNome("Alisson");
        v1.setSexo("M");
        v1.setIdade(18);
        
        System.out.println(v1.toString());
        
        Aluno a1 = new Aluno();
        a1.setNome("Marquinhos");
        a1.setMat(2134);
        a1.setCurso("Eng Software");
        a1.setIdade(23);
        a1.setSexo("M");
        a1.pagarMensalidade();
        
        System.out.println(a1.toString());
        
        Bolsista b1 = new Bolsista();
        b1.setNome("Danilo");
        b1.setMat(2139);
        b1.setBolsa(12.5f);
        b1.setIdade(25);
        b1.setSexo("M");
        b1.pagarMensalidade();
        
        System.out.println(b1.toString());
        
                
    }
    
}
