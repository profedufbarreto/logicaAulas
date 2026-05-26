import { AsyncLocalStorage } from "async_hooks";
import * as readline "readline";

const rl = readline.createInterface({ 
    input: process.stdin,
    output: process.stdout
});

function perguntar(questa: string): Promise<string>{
    return new Promise((resolve) => {
        rl.question(questao, (resposta: string) => {
            resolve(resposta);
        });
    });
}

async function main(): Promise<void>{
    let num1: number = parseInt(await perguntar("Digite o primeiro número: "));
    let num2: number = parseInt(await perguntar("Digite o "))
}