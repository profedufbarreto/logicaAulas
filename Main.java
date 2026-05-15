abstract  class Funcionario{
    protected String nome;
    protected double salarioBase;
    protected String departamento;

    public Funcionario(){
        nome = "";
        salarioBase = 0;
        departamento = "";
    }

    public abstract double calcularSalario();


}