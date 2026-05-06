#include <iostream>
#include <iomanip>
#include <string>

// --- FUNÇÕES DE EXIBIÇÃO DE MENUS (Deixam o código organizado) ---

void exibirModalidades() {
    std::cout << "\n========== SENAC NH - MATRICULAS ==========" << std::endl;
    std::cout << "1 - Cursos Presenciais" << std::endl;
    std::cout << "2 - Cursos EAD" << std::endl;
    std::cout << "3 - Idiomas (Libras)" << std::endl;
    std::cout << "0 - Sair do Sistema" << std::endl;
    std::cout << "Selecione a modalidade do curso: ";
}

void exibirParceiros() {
    std::cout << "\n--- DESCONTOS DE PARCEIROS ---" << std::endl;
    std::cout << "1 - Sem convenio / Nao sou parceiro" << std::endl;
    std::cout << "2 - SESC (10% de desconto)" << std::endl;
    std::cout << "3 - Vivo / Sicredi / Unimed / DoctorClin (15% de desconto)" << std::endl;
    std::cout << "4 - Sindilojas (20% de desconto)" << std::endl;
    std::cout << "Escolha o convenio do aluno: ";
}

void exibirFormasPagamento() {
    std::cout << "\n--- METODOS DE PAGAMENTO ---" << std::endl;
    std::cout << "1 - A vista (Dinheiro, PIX ou Debito - Ganha +10% de desconto)" << std::endl;
    std::cout << "2 - Cartao de Credito (Ganha +6% de desconto)" << std::endl;
    std::cout << "3 - Boleto Bancario / Recorrencia" << std::endl;
    std::cout << "Escolha a forma de pagamento: ";
}

// --- PROGRAMA PRINCIPAL ---

