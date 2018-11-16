\begin{unit}
На умножение двух матриц $AB$ можно смотреть как всевозможные покомпонентные произведения строк матрицы $A$ на
столбцы матрицы $B$. Результаты произведений записываются в соответствующие клетки матрицы-результата.

На умножение также можно смотреть как на несколько линейных комбинаций столбцов матрицы $A$ или несколько
линейных комбинаций строк матрицы $B$. Коэффициенты при таком подходе берутся из второй матрицы.

\begin{Thm}
Если $A$ и $B$ -- две матрицы, размера $m \times n$ и $n \times k$, то
$$AB = \sum\limits_{i = 1}^{n}{A^{(i)}}B_{(i)},$$
где $A^{(i)}$ -- столбцы матрицы $A$, а $B_{(i)}$ -- строки матрицы $B$.
\end{Thm}

\begin{Thm}
Умножение матриц ассоцивативно.
$$A(BC) = (AB)C$$

\begin{Proof}
Умножению матриц соответствует композиция линейных отображений. Но композиция любых отображений ассоциативна.
\end{Proof}
\end{Thm}

\begin{Thm}
Умножение матриц дистрибутивно.
$$(A + B)C = AC + BC$$
$$D(A + B) = DA + DB$$

\begin{Tip}
Простые поэлементные вычисления.
\end{Tip}
\end{Thm}

Произведение матриц не коммутативно.
\end{unit}

\begin{unit}
\begin{Def}
Пусть $A$ -- матрица размера $n \times m$. Транспонированной матрицей $A$ называется матрица $\transposed{A}$, для
которой верно, что $\transposed{A}_{ij} = A_{ji}$.
\end{Def}

То есть строки и столбцы матрицы $A$ поменялись местами.

\begin{Thm}
$$\transposed{\braced{\alpha A + \beta B}} = \alpha\transposed{A} + \beta\transposed{B}$$
\end{Thm}

\begin{Thm}
$$\transposed{\braced{\transposed{A}}} = A$$
\end{Thm}

\begin{Thm}
$$\transposed{\braced{AB}} = \transposed{B}\transposed{A}$$
\end{Thm}

\begin{Thm}
$$\rank{\transposed{A}} = \rank{A}$$
\end{Thm}
\end{unit}

\begin{unit}
\begin{Thm}
Пусть $A$ и $B$ -- произвольные матрицы размеров $m \times n$ и $n \times k$. Справедливо неравенство
$rank\ AB \leq min \{ rank\ A, rank\ B \}$.

\begin{Proof}
Так как столбцы матрицы $AB$ являются линейными комбинациями столбцов матрицы $A$, то линейная оболочка столбцов
матрицы $AB$ вложена в оболочку столбцов матрицы $A$, а значит и ранг не больше. Аналогично со строками матрицы
$B$.
\end{Proof}
\end{Thm}
\end{unit}
