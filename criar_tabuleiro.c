def criar_tabuleiro():
    tabuleiro = [[None for _ in range(8)] for _ in range(8)]
    tabuleiro[1] = [Peao('preto') for _ in range(8)]
    tabuleiro[6] = [Peao('branco') for _ in range(8)]
    tabuleiro[0][0] = Torre('preto')
    tabuleiro[0][7] = Torre('preto')
    tabuleiro[7][0] = Torre('branco')
    tabuleiro[7][7] = Torre('branco')
    return tabuleiro
