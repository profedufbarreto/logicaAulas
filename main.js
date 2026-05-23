"use strict";
class Forma {
    constructor(nome) {
        this.nome = nome;
    }
    mostrarInfo() {
        console.log(`=== ${this.nome} ===`);
        console.log(`Área: ${this.calcularArea()}`);
        console.log(`Perímetro: ${this.calcularPerimetro()}`);
        console.log("");
    }
}
class Quadrado extends Forma {
    constructor(lado) {
        super("Quadrado");
        this.lado = lado;
    }
    calcularArea() {
        return this.lado * this.lado;
    }
    calcularPerimetro() {
        return this.lado * 4;
    }
}
class Retangulo extends Forma {
    constructor(largura, altura) {
        super("Retangulo");
        this.largura = largura;
        this.altura = altura;
    }
    calcularArea() {
        return this.largura * this.altura;
    }
    calcularPerimetro() {
        return (this.largura + this.altura) * 2;
    }
}
class Circulo extends Forma {
    constructor(raio) {
        super("Circulo");
        this.raio = raio;
    }
    calcularArea() {
        return Math.PI * this.raio;
    }
    calcularPerimetro() {
        return 2 * Math.PI * this.raio;
    }
}
let q = new Quadrado(5);
q.mostrarInfo();
let r = new Retangulo(4, 6);
r.mostrarInfo();
let c = new Circulo(3);
c.mostrarInfo();
