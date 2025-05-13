class Torre(Peca):
    def movimentos_possiveis(self, tabuleiro, x, y):
        movimentos = []
        direcoes = [(-1, 0), (1, 0), (0, -1), (0, 1)]
        for dx, dy in direcoes:
            i, j = x + dx, y + dy
            while 0 <= i < 8 and 0 <= j < 8:
                if tabuleiro[i][j] is None:
                    movimentos.append((i, j))
                elif tabuleiro[i][j].cor != self.cor:
                    movimentos.append((i, j))
                    break
                else:
                    break
                i += dx
                j += dy
        return movimentos
