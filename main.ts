import * as readline from "readline";

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

function perguntar(questao: string): Promise<string> {
    return new Promise((resolve) => {
        rl.question(questao, (resposta: string) => {
            resolve(resposta);
        });
    });
}

async function main(): Promise<void> {
    let num1: number = parseInt(await perguntar("Digite o primeiro número: "));
    let num2: number = parseInt(await perguntar("Digite o segundo número: "));

    let resultado: number = num1 + num2;

    console.log("Resultado: " + resultado);

    rl.close();
}

main();