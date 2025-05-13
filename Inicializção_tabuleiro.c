def criar_tabuleiro():
    tabuleiro = [[None for _ in range(8)] for _ in range(8)]
    
    # Peões
    tabuleiro[1] = [Peao('preto') for _ in range(8)]
    tabuleiro[6] = [Peao('branco') for _ in range(8)]
    
    # Torres
    tabuleiro[0][0] = Torre('preto')
    tabuleiro[0][7] = Torre('preto')
    tabuleiro[7][0] = Torre('branco')
    tabuleiro[7][7] = Torre('branco')
    
    # Bispos
    tabuleiro[0][2] = Bispo('preto')
    tabuleiro[0][5] = Bispo('preto')
    tabuleiro[7][2] = Bispo('branco')
    tabuleiro[7][5] = Bispo('branco')
    
    # Rainhas
    tabuleiro[0][3] = Rainha('preto')
    tabuleiro[7][3] = Rainha('branco')

    return tabuleiro
