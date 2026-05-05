FONTE="alg03.cpp"
EXECUTAVEL="./analise01"
ENTRADAS="entradas.txt"
RESULTADOS="resultados.txt"
# 1. Compilação (usando -O3 para garantir performance máxima)
g++ -O3 "$FONTE" -o "$EXECUTAVEL"

if [ $? -ne 0 ]; then
    echo "Erro ao compilar o código C++."
    exit 1
fi

# Limpa o arquivo de resultados anterior
> "$RESULTADOS"

echo "Iniciando processamento..."
echo "----------------------------------------"

# 2. Processamento das entradas
while IFS= read -r valor || [[ -n "$valor" ]]; do
    # Pula linhas em branco
    [ -z "$valor" ] && continue

    # Executa o programa e captura as duas linhas de saída
    # Usamos o 'mapfile' para colocar cada linha da saída em um array
    mapfile -t saida < <(echo "$valor" | "$EXECUTAVEL")

    # Atribui as linhas para variáveis legíveis
    status_msg="${saida[0]}"
    tempo_puro="${saida[1]}"

    # Exibe no terminal o status de forma limpa
    echo "Entrada: $valor | $status_msg | Tempo: ${tempo_puro} µs"

    # Salva SOMENTE o valor do tempo no arquivo de resultados
    echo "$tempo_puro" >> "$RESULTADOS"

done < "$ENTRADAS"

echo "----------------------------------------"
echo "Concluído! Os tempos foram salvos em '$RESULTADOS'."