\begin{unit}
Возникает идея решения задачи обратной к задаче дифференцирования.

\begin{Def}
$\funcdef{f}{\angled{a, b}}{\R}$. $\funcdef{F}{\angled{a, b}}{\R}$ --- дифференцируемая на $\angled{a, b}$ функция.
$F$ называется первообразной $f$, если $\forall x \in \angled{a, b}: F'(x) = f(x)$.
\end{Def}

Забегая вперед, можно отметить, что верно следующее утверждение.

\begin{Thm}
У всякой непрерывной функции $\funcdef{f}{\angled{a, b}}{\R}$ существует превообразная.
\end{Thm}

Однако не стоит настраиваться слишком оптимистично, не всякая функция имеет первообразную.
\end{unit}

\begin{unit}
Все первообразные некоторой функции очень сильно связаны друг с другом. Это иллюстрирует следующее утверждение.

\begin{Thm}
Пусть у функции $\funcdef{f}{\angled{a, b}}{\R}$ существует первообразная $F$. Тогда множество всех первообразных
функции $f$ совпадает с множеством $\set{F + C}{C \in \R} =: F + C$.

\begin{Proof}
Простые свойства производной и теорема Лагранжа.
\end{Proof}
\end{Thm}

\begin{Def}
Неопределенным интегралом функции $f$ называется множество всех её первообразных. Неопределенный интеграл
обозначается $\int{f(x)dx}$.
\end{Def}
\end{unit}

\begin{unit}
Изучение интегралов не было бы таким значимым, если не были бы верны следующие утверждения.

\begin{Thm}[О линейности неопределенного интеграла]
$\funcdef{f, g}{\angled{a, b}}{\R}$ --- интегрируемые функции. Тогда

\begin{enumerate}
    \item $f \pm g$ --- интегрируема и $\int{\braced{f \pm g}} = \int{f} \pm \int{g}$
    
    \item $\alpha \neq 0, \alpha f$ --- интегрируема и $\int{\alpha f} = \alpha\int{f}$
\end{enumerate}

\begin{Proof}
Простые свойства производной и определения интеграла.
\end{Proof}
\end{Thm}

\begin{Thm}[Замена переменной]
$\funcdef{f}{\angled{a, b}}{\R}$, $F$ --- первообразная $f$, $\funcdef{\varphi}{\angled{c, d}}{\angled{a, b}}$ ---
дифференцируемая функция. Тогда $$\int{f(\varphi(x))\varphi'(x)dx} = F(\varphi(x)) + C$$

\begin{Proof}
Формула производной от композиции функций.
\end{Proof} 
\end{Thm}

\begin{Lm}
$\funcdef{f, g}{\angled{a, b}}{\R}$ --- дифференцируемые функции. Если $fg'$ --- интегрируемая функция, то
$f'g$ --- тоже интегрируемая функция. 
\end{Lm}

\begin{Thm}[Формула интегрирования по частям]
$\funcdef{f, g}{\angled{a, b}}{\R}$ --- дифференцируемые функции. Тогда
$$\int{f(x)g'(x)dx} = f(x)g(x) - \int{f'(x)g(x)dx}$$

\begin{Proof}
Формула производной от произведения функций. Также является доказательством леммы.
\end{Proof}
\end{Thm}

Лемма позволяет применять теорему без каких-либо дополнительных условий.
\end{unit}