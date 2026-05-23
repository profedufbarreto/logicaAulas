interface Carro{
    marca: string;
    modelo: string;
    ano: number;
}

let meuCarro: Carro = {
    marca: "Toyota",
    modelo: "Corola",
    ano: 2020
};

console.log(meuCarro);
console.log(meuCarro.marca);
console.log(meuCarro.modelo);
console.log(meuCarro.ano);