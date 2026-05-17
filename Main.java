import java.sql.*;
import java.util.Scanner;

public class Main {
    static final String URL = "jdbc:mysql://localhost:3306/escola";
    static final String USER = "root";
    static final String PASSWORD = "";

    public static void main(String[] args) {

        Connection conn = null;
        int opcao = 0;
        Scanner teclado = new Scanner(System.in);
        teclado.useLocale(java.util.Locale.US); // ← ADICIONE ISTO

        try {
            Class.forName("com.mysql.cj.jdbc.Driver");
            conn = DriverManager.getConnection(URL, USER, PASSWORD);
            conn.setAutoCommit(true);
            System.out.println("Conectado ao banco com sucesso!\n");

            do {
                System.out.println("===== MENU =====");
                System.out.println("1 - Inserir aluno");
                System.out.println("2 - Ver todos os alunos");
                System.out.println("3 - Excluir aluno");
                System.out.println("4 - Sair");
                System.out.println("Digite uma opção: ");
                opcao = teclado.nextInt();

                switch (opcao) {
                    case 1:
                        inserirAluno(teclado, conn);
                        break;
                    case 2:
                        verTodosAlunos(conn);
                        break;
                    case 3:
                        excluirAluno(teclado, conn);
                        break;
                    case 4:
                        System.out.println("Saindo...");
                        break;
                    default:
                        System.out.println("Opção inválida!\n");
                }
            } while (opcao != 4);

            conn.close();
        } catch (ClassNotFoundException e) {
            System.out.println("Driver não encontrado: " + e.getMessage());
        } catch (SQLException e) {
            System.out.println("Erro na conexão: " + e.getMessage());
        }

    }

    static void inserirAluno(Scanner teclado, Connection conn) {
        try {
            teclado.nextLine();

            System.out.print("Digite o nome do aluno: ");
            String nome = teclado.nextLine();

            System.out.print("Digite a idade: ");
            int idade = teclado.nextInt();

            System.out.print("Digite a nota: ");
            double nota = teclado.nextDouble();
            teclado.nextLine();

            System.out.println("Nome: " + nome + " | Idade: " + idade + " | Nota: " + nota); // ← Debug

            String sql = "INSERT INTO alunos(nome, idade, nota) VALUES(?, ?, ?)";
            PreparedStatement pstmt = conn.prepareStatement(sql);
            pstmt.setString(1, nome);
            pstmt.setInt(2, idade);
            pstmt.setDouble(3, nota);

            int linhas = pstmt.executeUpdate(); // ← Mudou aqui
            System.out.println("Linhas inseridas: " + linhas); // ← Debug

            System.out.println("Aluno inserido com sucesso!\n");
            pstmt.close();

        } catch (SQLException e) {
            System.out.println("Erro ao inserir: " + e.getMessage());
        }
    }

    static void verTodosAlunos(Connection conn) {
        try {
            String sql = "SELECT * FROM alunos";
            Statement stmt = conn.createStatement();
            ResultSet rs = stmt.executeQuery(sql);

            System.out.println("----- ALUNOS -----");
            boolean temAlunos = false;

            while (rs.next()) {
                temAlunos = true;
                int id = rs.getInt("id");
                String nome = rs.getString("nome");
                int idade = rs.getInt("idade");
                double nota = rs.getDouble("nota");

                System.out.println("ID: " + id + "| Nome: " + nome + " | Idade: " + idade + " | Nota: " + nota);
            }
            if (!temAlunos) {
                System.out.println("Nenhum aluno cadastrado!");
            }
            System.out.println();
            stmt.close();
        } catch (SQLException e) {
            System.out.println("Erro ao consultar: " + e.getMessage());
        }
    }

    static void excluirAluno(Scanner teclado, Connection conn) {
        try {
            verTodosAlunos(conn);

            System.out.print("Digite o ID do aluno a excluir: ");
            int id = teclado.nextInt();

            String sql = "DELETE FROM alunos WHERE id = ?";
            PreparedStatement pstmt = conn.prepareStatement(sql);
            pstmt.setInt(1, id);

            int linhas = pstmt.executeUpdate();

            if (linhas > 0) {
                System.out.println("Aluno excluído com sucesso!\n");
            } else {
                System.out.println("Aluno não encontrado!\n");
            }

            pstmt.close();

        } catch (SQLException e) {
            System.out.println("Erro ao excluir: " + e.getMessage());
        }
    }
}