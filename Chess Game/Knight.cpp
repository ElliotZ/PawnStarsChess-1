#include "Knight.h"

std::vector<Position> Knight::highlightMoves(Position current, int boardWidth, int boardLength) {
    std::vector<Position> ret;

    ret.push_back(Position{ current.x - 2, current.y - 1 });
    ret.push_back(Position{ current.x - 1, current.y - 2 });
    ret.push_back(Position{ current.x + 2, current.y - 1 });
    ret.push_back(Position{ current.x + 1, current.y - 2 });
    ret.push_back(Position{ current.x + 2, current.y + 1 });
    ret.push_back(Position{ current.x + 1, current.y + 2 });
    ret.push_back(Position{ current.x - 2, current.y + 1 });
    ret.push_back(Position{ current.x - 1, current.y + 2 });

    for (std::vector<Position>::iterator it = ret.begin(); it != ret.end(); it++) {
        if (isOutOfBounds(*it, boardWidth, boardLength)) ret.erase(it);
    }

    return ret;
}