import { AsyncLocalStorage } from "async_hooks";
import { BlobOptions } from "buffer";
import * as readline from "readline";

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

function perguntar(questao: string): Promise<string>{
    return new Promise((resolve) => {
        rl.question(questao, (resposta: string) => {
            resolve(resposta);
        });
    });
}

function somar(a: number, b: number): number{
    return a + b;
}

function subtrair(a: number, b: number): number{
    return a - b;
}

function multiplicar(a: number, b: number): number{
    return a * b;
}

function dividir(a: number, b: number): number{
    if(b === 0){
        console.log("Erro: não pode dividir por zero!");
        return 0;
    }
    return a / b;
}

async function main(): Promise<void>{
    let continuar: boolean = true;

    while(continuar){
        console.log("\n ===== CALCULADORA =====");
        console.log("1 - Somar");
        console.log("2 - Subtrair");
        console.log("3 - Multiplicar");
        console.log("4 - Dividir");
        console.log("5 - Sair");

        let opcao: string = await perguntar("Escolha uma opção: ");

        if(opcao === "5"){
            console.log("Até logo!");
            continuar = false;
            break;
        }

        let num1: number = parseFloat(await perguntar("Digite o primeiro número: "));
        let num2: number = parseFloat(await perguntar("Digite o segundo número: "));

        let resultado: number = 0;

        if(opcao === "1"){
            resultado = somar(num1, num2);
            console.log(`Resultado: ${num1} + ${num2} = ${resultado}`);
        }else if(opcao === "2"){
            resultado = subtrair(num1, num2);
            console.log(`Resultado: ${num1} - ${num2} = ${resultado}`);
        }else if(opcao === "3"){
            resultado = multiplicar(num1, num2);
            console.log(`Resultado: ${num1} * ${num2} = ${resultado}`);
        }else if(opcao === "4"){
            resultado = dividir(num1, num2);
            console.log(`Resultado: ${num1} / ${num2} = ${resultado}`);
        }else{
            console.log("Opção inválida!");
        }
    }

    rl.close();
}

main();