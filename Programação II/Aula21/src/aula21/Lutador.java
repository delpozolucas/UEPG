package aula21;
public class Lutador {
    private String nome;
    private String nacionalidade;
    private int idade;
    private float altura;
    private float peso;
    private String categoria;
    private int vitorias;
    private int empates;
    private int derrotas;
    
    public void apresentar(){
        System.out.println("-----------------------------------------");
        System.out.println("CHEGOU A HORA!!! Apresentamos o Lutador " + this.getNome());
        System.out.println("Diretamente de " + getNacionalidade());
        System.out.println("Com " + this.getIdade() + " anos e " + this.getAltura() + "m");
        System.out.println("Pesando " + this.getPeso() + "kg");
        System.out.println("Com um cartel de " + this.getVitorias() + ":" + this.getDerrotas() + ":" + this.getEmpates());
    }
    
    public void status(){
        System.out.println(this.getNome() + " é um peso " + this.getCategoria());
        System.out.println("Com um cartel de " + this.getVitorias() + ":" + this.getDerrotas() + ":" + this.getEmpates());
    }
    
    public void ganharLuta(){
        this.setVitorias(getVitorias() + 1);
    }
    
    public void empatarLuta(){
        this.setEmpates(getEmpates() + 1);
    }
    
    public void perderLuta(){
        this.setDerrotas(getDerrotas() + 1);
    }
    
    
    public Lutador(String no, String na, int id, float al,
                   float pe, int vi, int em, int de) {
        this.nome = no;
        this.nacionalidade = na;
        this.idade = id;
        this.altura = al;
        this.setPeso(pe);
        this.vitorias = vi;
        this.empates = em;
        this.derrotas = de;
    }
    

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public String getNacionalidade() {
        return nacionalidade;
    }

    public void setNacionalidade(String nacionalidade) {
        this.nacionalidade = nacionalidade;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public float getAltura() {
        return altura;
    }

    public void setAltura(float altura) {
        this.altura = altura;
    }

    public float getPeso() {
        return peso;
    }

    public void setPeso(float peso) {
        this.peso = peso;
        this.setCategoria();
    }

    public String getCategoria() {
        return categoria;
    }

    private void setCategoria() {
        if(this.peso < 52.2){
            this.categoria = "Inválido";
        } else if (this.peso <= 70.3){
            this.categoria = "Leve";
        } else if (this.peso <= 83.9){
            this.categoria = "Médio";
        } else if (this.peso <= 120.2){
            this.categoria = "Pesado";
        } else {
            this.categoria = "Inválido";
        }
    }

    public int getVitorias() {
        return vitorias;
    }

    public void setVitorias(int vitorias) {
        this.vitorias = vitorias;
    }

    public int getEmpates() {
        return empates;
    }

    public void setEmpates(int empates) {
        this.empates = empates;
    }

    public int getDerrotas() {
        return derrotas;
    }

    public void setDerrotas(int derrotas) {
        this.derrotas = derrotas;
    }
        
}
