
# LinearAlgae

A very simple linear algebra library I made for fun as an exercise for Elementary Linear Algebra. It can find REF, RREF, inverse, determinant, and LU factorization in O(m^2 \* n), O(m^2 \* n), O(m^3), O(m^3), and O(m^3) time complexity respectively. The product AB, where A has dimensions a x b and B has dimensions b x c, can be found in O(abc) time.




## Operations

### Row Class Methods

#### Set jth entry
```http
  void setEntry(int j, int val)
```

| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `j` | `integer` | The jth entry in the row |
| `val` | `float` | The value to set the entry to |

Returns void

#### Get jth entry
```http
  float getEntry(int j)
```

| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `j` | `integer` | The jth entry in the row |

Returns a float representing the entry


#### Get size
```http
  int getSize()
```

Returns an integer representing the size of the row

#### Get raw contents
```http
  std::vector<float>* getRaw()
```

Returns std::vector<float>*; a pointer to the vector storing the entries

### Matrix Class Methods

#### Construct a swap operation
```http
  ElemOp swap(int a, int b)
```

| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `a` | `integer` | Row on the LHS |
| `b` | `integer` | Row on the RHS |

Returns ElemOp representing R_a <--> R_b

#### Construct a replace operation
```http
  ElemOp replace(float a, int b, float c, int d)
```

| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `a` | `float` | Coefficient of the left row |
| `b` | `integer` | Index of the left row |
| `c` | `float` | Coefficient of the right row |
| `d` | `integer` | Index of the right row and the row on the RHS |

Returns ElemOp representing aR_b + cR_d --> R_d

#### Construct a scale operation
```http
  ElemOp scale(float a, int b)
```

| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `a` | `float` | Scaling factor |
| `b` | `integer` | Index of row |

Returns ElemOp representing aR_b --> R_b

#### Apply an elementary operation
```http
  void applyOperation(ElemOp op)
```

| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `op` | `ElemOp` | The operation to apply |

Returns void

#### Apply an elementary operation
```http
  void applyOperation(ElemOp op)
```

| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `op` | `ElemOp` | The operation to apply |

Returns void

#### Set an entry
```http
  void setEntry(int i, int j, float val)
```

| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `i` | `integer` | The row |
| `j` | `integer` | The column |
| `val` | `float` | The value to set it to |

Returns void

#### Get an entry
```http
  float getEntry(int i, int j)
```

| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `i` | `integer` | The row |
| `j` | `integer` | The column |

Returns float representing the value at i, j

#### Get m
```http
  int getM()
```

Returns int representing the dimension m (matrix is assumed to be m x n)

#### Get n
```http
  int getN()
```

Returns int representing the dimension n (matrix is assumed to be m x n)

#### Get raw contents
```http
  std::vector<Row>* getRaw()
```

Returns std::vector<Row>*; a pointer to the vector storing the rows

### Utility Methods

#### Print a row
```http
  void printRow(Row row)
```

| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `row` | `Row` | The row to print |

Returns void

#### Print a matrix
```http
  void printMatrix(Matrix matrix)
```

| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `matrix` | `Matrix` | The matrix to print |

Returns void

#### Print an elementary operation
```http
  void printOperation(ElemOp op)
```

| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `op` | `ElemOp` | The operation to print |

Returns void

#### Invert an elementary operation
```http
  ElemOp inverseOperation(ElemOp op)
```

| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `op` | `ElemOp` | The operation to invert |

Returns an ElemOp representing the inverse of op

#### Construct an identity matrix
```http
  Matrix createIdentityMatrix(int n)
```

| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `n` | `integer` | Dimension of the identity matrix |

Returns a Matrix representing I_n, the n x n identity matrix

#### Put a matrix into REF
```http
  std::vector<ElemOp> REF(Matrix& matrix)
```

| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `matrix` | `Matrix` | Matrix to REF |

Directly modifies the matrix to put it into REF. Returns std::vector<ElemOp> representing the operations performed to row-reduce the matrix.

#### Put a matrix into RREF
```http
  std::vector<ElemOp> RREF(Matrix& matrix)
```

| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `matrix` | `Matrix` | Matrix to RREF |

Directly modifies the matrix to put it into RREF. Returns std::vector<ElemOp> representing the operations performed to RREF the matrix.

#### Find the inverse of a matrix
```http
  Matrix findInverse(Matrix mat)
```

| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `mat` | `Matrix` | Matrix to invert |

Returns a Matrix representing the inverse of mat.

#### Find the determinant of a matrix
```http
  float findDeterminant(Matrix mat)
```

| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `mat` | `Matrix` | Matrix to find the determinant of |

Returns a float representing the determinant of mat

#### Find the LU factorization of a matrix
```http
  std::pair<Matrix, Matrix> findLUFactorization(Matrix mat)
```

| Parameter | Type     | Description                |
| :-------- | :------- | :------------------------- |
| `mat` | `Matrix` | Matrix to find the LU factorization of |

Returns a std::pair<Matrix, Matrix> with the first element being L and the second element being U


