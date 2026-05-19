import datetime

# --- Simulação de Componentes de Infraestrutura ---
class OCRSystem:
    """Simula o RF06 - Extração de dados via OCR [cite: 119, 188]"""
    def process(self, file_path):
        # Simulação de extração de metadados (CPF, Nomes, Valores) [cite: 190]
        if "bad_quality" in file_path:
            return None  # Gatilho para Fluxo Alternativo 1 [cite: 169]
        return {"cpf": "123.456.789-00", "valor": 1500.0, "texto": "Contrato de Aluguel..."}

class DocumentDatabase:
    """Simula o RF02 e RF07 - Armazenamento e Indexação [cite: 120, 191]"""
    def __init__(self):
        self.storage = {}
        self.logs = [] # RF09 - Auditoria [cite: 210]

    def save(self, doc_id, data):
        self.storage[doc_id] = data
        self.logs.append(f"[{datetime.datetime.now()}] Doc {doc_id} indexado.")

# --- Lógica Principal do Sistema ---
class DocumentManager:
    def __init__(self):
        self.db = DocumentDatabase()
        self.ocr = OCRSystem()
        # RN01 - Controle de Permissões [cite: 143, 186]
        self.permissions = {"admin": ["read", "write"], "user": ["read"]}

    def upload_pipeline(self, user_role, file_name):
        """RF01 - Pipeline de Ingestão """
        
        # RN01 - Verificação de Permissão
        if "write" not in self.permissions.get(user_role, []):
            print(f"ERRO: Acesso negado para {user_role}. (Fluxo Alternativo 3)") [cite: 352]
            return

        print(f"Iniciando processamento de: {file_name}...")

        # RF06 - Extração via OCR
        extracted_data = self.ocr.process(file_name)

        # RN03 - Fluxo Alternativo 1: Validação Humana [cite: 250, 331]
        if not extracted_data:
            print("ALERTA: Baixa qualidade detectada. Encaminhando para validação manual.") [cite: 327]
            # Simulação de correção manual pelo operador 
            extracted_data = {"cpf": "000.000.000-00", "status": "revisado_manualmente"}

        # RF07 - Indexação de Metadados [cite: 190]
        doc_id = f"DOC_{len(self.db.storage) + 1}"
        self.db.save(doc_id, extracted_data)
        print(f"Sucesso! {doc_id} armazenado com segurança (RN04/RNF01).") [cite: 108, 167]

# --- Execução do Teste ---
manager = DocumentManager()

# Teste 1: Fluxo Feliz (Admin fazendo upload de bom documento)
manager.upload_pipeline("admin", "contrato_01.pdf")

# Teste 2: Fluxo Alternativo 1 (Documento de baixa qualidade)
manager.upload_pipeline("admin", "documento_bad_quality.jpg")

# Teste 3: Fluxo Alternativo 3 (Usuário sem permissão de escrita)
manager.upload_pipeline("user", "tentativa_fraude.pdf")