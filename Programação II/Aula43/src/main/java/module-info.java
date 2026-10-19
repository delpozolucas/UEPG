module com.lucas.aula43 {
    requires javafx.controls;
    requires javafx.fxml;

    opens com.lucas.aula43 to javafx.fxml;
    exports com.lucas.aula43;
}
