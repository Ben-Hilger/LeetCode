function isValidSudoku(board: string[][]): boolean {
    
  const rows: Map<number, string[]> = new Map<number, string[]>();
  const columns: Map<number, string[]> = new Map<number, string[]>();
  
  // number = square
  const squares: Map<number, string[]> = new Map<number, string[]>();

  // col
  for (let i = 0; i < board.length; i++) {
      // row
      for (let j = 0; j < board[i].length; j++) {
          const number = board[i][j];
          if (number === ".") continue;

          const currentColumnNumbers = columns.get(i) ?? [];
          const currentRowNumbers = rows.get(j) ?? [];
          if (currentColumnNumbers.includes(number)) {
              return false;
          } else if (currentRowNumbers.includes(number)) {
              return false;
          }

          // get current sidoku square
          const square = Math.floor(j / 3) + 3 * Math.floor(i / 3);
          const currentSquare = squares.get(square) ?? [];
          if (currentSquare.includes(number)) {
              return false;
          }

          currentColumnNumbers.push(number);
          currentRowNumbers.push(number);
          currentSquare.push(number);
          columns.set(i, currentColumnNumbers);
          rows.set(j, currentRowNumbers);
          squares.set(square, currentSquare);
      }
  }

  return true;
};