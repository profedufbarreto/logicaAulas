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

console.log(`Marca: ${meuCarro.marca}`);
console.log(`Modelo: ${meuCarro.modelo}`);
console.log(`Ano: ${meuCarro.ano}`);
