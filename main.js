"use strict";
class Animal {
    constructor(nome) {
        this.nome = nome;
    }
    fazerSom() {
        console.log(`${this.nome} faz um som!`);
    }
}
class Cachorro extends Animal {
    fazerSom() {
        console.log(`${this.nome} faz: Au au!!`);
    }
}
class Gato extends Animal {
    fazerSom() {
        console.log(`${this.nome} faz: Miauuu!!`);
    }
}
let dog = new Cachorro("Rex");
dog.fazerSom();
let cat = new Gato("Mimi");
cat.fazerSom();
