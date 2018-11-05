\begin{unit}
\begin{Def}
Пусть $F$ -- произвольное поле. Векторным (или линейным) пространством над $F$ называется множество $V$
элементов (именуемых векторами) с операцией $V \times V \rightarrow V$, наделяющей $V$ строением абелевой
группы, и операций $F \times V \rightarrow V$, удовлетворяющей следующим аксиомам:
\begin{enumerate}
\item $1 \cdot x = x$
\item $(\alpha \beta) x = \alpha (\beta x)$
\item $(\alpha + \beta) x = \alpha x + \beta x$
\item $\lambda (x + y) = \lambda x + \lambda y$
\end{enumerate}
\end{Def}

\begin{Clm}
Всякое векторное пространство $V$ обладает следующими свойствами:
\begin{enumerate}
\item $0 \vec{x} = \lambda \vec{0} = \vec{0}$
\item $\lambda \vec{x} = \vec{0} \Rightarrow \lambda = 0 \lor \vec{x} = 0$
\item $\forall n \in \N: (n \cdot 1)\vec{x} = \sum\limits^{n}{\vec{x}}$
\item $(-1)\vec{x} = -\vec{x}$
\end{enumerate}
\end{Clm}
\end{unit}

\begin{unit}

\begin{Def}
Подмножество векторов $U$ векторного пространства $V$ называется векторным подпространством, если операции над
векторами из $U$ возвращают вектора из $U$. Иными словами $\forall u_{1}, u_{2} \in U\ \alpha, \beta \in F:\ 
\alpha u_{1} + \beta u_{2} \in U$.
\end{Def}

\begin{Thm}
Пересечение любого числа векторных подпространств также является векторным подпространством.

\begin{Proof}
Если элементы принадлежат каждому подпространству, то их линейная комбинация тоже принадлежит каждому
подпространству, а значит и их пересечению.
\end{Proof}
\end{Thm}

Пусть есть некоторый набор векторов $S$, возможно бесконечный. Было бы хорошо знать, в каком подпространстве
они лежат. Можно начать комбинировать вектора друг с другом, так как комбинации обязательно должны лежать в
подпространстве, которое содержит $S$. Но встает вопрос, когда остановить процесс. Оказывается, что остановить
его нужно сразу же.

\begin{Def}
Пусть есть набор векторов $S$. Линейной оболочкой векторов $S$ называется множество
$\angled{S} = \set{\sum\limits_{i = 1}^{n}{\alpha_{i} v_{i}}}{v_{i} \in V, \alpha_{i} \in F, n \in \N}$. То есть
множество всевозможных конечных линейных комбинаций векторов из $S$.
\end{Def}

\begin{Thm}
$\angled{S}$ является подпространством для всего пространства $V$.

\begin{Proof}
Если взять комбинацию двух конечных комбинаций, то получится конечная комбинация.
\end{Proof}
\end{Thm}


\begin{Clm}
Если $U$ -- подпространство, то $\angled{U} = U$.

\begin{Proof}
Линейные комбинации не выводят из подпространства.
\end{Proof}
\end{Clm}

\begin{Clm}
Если $S \subset T$, то $\angled{S} \subset \angled{T}$.

\begin{Proof}
Любая комбинация векторов из $S$ будет линейной комбинацией векторов из $T$.
\end{Proof}
\end{Clm}

Пусть теперь $U$ -- подпространство и $S \subset U$. Тогда, согласно предыдущим утверждениям,
$\angled{S} \subset \angled{U} = U$.
Получается, что $\angled{S}$ есть наименьшее подпространство, которое содержит $S$, так как все остальные
подпространства, содержащие $S$, содержат $\angled{S}$.

\begin{Clm}
Линейная оболочка множества векторов $S$ не изменится, если один из векторов $S$ домножить на ненулевой скаляр
или прибавить к одному из векторов $S$ другой вектор из $S$ с некоторым коэффициентом.

\begin{Tip}
Следует из того факта, что данные преобразования обратимы.
\end{Tip}
\end{Clm}

\begin{Rem}
Преобразования из предыдущего утверждеиня иногда называют элементарными.
\end{Rem}
\end{unit}