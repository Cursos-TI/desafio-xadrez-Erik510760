def mover(tabuleiro, origem, destino):
    x1, y1 = origem
    x2, y2 = destino
    peca = tabuleiro[x1][y1]

    if peca is None:
        print("Não há peça na posição de origem.")
        return False

    movimentos = peca.movimentos_possiveis(tabuleiro, x1, y1)

    if (x2, y2) not in movimentos:
        print("Movimento inválido.")
        return False

    tabuleiro[x2][y2] = peca
    tabuleiro[x1][y1] = None
    return True
