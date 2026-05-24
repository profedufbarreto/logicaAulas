import * as realine from "readline";

const rl = realine.createInterface({
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

async function obterNomeCompleto(): Promise<string>{
    let nome: string = await perguntar("Digite seu nome: ");
    let sobrenome: string = await perguntar("Digite seu sobrenome: ");
    
    return nome + " " + sobrenome;
}

async function main(): Promise<void>{
    let nomeCompleto: string = await obterNomeCompleto();

    console.log("Nome completo: " + nomeCompleto);

    rl.close();

}

main();