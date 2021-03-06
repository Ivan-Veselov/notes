\begin{unit}
\begin{Def}
Определителем квадратной матрицы $A$ размера $n \times n$ называется
$$\det{A} = \sum\limits_{\sigma \in S_{n}}{\varepsilon(\sigma)\prod\limits_{i = 1}^{n}a_{\sigma(i)i}}$$
\end{Def}

\begin{Thm}
$$\det{\transposed{A}} = \det{A}$$

\begin{Tip}
Нужно перевернуть индексы в формуле и пересортировать множители в каждом слагаемом. Формула останется той же.
\end{Tip}
\end{Thm}

По сути эта теорема говорит, что на определитель можно смотреть как на функцию столбцов или как на функцию строк,
итоговое значение будет одинаковым.

\begin{Thm}
Функция $\det{A} = \det{\braced{A^{1}, \dots, A^{n}}}$ является кососимметричной -- если поменять местами любые
два столбца, то значение функции поменяет свой знак.

\begin{Tip}
У перестановки, которая применяется в каждом слагаемом добавляется ещё одна транспозиция, которая соответствует
перестановки столбцов-аргументов.
\end{Tip}
\end{Thm}

\begin{Clm}
Если функция $f$ кососимметрична, то в случае совпадения двух аргументов $f$ обращается в ноль.

\begin{Tip}
Если поменять местами два совпадающих аргумента, то значение функции не изменится, но кососимметрическая функция
должна поменять знак.
\end{Tip}
\end{Clm}

\begin{Thm}
Функция $\det{A} = \det{\braced{A^{1}, \dots, A^{n}}}$ является полилинейной -- линейна по каждому аргументу.

\begin{Tip}
Явно следует из формулы.
\end{Tip}
\end{Thm}

\begin{Thm}
$$\det{E} = 1$$

\begin{Tip}
Явно следует из формулы.
\end{Tip}
\end{Thm}

\begin{Clm}
$$\det{\lambda A} = \lambda^{n}\det{A}$$
\end{Clm}

\begin{Thm}
Если у матрицы $A$ есть нулевой столбец, то $\det{A} = 0$.

\begin{Tip}
Через линейность или по формуле.
\end{Tip}
\end{Thm}

\begin{Clm}
Если к матрице применить элементарное преобразование второго типа
(прибавить к столбцу другой столбец с коэффициентом), то определитель не изменится.

\begin{Tip}
Через линейность.
\end{Tip}
\end{Clm}

\begin{Thm}
Определитель треугольной матрицы равен произведению элементов на диагонали.

\begin{Tip}
Используя, элементарное преобразование занулить все элементы, кроме диагональных.
\end{Tip}
\end{Thm}

Сразу получается алгоритм для вычисления определителя. Нужно привести матрицу к ступенчатому виду и
воспользоваться предыдущей теоремой. Пока матрица приводится к ступенчатому виду некоторые стоблцы могут быть
поменяны местами, в таком случае нужно не забыть домножить результат на $-1$.
\end{unit}

\begin{unit}
\begin{Def}
Определитель матрицы, получающейся из $A$ вычёркиванием $i$-й строки и $j$-ro столбца, обозначается $M_{ij}$
и называется минором матрицы $A$, соответствующим элементу $a_{ij}$.
\end{Def}

\begin{Def}
Величина $A_{ij} = (-1)^{i + j}M_{ij}$ называется алгебраическим дополнением элемента $a_{ij}$.
\end{Def}

\begin{Clm}
Если все элементы первого столбца матрицы $A$ кроме элемента $a_{11}$ равны нулю, то
$$\det{A} = a_{11}M_{11} = a_{11}A_{11}$$
\end{Clm}

Следствием и обобщением этого факта является следующая теорема.

\begin{Thm}[Разложение определителя]
По элементам $j$-го столбца:
$$\det{A} = \sum\limits_{i = 1}^{n}{a_{ij}A_{ij}}$$

По элементам $i$-й строки:
$$\det{A} = \sum\limits_{j = 1}^{n}{a_{ij}A_{ij}}$$
\end{Thm}
\end{unit}

\begin{unit}
Квазитреугольный определитель!!!

\begin{Thm}
$$\det{AB} = \det{A}\det{B}$$
\end{Thm}
\end{unit}

\begin{unit}
\begin{Thm}
$$\det{A^{-1}} = \braced{\det{A}}^{-1}$$
\end{Thm}

\begin{Def}
Матрица, составленная из алгебраических дополнений матрицы $A$ и транспонированная, называется присоединенной
матрицей и обозначается $A^{\lor}$.
\end{Def}

\begin{Thm}
$$AA^{\lor} = diag(\det{A})$$
\end{Thm}

\begin{Thm}
Матрицы невырожденна $\Leftrightarrow$ $\det{A} \neq 0$. В таком случае
$$A^{-1} = A^{\lor}\braced{\det{A}}^{-1}$$
\end{Thm}
\end{unit}

\begin{unit}
Формулы Крамера
\end{unit}
