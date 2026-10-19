package com.lucas.aula43;

import javafx.fxml.FXML;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.control.TextFormatter;
import java.util.function.UnaryOperator;

public class PrimaryController {

    @FXML
    private TextField txtfldPeso;

    @FXML
    private TextField txtfldAltura;

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

        txtfldPeso.setTextFormatter(new TextFormatter<>(filtroNumerico));
        txtfldAltura.setTextFormatter(new TextFormatter<>(filtroNumerico));
    }

    @FXML
    private void calcularIMC() {
        double peso = Double.parseDouble(txtfldPeso.getText().replace(',', '.'));
        double altura = Double.parseDouble(txtfldAltura.getText().replace(',', '.'));

        double imc = peso / (altura * altura);

        lblResultado.setText(String.format("IMC: %.2f", imc));
    }
}