int main() {
    // Configuração de exibição monetária
    std::cout << std::fixed << std::setprecision(2);

    // BANCO DE DADOS - VETORES PARALELOS
    // 1. Presenciais
    std::string nomesPresenciais[3] = {"Técnico em Desenvolvimento de Sistemas (TDS)", "Técnico em Enfermagem", "Técnico em Modelagem do Vestuário"};
    float precosPresenciais[3] = {14405.49, 15278.00, 14844.79};
    int maxParcelasPresenciais[3] = {30, 40, 28};

    // 2. EAD
    std::string nomesEAD[4] = {"EAD Recursos Humanos", "EAD Logística", "EAD Contabilidade", "EAD Transações Imobiliárias"};
    float precosEAD[4] = {3355.00, 3751.00, 3355.00, 3157.00};

    int modalidade = -1;

    // LAÇO PRINCIPAL: Sistema ativo até digitar 0
    while (modalidade != 0) {
        exibirModalidades();
        std::cin >> modalidade;

        if (modalidade == 0) {
            std::cout << "\nSistema encerrado. Ate mais!" << std::endl;
            break;
        }

        if (modalidade < 1 || modalidade > 3) {
            std::cout << "\nOpcao invalida! Tente novamente." << std::endl;
            continue;
        }

        // Variáveis que vão armazenar os dados do curso escolhido
        std::string cursoEscolhido = "";
        float valorOriginal = 0.0;
        int maxBandeiraParcelas = 24; // Padrão máximo para o cartão (Visa)

        // SWITCH para filtrar a escolha do curso por categoria
        switch (modalidade) {
            case 1: { // Cursos Presenciais
                std::cout << "\n[CURSOS PRESENCIAIS]" << std::endl;
                for (int i = 0; i < 3; i++) {
                    std::cout << i + 1 << " - " << nomesPresenciais[i] << " (R$ " << precosPresenciais[i] << ")" << std::endl;
                }
                std::cout << "Escolha o curso: ";
                int escolha;
                std::cin >> escolha;
                
                if (escolha >= 1 && escolha <= 3) {
                    cursoEscolhido = nomesPresenciais[escolha - 1];
                    valorOriginal = precosPresenciais[escolha - 1];
                    maxBandeiraParcelas = maxParcelasPresenciais[escolha - 1];
                } else {
                    std::cout << "Curso invalido!" << std::endl;
                    continue;
                }
                break;
            }
            case 2: { // Cursos EAD
                std::cout << "\n[CURSOS EAD]" << std::endl;
                for (int i = 0; i < 4; i++) {
                    std::cout << i + 1 << " - " << nomesEAD[i] << " (R$ " << precosEAD[i] << ")" << std::endl;
                }
                std::cout << "Escolha o curso: ";
                int escolha;
                std::cin >> escolha;

                if (escolha >= 1 && escolha <= 4) {
                    cursoEscolhido = nomesEAD[escolha - 1];
                    valorOriginal = precosEAD[escolha - 1];
                    maxBandeiraParcelas = 22; // Limite padrão do EAD da tabela
                } else {
                    std::cout << "Curso invalido!" << std::endl;
                    continue;
                }
                break;
            }
            case 3: { // Idiomas (Libras)
                cursoEscolhido = "Libras (Por Modulo)";
                valorOriginal = 1757.00;
                maxBandeiraParcelas = 3;
                break;
            }
        }

        // LIMPEZA DO BUFFER (Antes de capturar strings com getline)
        std::cin.ignore();

        // CADASTRO BÁSICO DO ALUNO
        std::string nomeAluno, dataNasc;
        std::cout << "\nDigite o nome completo do aluno: ";
        std::getline(std::cin, nomeAluno);
        std::cout << "Digite a data de nascimento (DD/MM/AAAA): ";
        std::getline(std::cin, dataNasc);

        // APLICAÇÃO DE DESCONTOS (LÓGICA SEQUENCIAL)
        float totalComDesconto = valorOriginal;

        // 1. Desconto de Parceiro
        exibirParceiros();
        int opcaoParceiro;
        std::cin >> opcaoParceiro;

        if (opcaoParceiro == 2) totalComDesconto = totalComDesconto * 0.90; // 10% Sesc
        else if (opcaoParceiro == 3) totalComDesconto = totalComDesconto * 0.85; // 15% Convênios
        else if (opcaoParceiro == 4) totalComDesconto = totalComDesconto * 0.80; // 20% Sindilojas

        // 2. Forma de Pagamento e Desconto Adicional
        exibirFormasPagamento();
        int formaPagamento;
        std::cin >> formaPagamento;

        int diaVencimento = 0;
        int parcelasEscolhidas = 1;

        if (formaPagamento == 1) { // À Vista
            totalComDesconto = totalComDesconto * 0.90; // +10% de desconto
            std::cout << "\nAplicado +10% de desconto pelo pagamento a vista!" << std::endl;
        } 
        else if (formaPagamento == 2) { // Cartão de Crédito
            totalComDesconto = totalComDesconto * 0.94; // +6% de desconto por lei de bandeiras
            std::cout << "\nAplicado +6% de desconto para Cartao de Credito!" << std::endl;
            
            std::cout << "\nSelecione a bandeira do cartao para limites:\n1 - Visa (Ate 24x)\n2 - Master (Ate 21x)\n3 - Nubank (Ate 12x)\nEscolha: ";
            int bandeira;
            std::cin >> bandeira;

            int limiteBandeira = 24;
            if (bandeira == 2) limiteBandeira = 21;
            else if (bandeira == 3) limiteBandeira = 12;

            // Define qual limite é menor: o do curso ou o da bandeira do cartão
            int limiteRealFinal = (maxBandeiraParcelas < limiteBandeira) ? maxBandeiraParcelas : limiteBandeira;

            do {
                std::cout << "Em quantas vezes deseja parcelar (1 ate " << limiteRealFinal << "x)? ";
                std::cin >> parcelasEscolhidas;
                if (parcelasEscolhidas < 1 || parcelasEscolhidas > limiteRealFinal) {
                    std::cout << "Quantidade invalida para este curso/cartao!" << std::endl;
                }
            } while (parcelasEscolhidas < 1 || parcelasEscolhidas > limiteRealFinal);
        } 
        else if (formaPagamento == 3) { // Boleto / Recorrência
            // Não há desconto adicional sobre o valor de convênio
            do {
                std::cout << "Escolha o melhor dia para baixa/vencimento (10 ou 20): ";
                std::cin >> diaVencimento;
                if (diaVencimento != 10 && diaVencimento != 20) {
                    std::cout << "Dia invalido! Permitido apenas dias 10 ou 20." << std::endl;
                }
            } while (diaVencimento != 10 && diaVencimento != 20);

            std::cout << "Digite a quantidade de parcelas no boleto (Maximo de " << maxBandeiraParcelas << "x): ";
            std::cin >> parcelasEscolhidas;
        }

        // IMPRESSÃO DO RECIBO COM AS REGRAS APLICADAS
        std::cout << "\n========================================================" << std::endl;
        std::cout << "             MATRICULA EFETUADA - SENAC NH              " << std::endl;
        std::cout << "========================================================" << std::endl;
        std::cout << " Aluno: " << nomeAluno << " | Nasc: " << dataNasc << std::endl;
        std::cout << " Curso Matriculado: " << cursoEscolhido << std::endl;
        std::cout << " Valor Original do Curso: R$ " << valorOriginal << std::endl;
        std::cout << " Valor Final com Descontos: R$ " << totalComDesconto << std::endl;
        
        if (formaPagamento == 1) {
            std::cout << " Forma de Pagamento: A vista (PIX/Dinheiro/Debito)" << std::endl;
        } else {
            std::cout << " Parcelado em: " << parcelasEscolhidas << "x de R$ " << (totalComDesconto / parcelasEscolhidas) << std::endl;
            if (formaPagamento == 3) {
                std::cout << " Tipo: Boleto/Recorrencia | Vencimento todo dia: " << diaVencimento << std::endl;
                std::cout << " *Observacao: Sujeito a liberacao do setor financeiro." << std::endl;
            }
        }
        std::cout << "--------------------------------------------------------" << std::endl;
        std::cout << " REGRA DE CANCELAMENTO: Multa de 10% sobre o saldo devedor." << std::endl;
        std::cout << "========================================================\n" << std::endl;
    }

    return 0;
}