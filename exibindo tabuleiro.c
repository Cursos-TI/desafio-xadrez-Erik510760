def imprimir_tabuleiro(tabuleiro):
    for linha in tabuleiro:
        linha_str = []
        for peca in linha:
            if peca is None:
                linha_str.append(".")
            else:
                letra = type(peca).__name__[0]  # Ex: 'P' para Peao
                cor = 'B' if peca.cor == 'branco' else 'P'
                linha_str.append(f"{letra}{cor}")
        print(" ".join(linha_str))
    print()
