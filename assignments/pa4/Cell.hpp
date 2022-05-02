class Cell {
    typedef std::vector<std::vector<Cell>> CellMatrix;

   public:
    int x;
    int y;
    bool is_alive;
    Cell(int x, int y, bool is_alive) : x(x), y(y), is_alive(is_alive) {}

    void determine_life_status(CellMatrix grid) {
        int live_neighbors = determine_live_neighbors(grid);

        will_be_alive_next_gen = false;

        if (is_alive && (live_neighbors == 2 || live_neighbors == 3)) {
            will_be_alive_next_gen = true;
            return;
        }

        if (!is_alive && live_neighbors == 3) {
            will_be_alive_next_gen = true;
            return;
        }
    }

    void update_life_status() {
        is_alive = will_be_alive_next_gen;
    }

   private:
    bool will_be_alive_next_gen;

    int determine_live_neighbors(CellMatrix grid) {
        int live_neighbors = 0;
        int rows = grid.size();
        int cols = grid[0].size();
        // i starts at 0 only if the cell is in the first row, otherwise -1 (prevents access of nonexistent cells above)
        // i goes to 0 only if the cell is in the last row, otherwise 1 (prevents access of nonexistent cells below)
        for (int i = 0 - (int)(bool)y; i <= 1 - ((y + 1) / rows); i++) {
            // j starts at 0 only if the cell is in the first column, otherwise -1 (prevents access of nonexistent cells to left)
            // j goes to 0 only if the cell is in the last column, otherwise 1 (prevents access of nonexistent cells to right)
            for (int j = 0 - (int)(bool)x; j <= 1 - ((x + 1) / cols); j++) {
                // No need for the cell to check itself
                if (i == 0 && j == 0) continue;

                if (grid[y + i][x + j].is_alive) {
                    live_neighbors++;
                }
            }
        }
        return live_neighbors;
    }
};
