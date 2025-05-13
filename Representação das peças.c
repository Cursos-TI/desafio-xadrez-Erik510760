# Representação de peças e suas regras
class Peca:
    def __init__(self, cor):
        self.cor = cor  # 'branco' ou 'preto'

    def movimentos_possiveis(self, tabuleiro, x, y):
        raise NotImplementedError

class Peao(Peca):
    def movimentos_possiveis(self, tabuleiro, x, y):
        direcao = -1 if self.cor == 'branco' else 1
        movimentos = []
        if 0 <= x + direcao < 8 and tabuleiro[x + direcao][y] is None:
            movimentos.append((x + direcao, y))
        return movimentos

class Torre(Peca):
    def movimentos_possiveis(self, tabuleiro, x, y):
        movimentos = []
        # cima
        for i in range(x - 1, -1, -1):
            if tabuleiro[i][y] is None:
                movimentos.append((i, y))
            else:
                if tabuleiro[i][y].cor != self.cor:
                    movimentos.append((i, y))
                break
        # baixo
        for i in range(x + 1, 8):
            if tabuleiro[i][y] is None:
                movimentos.append((i, y))
            else:
                if tabuleiro[i][y].cor != self.cor:
                    movimentos.append((i, y))
                break
        # esquerda
        for j in range(y - 1, -1, -1):
            if tabuleiro[x][j] is None:
                movimentos.append((x, j))
            else:
                if tabuleiro[x][j].cor != self.cor:
                    movimentos.append((x, j))
                break
        # direita
        for j in range(y + 1, 8):
            if tabuleiro[x][j] is None:
                movimentos.append((x, j))
            else:
                if tabuleiro[x][j].cor != self.cor:
                    movimentos.append((x, j))
                break
        return movimentos
