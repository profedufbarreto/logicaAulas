class Animal {
    nome: string;

    constructor(nome: string){
        this.nome = nome;
    }

    fazerSom(): void{
        console.log(`${this.nome} faz um som!`);
    }
}

class Cachorro extends Animal {
    fazerSom(): void {
        console.log(`${this.nome} faz: Au au!!`);
    }
}

class Gato extends Animal{
    fazerSom(): void {
        console.log(`${this.nome} faz: Miauuu!!`);
    }
}

let dog = new Cachorro("Rex");
dog.fazerSom();

let cat = new Gato("Mimi");
cat.fazerSom();