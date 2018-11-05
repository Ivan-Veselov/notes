\begin{unit}
На практике очень часто возникают системы уравнений особого вида:

$$\begin{cases}
a_{11}x_{1} + a_{12}x_{2} + \dots + a_{1n}x_{n} = b_{1}\\
a_{21}x_{1} + a_{22}x_{2} + \dots + a_{2n}x_{n} = b_{2}\\
\dots\\
a_{m1}x_{1} + a_{m2}x_{2} + \dots + a_{mn}x_{n} = b_{m}
\end{cases}$$

Такая система называется системой линейных уравнений.

\begin{Def}
Две системы линейных уравнений называются эквивалентными, если множества их решений совпадают (возможно пустые).
\end{Def}

Стандартный способ решения уравнений -- преобразования. Над системой линейных уравнений применяют следующие
преобразования.

\begin{Def}
Элементарными преобразованиями называются:
\begin{enumerate}
\item Поменять местами два уравнения
\item Прибавить одно уравнение, домноженное на коэффициент, к другому
\item Умножить уравнение на ненулевое число
\end{enumerate}
\end{Def}

\begin{Rem}
Действие элементарного преобразования можно обратить ещё одним элементарным преобразованием.
\end{Rem}

Смысл преобразований над системой уравнений заключается в том, что можно контролировать множество решений. В
случае систем линейных уравнений элементарные преобразования позволяют вообще не задумываться о множестве решений.

\begin{Thm}
Если одна система линейных уравнений получается из другой с помощью одного из элементарных преобразований, то
системы эквивалентны.

\begin{Tip}
Явным образом показать, что решение одной системы является решением другой.
\end{Tip}
\end{Thm}

Естественно, можно применять несколько элементарных преобразований подряд, и таким образом приводить систему к
такому виду, в котором её легко анализировать.
\end{unit}

\begin{unit}
\begin{Thm}
Всякую систему линейных уравнений (или соответствующую ей матрицу) можно привести к ступенчатому виду.
\end{Thm}

\begin{Thm}
Для совместности системы линейных уравнений необходимо и достаточно, чтобы после приведения к ступенчатому виду в
ней не оказалось уравнений вида $0 = b$ с $b \neq 0$. Если это условие выполнено, то свободным неизвестным можно
придать произвольные значения; главные неизвестные (при заданных значениях для свободных) однозначно определяются
из системы.

\begin{Tip}
Алгоритм Гаусса
\end{Tip}
\end{Thm}

Число главных неизвестных равно числу ненулевых строк (каждый шаг порождает строку и главную неизвестную)

Если свободных переменных нет, то решение определяется однозначно.

У однородной системы всегда есть нулевое решение.

Если $m = n$, то система определена тогда и только тогда, когда после приведения к ступенчатому виду на диагонале
стоят ненулевые числа. Это условие не зависит от правых частей системы.

Если неизвестных больше чем уравнений, то система окажется неопределенной или несовместной. 
\end{unit}

\begin{unit}
Матричное уравнение -- с какими коэффициентами нужно сложить столбцы, чтобы получить данный вектор $b$.

Ранг матрицы.

Ранг не меняется от применения элементарного преобразования.

Число главных неизвестных линейной системы не зависит от способа приведения её к ступенчатому виду и равно
$rank\ A$, где $A$ — матрица системы.

\begin{Thm}{Кронекер—Капелли}
Система линейных уравнений $Ax = b$ имеет решение тогда и только тогда, когда ранг её матрицы,
совпадает с рангом расширенной матрицы.
\end{Thm}

Алгоритм получения всей линейной оболочки данного набора векторов!!!
\end{unit}