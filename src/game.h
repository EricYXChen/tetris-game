#pragma once
#include "grid.h"
#include "blocks.cpp"

class Game{
public:
    Game();
    Block GetRandomBlock();
    void Draw();
    std::vector<Block> GetAllBlocks();
    void HandleInput();
    void MoveBlockLeft();
    void MoveBlockRight();
    void MoveBlockDown();
    void MoveHardDrop();
    int score;
    Grid grid;
    bool gameOver;
private:
    bool IsBlockOutside();
    void RotateBlock();
    void RotateBlockCCW();
    void LockBlock();
    bool BlockFits();
    void Reset();
    void UpdateScore(int linesCleared, int moveDownPoints);
    std::vector<Block> blocks;
    Block currentBlock;
    Block nextBlock;
};