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
    let nome: string = await perguntar("Digite seu nome: ");
    let idade: number = parseInt(await perguntar("Digite sua idade: "));

    console.log("Nome: " + nome);
    console.log("Idade: " + idade);

    rl.close();
}

main();