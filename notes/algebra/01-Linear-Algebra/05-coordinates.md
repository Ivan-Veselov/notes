\begin{unit}
Так как при фиксированном базисе конечномерного пространства $V$ каждый вектор из $V$ выражается через базисные
вектора однозначно, то имеет смысл следующее определение.

\begin{Def}
Пусть $E = e_{1}, e_{2}, \dots, e_{n}$ -- базис векторного пространства $V$. Скаляры
$\lambda_{1}, \lambda_{2}, \dots, \lambda_{n}$, входящие в разложение
$$v = \lambda_{1}e_{1} + \lambda_{2}e_{2} + \dots + \lambda_{n}e_{n},$$
называются координатами вектора $v \in V$ в данном базисе $E$.
\end{Def}

При сложении векторов $x, y$ их координаты складываются. При умножении $x$ на скаляр координаты вектора $x$
умножаются на тот же скаляр. Вектор, все координаты которого равны нулю, совпадает с нулевым вектором.

Все это позволяет утверждать.

\begin{Thm}
Все векторные пространства одинаковой размерности $n$ над полем $F$ изоморфны. Более точно: все они изоморфны
координатному пространству $F^{n}$.
\end{Thm}
\end{unit}

\begin{unit}
Если в пространстве $V$ зафиксировать базис $v$, а в пространстве $W$ зафиксировать базис $w$, тогда любому
линейному отображению $f$ будет соответствовать матрица $M_{f}$, столбцы которой являются координатами образов
$v$ в базисе $w$. Применению отображения $f$ будет соответствовать умножению на матрицу $M_{f}$.

\begin{Thm}
Пусть $V = \angled{v_{1}, v_{2}, \dots, v_{n}}, W = \angled{w_{1}, w_{2}, \dots, w_{m}}$ --
два пространства с фиксированными базисами. Тогда существует взаимно однозначное соответствие между линейными
отображениями из $V$ в $W$ и $m \times n$-матрицами с коэффициентами в основном поле $F$.
\end{Thm}

Линейной комбинации линейных отображений соответствует линейная комбинация соответствующих матриц, а композиции
линейных отображений соответствует перемножение соответствующих матриц. Значит:

\begin{Thm}
$V, W$ -- векторные пространства размерностей $n$ и $m$ соответственно. Векторное пространство линейных
отображений из $V$ в $W$ изоморфно векторному пространству матриц размера $m \times n$. В частности размерность
обоих пространств равна $\vdim{V} \cdot \vdim{W}$.
\end{Thm}
\end{unit}

\begin{unit}
Пусть $V$ -- $n$-мерное векторное пространство и $e_{1}, e_{2}, \dots, e_{n}$, $f_{1}, f_{2}, \dots, f_{n}$ --
какие-то два его базиса. Вектора нового базиса $F$ выражаются через вектора старого базиса:
\begin{gather*}
f_{1} = a_{11} e_{1} + a_{21} e_{2} + \dots + a_{n1} e_{n}\\
\dots\\
f_{n} = a_{1n} e_{1} + a_{2n} e_{2} + \dots + a_{nn} e_{n}
\end{gather*}
Коэффициенты задают матрицу $C_{e \rightarrow f} = (a_{ij})$, и по определению $F = EC_{e \rightarrow f}$, где
$F$ и $E$ -- строки, состоящие из базисных векторов. То есть координаты $f_{i}$ записаны в $i$-м столбце.

\begin{Def}
Матрица $C_{e \rightarrow f}$ называется матрицей перехода от базиса $E$ к базису $F$.
\end{Def}

\begin{Thm}
Если $C_{e \rightarrow f}$ -- матрица перехода от базиса $e$ к базису $f$, а $v_{f}$ -- столбец координат вектора
$v$ в базисе $f$, то $C_{e \rightarrow f}v_{f} = v_{e}$ -- столбец координат вектора $v$ в базисе $e$.

\begin{Tip}
Умножение на матрицу комбинирует координаты базиса $f$ (столбцы) с нужными коэффициентами $v_{f}$.
\end{Tip}
\end{Thm}

Естественно между базисами можно переходить в обе стороны. Из этого следует следующее утверждение.

\begin{Thm}
$$C_{e \rightarrow f} = \braced{C_{f \rightarrow e}}^{-1}$$
\end{Thm}

\end{unit}
