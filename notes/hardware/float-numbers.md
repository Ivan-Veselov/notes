\begin{unit}
У представления вещественного числа в типе float фиксирована относительная погрешность.

Если вычитать два почти одинаковых числа, то порядок результата будет сильно меньше порядка аргументов. Это
влечет к тому, что наименее значащие биты (которые содержат большую ошибку) станут старшими, а значит общая
относительная ошибка сильно возрастет.

Регистры FPU могут былее точными (long double). Результаты операций могут оставаться на FPU и переиспользоваться.
А могут и сбрасываться. Поэтому иногда результаты одних и тех же вычислений могут отличаться.
\end{unit}