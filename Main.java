import java.sql.*;
import java.util.Scanner;

public class Main{
    static final String URL = "jdbc:mysql://localhost:3306/teste";
    static final String USER = "root";
    static final String PASSWORD = "";

    public static void main(String[] args){
        Connection conn = null;
        Scanner teclado = new Scanner(System.in);
        teclado.useLocale(java.util.Locale.US);

        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            conn = DriverManager.getConnection(URL, USER, PASSWORD);
            System.out.println("Conectado!\n");

            int opcao = 0;
            do{
                System.out.println("1 - Cadastrar");
                System.out.println("2 - Ver todos");
                System.out.println("3 - Sair");
                System.out.println("Opção: ");
                opcao = teclado.nextInt();

                if(opcao == 1){
                    cadastrar(teclado, conn);
                }else if(opcao == 2){
                    verTodos(conn);
                }
            }while(opcao != 3);
            conn.close();
        }catch(Exception e){
            System.out.println("Erro: " + e.getMessage());
        }
        
    }

    static void cadastrar(Scanner teclado, Connection conn) throws SQLException{
        teclado.nextLine();

        System.out.println("Nome do carro: ");
        String nome = teclado.nextLine();

        System.out.println("Marca: ");
        String marca = teclado.nextLine();

        String sql = "INSERT INTO carros(nome, marca) VALUES (?, ?)";
        PreparedStatement pstmt = conn.prepareStatement(sql);
        pstmt.setString(1, nome);
        pstmt.setString(2, marca);
        pstmt.executeUpdate();
        pstmt.close();

        System.out.println("Cadastrado\n");

    }

    static void verTodos(Connection conn) throws SQLException{
        String sql = "SELECT * FROM carros";
        Statement stmt = conn.createStatement();
        ResultSet rs = stmt.executeQuery(sql);

        System.out.println("\n--- CARROS ---");
        while(rs.next()){
            int id = rs.getInt("id");
            String nome = rs.getString("nome");
            String marca = rs.getString("marca");
            System.out.println("ID: " + id + " | Nome: " + nome + " | Marca: " + marca);
        }
        System.out.println();
        stmt.close();
    }
}