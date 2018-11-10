\begin{unit}
\begin{Def}
Пусть $V, W$ -- векторные пространства размерностей $m$ и $n$ над одним и тем же полем $F$. Отображение
$\funcdef{f}{V}{W}$ называется линейным, если
$$\forall u, v \in V, \forall \alpha, \beta \in F: f(\alpha u + \beta v) = \alpha f(u) + \beta f(v)$$
\end{Def}

\begin{Thm}
Совокупность всех линейных отображений из $V$ в $W$ образует векторное пространство. В частности, линейная
комбинация линейных отображений является линейным отображением.

\begin{Tip}
Простое следствие из определений.
\end{Tip}
\end{Thm}

\begin{Def}
Ядром линейного отображения $f$ называется $\vker{f} = \set{v \in V}{f(v) = 0}$.
\end{Def}

\begin{Thm}
$\vker{f}$ является векторным подпространством $V$.

\begin{Proof}
$\forall u, v \in \vker{f}, \forall \alpha, \beta \in F: f(\alpha u + \beta v) = \alpha f(u) + \beta f(v) = 0$
\end{Proof}
\end{Thm}

\begin{Thm}
Линейное отображение $f$ инъективно $\Leftrightarrow$ $\vker{f} = \{0\}$.

\begin{Proof}
$f(u) \neq f(v) \Leftrightarrow f(u - v) \neq 0$
\end{Proof}
\end{Thm}

\begin{Thm}
Если $U$ -- подпространство в $V$, то $f(U)$ является подпространством $W$. В частности, $\im{f} = f(V)$
является подпространством.

\begin{Proof}
$\alpha f(u) + \beta f(v) = f(\alpha u + \beta v) \in f(U)$
\end{Proof}
\end{Thm}

\begin{Thm}
Пусть $\funcdef{f}{V}{W}$ -- линейное отображение. Если $U = \angled{e_{1}, e_{2}, \dots, e_{s}}$, то
$f(U) = \angled{f(e_{1}), f(e_{2}), \dots, f(e_{s})}$. В частности
$$\vdim{f(U)} \leq \vdim{U}$$
\end{Thm}

\begin{Thm}
Пусть $V$ — конечномерное векторное пространство над полем $F$, $\funcdef{f}{V}{W}$ -- линейное отображение. Тогда
$\vker{f}$ и $\im{f}$ конечномерны и
$$\vdim{\vker{f}} + \vdim{\im{f}} = \vdim{V}$$

\begin{Tip}
Дополнить базис ядра до базиса всего $V$.
\end{Tip}
\end{Thm}

Как следствие вытекает утверждение.

\begin{Clm}
В случае $\vdim{V} < \infty$ для линейного отображения $\funcdef{f}{V}{W}$ верно, что
$$f\ \text{инъективно} \Leftrightarrow \vdim{V} = \vdim{\im{f}}$$
\end{Clm}

В частности, если $\vdim{V} = \vdim{W}$, то из инъективности или сюръективности $f$ сразу же следует биективность. 
\end{unit}

