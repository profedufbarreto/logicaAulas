abstract class Forma{
    nome: string;

    constructor(nome: string){
        this.nome = nome;
    }

    abstract calcularArea(): number;
    abstract calcularPerimetro(): number;

    mostrarInfo(): void{
        console.log(`=== ${this.nome} ===`);
        console.log(`Área: ${this.calcularArea()}`);
        console.log(`Perímetro: ${this.calcularPerimetro()}`);
        console.log("");
    }
}

class Quadrado extends Forma{
    lado: number;

    constructor(lado: number){
        super("Quadrado");
        this.lado = lado;
    }

    calcularArea(): number {
        return this.lado * this.lado;
    }

    calcularPerimetro(): number {
        return this.lado * 4;
    }
}

class Retangulo extends Forma{
    largura: number;
    altura: number;

    constructor(largura: number, altura: number){
        super("Retangulo");
        this.largura = largura;
        this.altura = altura;
    }

    calcularArea(): number {
        return this.largura * this.altura;
    }

    calcularPerimetro(): number {
        return (this.largura + this.altura) * 2;
    }
}

class Circulo extends Forma{
    raio: number;

    constructor(raio: number){
        super("Circulo");
        this.raio = raio;
    }

    calcularArea(): number {
        return Math.PI * this.raio;
    }

    calcularPerimetro(): number {
        return 2 * Math.PI * this.raio;
    }
}

let q = new Quadrado(5);
q.mostrarInfo();

let r = new Retangulo(4, 6);
r.mostrarInfo();

let c = new Circulo(3);
c.mostrarInfo();