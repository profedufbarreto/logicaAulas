abstract class Animal{
    nome: string;

    constructor(nome: string){
        this.nome = nome;
    }

    abstract fazerSom(): void; //filho OBRIGA implementar;

    mostrarNome(): void{
        console.log(`Nome: ${this.nome}.`);
    }
}

class Cachorro extends Animal{
    fazerSom(): void {
        console.log(`${this.nome} faz: Au au!!`);
    }
}

class Gato extends Animal{
    fazerSom(): void {
        console.log(`${this.nome} faz: miauuu!!`);
    }
}

let animal = new Animal("Rex");

let dog = new Cachorro("Rex");
dog.fazerSom();

let cat = new Gato("Mimi");
cat.fazerSom();