#include<iostream>
#include<string>

class Livro{
    private:
    std::string titulo, autor;
    int ano;
    bool emprestado;

    public:
    Livro(std::string titulo, std::string autor, int ano){
        this->titulo = titulo;
        this->autor = autor;
        this->ano = ano;
        this->emprestado = false;
    }

    void emprestar(){
        if(!emprestado){
            emprestado = true;
            std::cout<<"Livro: "<<titulo<<" emprestado com sucesso!"<<std::endl;
        }else{
            std::cout<<"Este livro já está empresado!"<<std::endl;
        }
    }

    void devolver(){
        if(emprestado){
            emprestado = false;
            std::cout<<"Livro "<<titulo<<" devolvido com sucesso!"<<std::endl;
        }else{
            std::cout<<"Este livro não estava emprestado!"<<std::endl;
        }
    }

    void exibirInfo(){
        std::string status = emprestado ? "Emprestado" : "Disponível";
        std::cout<<"Título: "<<titulo<<std::endl;
        std::cout<<"Autor: "<<autor<<std::endl;
        std::cout<<"Ano: "<<ano<<std::endl;
        std::cout<<"Status: "<<status<<std::endl;
        std::cout<<"---"<<std::endl;
    }
};

int main(){

    std::string titulo, autor;
    int ano;

    Livro livro1(titulo, autor, ano);

    return 0;
}