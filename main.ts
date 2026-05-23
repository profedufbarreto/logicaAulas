interface Pessoa{
    nome: string;
    idade: number;
}

let pPessoa: Pessoa = {
    nome: "Eduardo",
    idade: 38
};

console.log(`Meu nome é: ${pPessoa.nome}`);
console.log(`E tenho ${pPessoa.idade} anos.`);