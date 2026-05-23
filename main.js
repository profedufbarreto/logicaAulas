"use strict";
class Pessoa {
    constructor(nome, idade, cpf) {
        this.nome = nome;
        this.idade = idade;
        this.cpf = cpf;
    }
    getIdade() {
        return this.idade;
    }
    getCpf() {
        return this.cpf;
    }
    setIdade(novaIdade) {
        if (novaIdade > 0) {
            this.idade = novaIdade;
        }
    }
    saudacao() {
        console.log(`Olá, eu sou o ${this.nome}.`);
    }
}
let p1 = new Pessoa("Eduardo", 38, "123.456.789-01");
console.log(p1.nome);
console.log(p1.getIdade());
console.log(p1.getCpf());
