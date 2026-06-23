package aula22;

public class Aula22 {
    public static void main(String[] args) {
        Pessoa[] p = new Pessoa[3];
        Livro[] l = new Livro[3];
        
        p[0] = new Pessoa("Lucas", "M", 19);
        p[1] = new Pessoa("Duda", "F", 20);
        
        l[0] = new Livro("Diario de uma Banana", "Bananilson", 270, p[0]);
        l[1] = new Livro("Off Campus", "Hughie Butcher", 294, p[1]);
        
        l[0].abrir();
        l[0].folhear(200);
        l[0].avancarPag();
        
        System.out.println(l[0].detalhes());
        System.out.println(l[1].detalhes());
    }
    
}
