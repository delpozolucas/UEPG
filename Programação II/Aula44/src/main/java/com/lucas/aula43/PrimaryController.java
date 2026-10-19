package com.lucas.aula43;

import javafx.fxml.FXML;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.control.TextFormatter;
import java.util.function.UnaryOperator;
import javafx.application.Platform;

public class PrimaryController {

    @FXML
    private TextField txtfldValor1;

    @FXML
    private TextField txtfldValor2;

    @FXML
    private Label lblResultado;
    
    @FXML
    public void initialize() {

        UnaryOperator<TextFormatter.Change> filtroNumerico = change -> {
            String texto = change.getControlNewText();

            if (texto.matches("\\d*([\\.,]\\d*)?")) {
                return change;
            }

                return null;
            };

        txtfldValor1.setTextFormatter(new TextFormatter<>(filtroNumerico));
        txtfldValor2.setTextFormatter(new TextFormatter<>(filtroNumerico));
    }

    @FXML
    private void somar() {
        double v1 = Double.parseDouble(txtfldValor1.getText().replace(',', '.'));
        double v2 = Double.parseDouble(txtfldValor2.getText().replace(',', '.'));

        double result = v1 + v2;

        lblResultado.setText(String.format("Resultado: %.2f", result));
    }
    
    @FXML
    private void subtrair() {
        double v1 = Double.parseDouble(txtfldValor1.getText().replace(',', '.'));
        double v2 = Double.parseDouble(txtfldValor2.getText().replace(',', '.'));

        double result = v1 - v2;

        lblResultado.setText(String.format("Resultado: %.2f", result));
    }
    
    @FXML
    private void multiplicar() {
        double v1 = Double.parseDouble(txtfldValor1.getText().replace(',', '.'));
        double v2 = Double.parseDouble(txtfldValor2.getText().replace(',', '.'));

        double result = v1 * v2;

        lblResultado.setText(String.format("Resultado: %.2f", result));
    }
    
    @FXML
    private void dividir() {
        double v1 = Double.parseDouble(txtfldValor1.getText().replace(',', '.'));
        double v2 = Double.parseDouble(txtfldValor2.getText().replace(',', '.'));

        double result = v1 / v2;

        lblResultado.setText(String.format("Resultado: %.2f", result));
    }
    
    @FXML
    private void limpar(){
        txtfldValor1.setText("");
        txtfldValor2.setText("");
        lblResultado.setText("Resultado");
    }
    
    @FXML
    private void sair(){
        Platform.exit();
    }
}
