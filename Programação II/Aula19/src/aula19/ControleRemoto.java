package aula19;
public class ControleRemoto implements Controlador {
    private int volume;
    private boolean ligado;
    private boolean tocando;

    public ControleRemoto() {
        this.volume = 50;
        this.ligado = false;
        this.tocando = false;
    }

    public int getVolume() {
        return volume;
    }

    private void setVolume(int volume) {
        this.volume = volume;
    }

    public boolean getLigado() {
        return ligado;
    }

    private void setLigado(boolean ligado) {
        this.ligado = ligado;
    }

    public boolean getTocando() {
        return tocando;
    }

    private void setTocando(boolean tocando) {
        this.tocando = tocando;
    }

    @Override
    public void ligar() {
        this.setLigado(true);
    }

    @Override
    public void desligar() {
        this.setLigado(false);
    }

    @Override
    public void abrirMenu() {
        System.out.println("--------- MENU --------");
        System.out.println("Esta Ligado? " + this.getLigado());
        System.out.println("Esta Tocando? " + this.getTocando());
        System.out.print("Volume: " + this.getVolume());
        for(int i = 0; i<= this.getVolume(); i+=10){
            System.out.print("|");
        }
        System.out.println("");
    }

    @Override
    public void fecharMenu() {
        System.out.println("Fechando Menu");
    }

    @Override
    public void maisVolume() {
        if(this.getLigado() == true){
            this.setVolume(this.getVolume() + 5);
        }  else {
            System.out.println("Não consegui realizar a ação.");
        }
    }

    @Override
    public void menosVolume() {
        if(this.getLigado() == true){
            this.setVolume(this.getVolume() - 5);
        }  else {
            System.out.println("Não consegui realizar a ação.");
        }
    }

    @Override
    public void ligarMudo() {
        if(this.getLigado() == true && this.getVolume() > 0){
            this.setVolume(0);
        }  else {
            System.out.println("Não consegui realizar a ação.");
        }
    }

    @Override
    public void desligarMudo() {
        if(this.getLigado() == true && this.getVolume() == 0){
            this.setVolume(50);
        } else {
            System.out.println("Não consegui realizar a ação.");
        }
    }

    @Override
    public void play() {
        if(this.getLigado() == true && this.getTocando() == false){
            this.setTocando(true);
        }  else {
            System.out.println("Não consegui realizar a ação.");
        }
    }

    @Override
    public void pause() {
        if(this.getLigado() == true && this.getTocando() == true){
            this.setTocando(false);
        }  else {
            System.out.println("Não consegui realizar a ação.");
        }
    }
    
}
