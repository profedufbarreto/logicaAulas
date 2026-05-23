class Pessoa{ 
    public nome: string;
    private idade: number;
    protected cpf: string;

    constructor(nome: string, idade: number, cpf: string){
        this.nome = nome;
        this.idade = idade;
        this.cpf = cpf;
    }

    public getIdade(): number{
        return this.idade;
    }

    public getCpf(): string{
        return this.cpf;
    }

    public setIdade(novaIdade: number): void{
        if(novaIdade > 0){
            this.idade = novaIdade;
        }
    }

    public saudacao(): void{
        console.log(`Olá, eu sou o ${this.nome}.`);
    }
}

let p1 = new Pessoa("Eduardo", 38, "123.456.789-01");

console.log(p1.nome);
console.log(p1.getIdade());
console.log(p1.getCpf());