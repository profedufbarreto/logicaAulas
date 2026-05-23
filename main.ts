class Pessoa {
    nome: string;
    idade: number;

    constructor(nome: string, idade: number){
        this.nome = nome;
        this.idade = idade;
    }

    saudacao(): void{
        console.log(`Olá, meu nome é ${this.nome}`);
    }

    mostrarIdade(): void{
        console.log(`Tenho ${this.idade} anos`);
    }
}

let pessoa1 = new Pessoa("Eduardo", 38);
pessoa1.saudacao();
pessoa1.mostrarIdade();

let pessoa2 = new Pessoa("Bianca", 35);
pessoa2.saudacao();
pessoa2.mostrarIdade();