# Функциональный анализ (6 семестр)
<a class="btn btn-danger" href="https://github.com/egormkn/ifmo-kt/raw/master/course3/func_analysis/conspect.pdf"><i class="fa fa-file-pdf-o fa-fw"></i> Скачать PDF</a> <a class="btn btn-primary" href="https://hackmd.io/s/SkM5FFMW7"><i class="fa fa-file-text-o fa-fw"></i> Открыть на HackMD</a>

###### tags: `year2015`

## Ссылки

[Жолус]: https://artemzholus.github.io/funcan/build/main.pdf
[Дина]: https://vk.com/doc31634713_446533471?hash=d561ab909c82f23bea&dl=1853f4b376d45d4369
[Аня]: https://vk.com/doc49231753_446638241?hash=b519258cf8b32cc48e&dl=a690%D0%B3440ef0b18b36e5
[Рома]: https://drive.google.com/drive/folders/1YZ5Rc-zMyPI3XS5_DMAY8mptXiEkjHx8?usp=sharing
[МГУ]: http://dmvn.mexmat.net/content/fcalculus/functionalcalculus-5s-stepin.pdf
[ВШЭ]: http://www.mi-ras.ru/noc/13_14/2/sergeev/funkan.pdf
[Додонов]: https://github.com/egormkn/ifmo-kt/raw/master/course3/func_analysis/funscan.pdf

### [Конспект][Жолус] + [теормин](https://artemzholus.github.io/funcan/build/teormin.pdf) от Артёма Жолуса:

- [Линейные операторы в банаховых пространствах](https://artemzholus.github.io/funcan/build/main.pdf#section.1)
  - [Сопряженный оператор](https://artemzholus.github.io/funcan/build/main.pdf#subsection.1.1)
  - [Ортогональное дополнение в банаховых пространствах](https://artemzholus.github.io/funcan/build/main.pdf#subsection.1.2)
- [Элементы спектральной теории линейных операторов](https://artemzholus.github.io/funcan/build/main.pdf#subsection.2)
  - [Определение спектра и резольвенты оператора](https://artemzholus.github.io/funcan/build/main.pdf#subsection.2.1)
  - [Альтернатива Фредгольма-Шаудера](https://artemzholus.github.io/funcan/build/main.pdf#subsection.2.2)
- [Теорема Гильберта-Шмидта](https://artemzholus.github.io/funcan/build/main.pdf#subsection.3)

### Конспекты: [💾](https://yadi.sk/i/08SitNXq3Xz6Z6) [Дина], [💾](https://yadi.sk/i/g7WkJ8Hf3Xz6ZB) [Аня], [💾](https://yadi.sk/i/36F3L97w3Xz8AK) [Рома]

### Гуглодоки: [5 семестр](https://docs.google.com/spreadsheets/d/1o8Yns2-mlQdk42MF2nh5AUPiUwMM2UdVF5QUAYjCUzc/edit) + [6 семестр](https://docs.google.com/spreadsheets/d/1AZiVaeEG9YkUNZdOyWUSc34xzAeuYVVBCEGYXnGJTmU/edit)

### Викиконспекты: [Функциональный анализ](http://neerc.ifmo.ru/wiki/index.php?title=%D0%A4%D1%83%D0%BD%D0%BA%D1%86%D0%B8%D0%BE%D0%BD%D0%B0%D0%BB%D1%8C%D0%BD%D1%8B%D0%B9_%D0%B0%D0%BD%D0%B0%D0%BB%D0%B8%D0%B7_3_%D0%BA%D1%83%D1%80%D1%81) + [теормин](http://neerc.ifmo.ru/wiki/index.php?title=Теоретический_минимум_по_функциональному_анализу_за_6_семестр) + [ещё конспект](http://neerc.ifmo.ru/wiki/index.php?title=Функциональный_анализ)

### Полезное: лекции [МГУ], [ВШЭ]

---

## Напоминания

**Векторное (или линейное) пространство** --- набор векторов, для которых определены операции сложения и умножения на скаляр + 8 аксиом.

**Метрическое пространство** --- множество с метрикой $(X, \ \rho : X \times X \to \mathbb{R})$.

**Полное метрическое пространство** --- метрическое пространство, в котором каждая фундаментальная последовательность ($\{x_n\} : \rho(x_i, x_j) \to 0$) сходится к элементу этого же пространства.

**Нормированное пространство** --- векторное пространство с нормой.

**Банахово пространство** --- нормированное векторное пространство $B = (X, \|\cdot\|)$, полное по метрике, порождённой нормой.

**Евклидово/Унитарное пространство** --- векторное пространство над $\mathbb{R}/\mathbb{C}$ с определенным скалярным произведением.

**Сепарабельное пространство** --- пространство $(X, T)$, в котором есть счетное всюду плотное подпространство $E : Cl(E) = X$.

**Гильбертово пространство** --- унитарное пространство $H$, полное по метрике, порожденной нормой.

**Компактное пространство** --- топологическое пространство, в любом покрытии которого открытыми множествами найдётся конечное подпокрытие.

Множество **относительно компактно**, если его замыкание компактно.

Пусть $X$ --- метрическое пространство, $A$, $B$ --- множества, $\varepsilon > 0$. Тогда $A$ называется **$\varepsilon$-сетью** для $B$, если $\forall b \in B \ \ \exists a \in A: \rho(a, b) < \varepsilon$.

Метрическое пространство $X$ **вполне ограничено**, если для каждого $\varepsilon > 0$ в $X$ существует конечная $\varepsilon$-сеть.

Пусть $X$ --- полное метрическое пространство, $E \subset X$. Тогда $E$ -- вполне ограничено $\Leftrightarrow$ $E$ -- относительно компактно.

**Линейный оператор** --- отображение $A: X \to Y$, такое что $\forall \alpha, \beta \in \mathbb{R} : A(\alpha x_1 + \beta x_2) = \alpha A(x_1) + \beta A(x_2)$

**Множество значений оператора** --- $R(A) := \{ Ax \ | \ x \in X \}$

$L(X,Y)$ --- нормированное пространство ограниченных линейных операторов из $X$ в $Y$, где **норма линейного оператора** --- это $\|A\| = \sup\limits_{\|x\| \leq 1}{\|Ax\|}$.

Линейный оператор $A : X \to Y$ в нормированном пространстве называется **ограниченным**, если существует такое число $C > 0$, что $\|Ax\| \le C\|x\|$

Оператор $A^{-1}$ называется **обратным** к оператору $A$, если $AA^{-1} = A^{-1}A = I$, где $I : Ix = x$ --- единичный оператор. Если выполняется только соотношение $A^{-1}A = I$ или только $AA^{-1} = I$, то оператор $A^{-1}$ называется **левым обратным** или **правым обратным** соответственно. Если оператор $A$ имеет левый обратный и правый обратный и они равны между собой, то оператор $A$ является **обратимым**.

$X^* := L(X, \mathbb{R}) = \{ f: X \xrightarrow[\text{непр}]{\text{лин}} \mathbb{R} \}$ -- **сопряженное пространство** к $X$ (над $\mathbb{R}$). Сопряжённое пространство всегда является банаховым пространством.

**Равномерная сходимость** --- $\lim\limits_{n\to \infty}\sup\limits_{x\in X}\left|f_{n}(x)-f(x)\right|=0$.

Пусть $L$ --- линейное пространство. **Собственным вектором** линейного преобразования $A : L \to L$ называется такой ненулевой вектор $x\in L$, что для некоторого $\lambda \in K$ выполняется равенство $Ax=\lambda x$.

**Ортогональный (ортонормированный) базис** --- ортогональная (ортонормированная) система элементов линейного пространства со скалярным произведением, обладающая свойством полноты.

**Лемма Рисса**
Пусть $Y$ --- нормированное пространство, $X$ --- его собственное подпространство ($X ⊊ Y$). Тогда для любого $0 < \varepsilon < 1$ существует точка $z_\varepsilon  : \|z_\varepsilon\| = 1, \ p(z_\varepsilon, X) \ge 1-\varepsilon$

**Теорема Банаха о гомеоморфизме**
Пусть $A:X \to Y$ --- ограниченный линейный оператор, причем осуществляющий биекцию, тогда $A^{−1}$ --- ограниченный линейный оператор.

**Полунорма** --- норма, которая может быть равна нулю на ненулевых точках.

**Теорема Хана-Банаха и следствия**
Пусть $X,Y$ - линейные многообразия над полем $\mathbb{R}$ такие, что $X \subset Y$, $p(y)$ -- полунорма на $Y$, $f: X \to \mathbb{R}$ -- линейный функционал, $|f(x)| \leq p(x)$ на $X$. Тогда существует линейный функционал $g: Y \to \mathbb{R}$, такой что:
1) $g|_X = f$ (сужение линейного функционала $g$ на $X$ равно $f$)
2) $|g(y)| \le p(y)$ на $Y$

---

## Билеты

> ✅ -- готов
> ❎ -- не готов
> ℹ️ -- только формулировки 
> 💜 -- проходили, но в билеты не включено
> 🈹 -- было у прошлых курсов
> 🔄 -- требует обновления/проверки

:::info
Если не оговорено иного, считаем, что мы находимся в $B$-пространствах.
:::

### ✅ 1. Норма сопряженного оператора

Введём на $X^*$ норму как **норму линейного функционала**: $\|A\| = \sup\limits_{\|x\| \leq 1}{\|Ax\|}$.

Пусть $X, Y$ - нормированные пространства, $A \in L(X, Y)$ - линейный ограниченный оператор: $X \to Y$, $\varphi \in Y^∗$. Рассмотрим $f(x) = \varphi(Ax)$, $|f(x)| \le \|\varphi\| \|A\| \|x\|$, $f \in X^*$.
Тогда **сопряженный оператор** к $A$ это $A^∗(\varphi):= \varphi \circ A$, где $A^* : Y^* \to X^*$.

**Утверждение**: Если $A$ непрерывный, то $A^∗$ тоже непрерывный.

**Теорема**: $\|A^*\| = \|A\|$

**Доказательство**:
- **[Жолус]**: Теорема 1.2
- [Дина]: 1 стр.

### 💜 1.5. Общий вид линейных функционалов в пространстве Гильберта

**Теорема (Рисс)**
Пусть $H$ -- гильбертово пространство. Тогда $\forall f \in H^∗$, $f$ можно представить как $f(x) = \langle x, y \rangle$, где $y \in H$ -- единственна, $\|f\| = \|y\|$.

**Доказательство**: 
- **[Жолус]**: Теорема 1.3
- [Дина]: 3 стр.
- [МГУ]: 6 стр.

### ✅ 2. Ортогональные дополнения $Х$ и $Х^*$

Пусть $S \subset X$. **Ортогональное дополнение** в $B$-пространстве это $S^\perp := \{ f \ | \ f \in X^∗, \forall x \in S \Rightarrow f(x) = 0 \}$.

Пусть $S \subset X^∗$. **Ортогональное дополнение** в сопряженном пространстве это $S^\perp := \{ x \ | \ x \in X, \forall f \in S \Rightarrow f(x) = 0 \}$.

**Теорема**: $X^\perp = X^{*\perp} = \{ 0 \}$	

**Доказательство**: 
- **[Жолус]**: Утверждение 1.4
- [Дина]: 5 стр.

### ✅ 3. Ортогональное дополнение $Ker(A^*)$

Пусть $A \in L(X, Y)$. 
$Ker\ A = \{ x: Ax = 0 \}$ -- **ядро оператора** $A$
$R(A) := \{ Ax \ | \ x \in X \}$ -- **множество значений оператора** $A$.

**Теорема**: $Cl\ R(A) = (Ker\ A^∗ )^\perp$

**Доказательство**: 
- **[Жолус]**: Теорема 1.5
- [Дина]: 6 стр.

### ✅ 4. Ортогональное дополнение $Ker(A)$

**Теорема**: $R(A^∗) = (Ker\ A)^\perp$, если $R(A)$ замкнуто.

**Доказательство**: 
- **[Жолус]**: Теорема 1.6
- [Дина]: 7-8 стр.

### ✅ 5. Априорная оценка решения $y=Ax$ и замкнутость $R(A)$

Пусть $A : X \to Y$ -- линейный оператор и $\exists \alpha = const : \|x\| \leq \alpha * \|y\|$, где $y = Ax$.

Коэффициент $\alpha$ называется **априорной оценкой** решения операторного уравнения.

**Теорема**: Если $A$ -- линейный оператор, такой что для уравнения $y = Ax$ существует априорная оценка, то $R(A)$ -- замкнуто.

**Доказательство**:
- **[Жолус]**: Теорема 1.7
- [Дина]: 8 стр.

### ✅ 6. Определение спектра и резольвенты, замкнутость спектра

$I : Ix = x$ --- **тождественный оператор**

**Регулярная точка** оператора $A$ --- это такая  $\lambda \in \mathbb{C}$, что оператор $\lambda I − A$ непрерывно обратим (то есть $(\lambda I - A)^{-1}$ непрерывен).

**Резольвента** --- $\rho(A) = \{ \lambda \in \mathbb{C} \ | \ \lambda$ -- регулярная точка $A \}$

**Резольветный оператор** --- $R_\lambda(A) = (\lambda I − A)^{-1}$

**Спектр оператора** --- $\sigma(A) = \mathbb{C} \setminus \rho(A)$

**Утверждение**: $\rho(A)$ является открытым в $\mathbb{C}$.
**Следствие**: $\sigma(A)$ является замкнутым в $\mathbb{C}$.

**Доказательство**:
- **[Жолус]**: Утверждение 2.1 и Следствие 2.2
- [Викиконспекты](http://neerc.ifmo.ru/wiki/index.php?title=%D0%A1%D0%BF%D0%B5%D0%BA%D1%82%D1%80_%D0%BB%D0%B8%D0%BD%D0%B5%D0%B9%D0%BD%D0%BE%D0%B3%D0%BE_%D0%BE%D0%BF%D0%B5%D1%80%D0%B0%D1%82%D0%BE%D1%80%D0%B0) ([скриншот](https://i.imgur.com/msnxjjZ.png))
- [Дина]: 10 стр.

### ✅ 7. Спектральный радиус и его вычисление

**Спектральный радиус:** $r_\sigma(A) := \sup\limits_{\lambda \in \sigma(A)} |\lambda|$

Эквивалентное определение: $r_\sigma(A) := \inf\limits_{n \in \mathbb{N}} \sqrt[n]{(\|A^n\|)}$

**Теорема**: $r_\sigma(A) = \lim\limits_{n \to \infty}\sqrt[n]{(\|A^n\|)}$

**Доказательство**:
- **[Викиконспекты](http://neerc.ifmo.ru/wiki/index.php?title=%D0%A1%D0%BF%D0%B5%D0%BA%D1%82%D1%80_%D0%BB%D0%B8%D0%BD%D0%B5%D0%B9%D0%BD%D0%BE%D0%B3%D0%BE_%D0%BE%D0%BF%D0%B5%D1%80%D0%B0%D1%82%D0%BE%D1%80%D0%B0)** ([скриншот](https://i.imgur.com/D7oM9AX.png))
- [Жолус]: Утверждение 2.4
- [Дина]: 11-12 стр.
- [Рома]: 5-7 стр.
- [Аня]: 9-11 стр.

### ✅ 8. Оценка протяженности спектра через спектральный радиус

**Утверждение**: $\sigma(A) \subset \{ \lambda : |\lambda| \leq r_\sigma(A) \}$

**Доказательство**:
- **[Жолус]**: Теорема 2.5
- [Викиконспекты](http://neerc.ifmo.ru/wiki/index.php?title=%D0%A1%D0%BF%D0%B5%D0%BA%D1%82%D1%80_%D0%BB%D0%B8%D0%BD%D0%B5%D0%B9%D0%BD%D0%BE%D0%B3%D0%BE_%D0%BE%D0%BF%D0%B5%D1%80%D0%B0%D1%82%D0%BE%D1%80%D0%B0) ([скриншот](https://i.imgur.com/jiUAMU8.png))

### ✅ 9. Аналитичность резольвенты

Тождество Гильберта (+ [доказательство](https://i.imgur.com/G72BKjX.png)): $R_\lambda(A) - R_\mu(A) = (\lambda - \mu) * R_\lambda(A) * R_\mu(A)$

**Утверждение**: $R_\lambda(A)$, как функция из комплексного числа в ограниченный оператор, аналитична в $\rho(A)$ и в бесконечно удаленной точке комплексной плоскости. 

**Доказательство**:
*Примечание*: в доказательстве рассматривается **аналитичность по Вейерштрассу** (в окрестности точки $\lambda$ функция раскладывается в степенной ряд).
- **[Викиконспекты](http://neerc.ifmo.ru/wiki/index.php?title=%D0%A1%D0%BF%D0%B5%D0%BA%D1%82%D1%80_%D0%BB%D0%B8%D0%BD%D0%B5%D0%B9%D0%BD%D0%BE%D0%B3%D0%BE_%D0%BE%D0%BF%D0%B5%D1%80%D0%B0%D1%82%D0%BE%D1%80%D0%B0)** ([скриншот](https://i.imgur.com/xXQVZmX.png))
- [Аня]: 9-10 стр.


### ✅ 10. Непустота спектра ограниченного линейного оператора

**Теорема**: Если оператор $A$ ограничен, то $\sigma(A) \neq \varnothing$.

**Доказательство**:
- **[Викиконспекты](http://neerc.ifmo.ru/wiki/index.php?title=%D0%A1%D0%BF%D0%B5%D0%BA%D1%82%D1%80_%D0%BB%D0%B8%D0%BD%D0%B5%D0%B9%D0%BD%D0%BE%D0%B3%D0%BE_%D0%BE%D0%BF%D0%B5%D1%80%D0%B0%D1%82%D0%BE%D1%80%D0%B0)** ([скриншот](https://i.imgur.com/k9IjoRD.png))
- [Дина]: 11 стр. (нет доказательства)

### ✅ 11. Теорема об отображении спектра полиномом

**Лемма**: $P(A)$ - непрерывно обратим $\Leftrightarrow 0 \not\in P(\sigma(A))$

**Теорема**: $P(\sigma(A)) = \sigma(P(A))$ для произвольного полинома $P$.
*Примечание*: под действием полинома на множество понимается поточечное применение: $P(S) = \{ P(x) \ | \ x \in S \}$

**Доказательство**:
- **[Додонов]**: 1-2 стр.
- **[Жолус]**: Теорема 2.6
- [Дина]: 13 стр.

### ✅ 12. Элементарные свойства линейных компактных операторов (произведение ограниченного и компактного операторов, равномерный предел последовательности компактных операторов)

Оператор $A : X \to Y$ называется **компактным** (или вполне непрерывным), если он каждое ограниченное множество переводит в относительно компактное (т.е. $\forall M$ -- ограниченного множества, $Cl\ A(M)$ -- компактно).

**Утверждение**: Пусть $A$ -- компактный оператор, $B$ -- ограниченный оператор. Тогда $AB$ и $BA$ - компактные операторы.

**Доказательство**:
- **[Додонов]**: 3-4 стр.
- [Жолус]: Утверждение 2.8
- [Дина]: 16 стр.
- [Рома]: 7-8 стр.
- [Аня]: 16-17 стр.
 
**Утверждение**: $A_n$ -- компактные, $A_n \xrightarrow{\text{равн}} A$ в $L(X,Y)$ $\Rightarrow$ $A$ -- компактный.

**Доказательство**:
- **[Додонов]**: 3-4 стр.

### ✅ 13. Компактность оператора, сопряженного с компактным оператором

**Утверждение**: $A$ -- компактный, тогда  $A^*$ -- тоже компактный.

**Доказательство**:
- **[Викиконспекты](https://neerc.ifmo.ru/wiki/index.php?title=%D0%9A%D0%BE%D0%BC%D0%BF%D0%B0%D0%BA%D1%82%D0%BD%D1%8B%D0%B9_%D0%BE%D0%BF%D0%B5%D1%80%D0%B0%D1%82%D0%BE%D1%80#.D0.9A.D0.BE.D0.BC.D0.BF.D0.B0.D0.BA.D1.82.D0.BD.D0.BE.D1.81.D1.82.D1.8C_.D1.81.D0.BE.D0.BF.D1.80.D1.8F.D0.B6.D0.B5.D0.BD.D0.BD.D0.BE.D0.B3.D0.BE_.D0.BE.D0.BF.D0.B5.D1.80.D0.B0.D1.82.D0.BE.D1.80.D0.B0)** ([скриншот](https://pp.userapi.com/c849520/v849520105/8068/4VsFl8wO258.jpg))
- [Рома]: 9 стр.
- [Аня]: 27 стр.

### ✅ 14. Базис Шаудера, координатное пространство

$X$ - бесконечномерное $B$-пространство, $e_1, e_2 \ldots e_n, \ldots$ - линейно-независимые точки, такие, что любой $x \in X$ единственным образом представим в виде $x = \sum_{i=1}^\infty a_i e_i$, тогда $\{e_i\}$ --- **базис Шаудера**.

Следует помнить, что не у любого $B$-пространства есть базис, но большинство типов пространств, например, $C[a, b]$, его имеет.

Определим $F$, как $\{\alpha=(\alpha_1 \ldots \alpha_n \ldots) ∣ \exists x \in X : \sum_{i=1}^\infty \alpha_i e_i \to x\}$ — это линейное пространство.

Так как ряд сходится, можно определить **координатное пространство** $F$, состоящее из числовых последовательностей $\alpha=(\alpha_1 \ldots \alpha_n \ldots)$, определив норму как $\|\alpha\| = \sup\limits_n \|\sum_{i=1}^n \alpha_i e_i\|$.

**Теорема:** Координатное пространство $F$ — банахово. 

**Доказательство**:
- **[Додонов]**: 5-6 стр.
- [Викиконспекты](https://neerc.ifmo.ru/wiki/index.php?title=%D0%91%D0%B0%D0%B7%D0%B8%D1%81_%D0%A8%D0%B0%D1%83%D0%B4%D0%B5%D1%80%D0%B0) (не полное)
- [Дина]: 16-17 стр.(нет доказательства)
- [Аня]: 18 стр.(нет доказательства)


### ✅ 15. Почти конечномерность компактного оператора в пространстве с базисом Шаудера
Оператор $A$ **конечномерный**, если $R(A)$ лежит в конечномерном пространстве.

Пусть $X$ банахово и имеет базис Шаудера, $A : X \to X$ компактный, тогда в $X$ существует последовательность конечномерных операторов $B_n$ таких, что $\| B_n - A \| \rightarrow 0$

**Доказательство**:
- **[Додонов]**: 7-8 стр.
- [Викиконспекты](https://neerc.ifmo.ru/wiki/index.php?title=%D0%91%D0%B0%D0%B7%D0%B8%D1%81_%D0%A8%D0%B0%D1%83%D0%B4%D0%B5%D1%80%D0%B0) 
- [Дина]: 17 стр.

### ✅ 16. Размерность $Ker(I-A)$, где $A$ -- компактный оператор
**Теорема**: $A$ - компактный, $T = I - A$. Тогда $dim(Ker\ T) < +\infty$

**Доказательство**: 
- **[Жолус]**: Утверждение 2.12 

*Примечание*: последний переход в доказательстве осуществляется за счет применения леммы Рисса, что если $X$ - бесконечномерное НП, то любой шар в нем -- не компакт.

### ✅ 17. Замкнутость $R(I-A)$, где $А$ -- компактный оператор

**Теорема**: $A$ - компактный, $T=I−A$, тогда $R(T)$ замкнуто, т.е $Cl\ R(T) = R(T)$.

**Доказательство**: 
- **[Викиконспекты](https://neerc.ifmo.ru/wiki/index.php?title=%D0%90%D0%BB%D1%8C%D1%82%D0%B5%D1%80%D0%BD%D0%B0%D1%82%D0%B8%D0%B2%D0%B0_%D0%A4%D1%80%D0%B5%D0%B4%D0%B3%D0%BE%D0%BB%D1%8C%D0%BC%D0%B0_%E2%80%94_%D0%A8%D0%B0%D1%83%D0%B4%D0%B5%D1%80%D0%B0)** ([скриншот](https://i.imgur.com/WOBlTuI.png))
- [Жолус]: Теорема 2.13 (не дописанное доказательство)

### ✅ 18. Существование $N$, начиная с которого $Ker(I-A)^n=Ker(I-A)^{n+1}$, где $А$ -- компактный оператор

**Утверждение**: Пусть $M_n= Ker((I−A)^n)$, $n \in \mathbb{N}$, $A$ -- компактный оператор. Тогда $\exists n_0 : M_{n_0} = M_{n_0 + 1}$.

**Доказательство**: 
- **[Викиконспекты](https://neerc.ifmo.ru/wiki/index.php?title=%D0%90%D0%BB%D1%8C%D1%82%D0%B5%D1%80%D0%BD%D0%B0%D1%82%D0%B8%D0%B2%D0%B0_%D0%A4%D1%80%D0%B5%D0%B4%D0%B3%D0%BE%D0%BB%D1%8C%D0%BC%D0%B0_%E2%80%94_%D0%A8%D0%B0%D1%83%D0%B4%D0%B5%D1%80%D0%B0)** ([скриншот](https://pp.userapi.com/c848532/v848532048/8baf/35YB3e2L2vY.jpg))

### ✅ 19. Критерий равенства $R(I-A)=X$, где $А$ -- компактный оператор

**Утверждение**: Пусть $A$ -- компактный оператор на банаховом $X$, $T=I−A$. Тогда $R(T)=X \Leftrightarrow Ker(T)=\{0\}$.

**Доказательство**:
- **[Викиконспекты](https://neerc.ifmo.ru/wiki/index.php?title=%D0%90%D0%BB%D1%8C%D1%82%D0%B5%D1%80%D0%BD%D0%B0%D1%82%D0%B8%D0%B2%D0%B0_%D0%A4%D1%80%D0%B5%D0%B4%D0%B3%D0%BE%D0%BB%D1%8C%D0%BC%D0%B0_%E2%80%94_%D0%A8%D0%B0%D1%83%D0%B4%D0%B5%D1%80%D0%B0)** ([скриншот](https://pp.userapi.com/c848532/v848532048/8c42/MbuFQgkGC9Q.jpg))
*Примечание*: предыдущее утверждение из доказательства -- это утверждение из 18 билета.

### ✅ 20. Альтернатива Фредгольма-Шаудера

**Теорема**: Пусть $A : X \to X$ — компактный оператор и $T = \lambda I - A$. Тогда возможно только две ситуации:

1) $Ker\ T = \{0\}$, тогда $y=Tx$ разрешимо для любого $y$
2) $Ker\ T \neq \{0\}$, тогда $y=Tx$ разрешимо только для $y \in (Ker\ T^∗)^\perp$

**Доказательство**: 
- **[Викиконспекты](https://neerc.ifmo.ru/wiki/index.php?title=%D0%90%D0%BB%D1%8C%D1%82%D0%B5%D1%80%D0%BD%D0%B0%D1%82%D0%B8%D0%B2%D0%B0_%D0%A4%D1%80%D0%B5%D0%B4%D0%B3%D0%BE%D0%BB%D1%8C%D0%BC%D0%B0_%E2%80%94_%D0%A8%D0%B0%D1%83%D0%B4%D0%B5%D1%80%D0%B0)** ([скриншот](https://i.imgur.com/50BpsFx.png))
  *Примечание*: первая теорема из параграфа в доказательстве это теорема из 17 билета. Общие теоремы о сопряженном операторе это 3 и 4 билеты.

### ✅ 21. Теорема о спектре компактного оператора

**Теорема**: $A$ -- компактный, тогда $\sigma(A)$ не более чем счётен и его предельной точкой может быть только $0$.

**Доказательство**: 
- **[Жолус]**: Теорема 2.14 
- [Викиконспекты](https://neerc.ifmo.ru/wiki/index.php?title=%D0%90%D0%BB%D1%8C%D1%82%D0%B5%D1%80%D0%BD%D0%B0%D1%82%D0%B8%D0%B2%D0%B0_%D0%A4%D1%80%D0%B5%D0%B4%D0%B3%D0%BE%D0%BB%D1%8C%D0%BC%D0%B0_%E2%80%94_%D0%A8%D0%B0%D1%83%D0%B4%D0%B5%D1%80%D0%B0#.D0.A2.D0.B5.D0.BE.D1.80.D0.B5.D0.BC.D0.B0_.D0.BE_.D1.81.D1.87.D0.B5.D1.82.D0.BD.D0.BE.D1.81.D1.82.D0.B8_.D1.81.D0.BF.D0.B5.D0.BA.D1.82.D1.80.D0.B0_.D0.BA.D0.BE.D0.BC.D0.BF.D0.B0.D0.BA.D1.82.D0.BD.D0.BE.D0.B3.D0.BE_.D0.BE.D0.BF.D0.B5.D1.80.D0.B0.D1.82.D0.BE.D1.80.D0.B0)

### ✅ 22. Вещественность спектра самосопряженного оператора

Оператор $A$ в $H$ называется самосопряжённым $(A=A^*)$, если $\forall x,y: \langle Ax, y \rangle= \langle x, Ay \rangle$.

**Теорема**: Спектр самосопряженного оператора в $H$ -- вещественный.

**Доказательство**:
- **[Викиконспекты](https://neerc.ifmo.ru/wiki/index.php?title=%D0%A2%D0%B5%D0%BE%D1%80%D0%B8%D1%8F_%D0%93%D0%B8%D0%BB%D1%8C%D0%B1%D0%B5%D1%80%D1%82%D0%B0-%D0%A8%D0%BC%D0%B8%D0%B4%D1%82%D0%B0#.D0.92.D0.B5.D1.89.D0.B5.D1.81.D1.82.D0.B2.D0.B5.D0.BD.D0.BD.D0.BE.D1.81.D1.82.D1.8C_.D1.81.D0.BF.D0.B5.D0.BA.D1.82.D1.80.D0.B0)** ([скриншот](https://arthur-samarin.github.io/funcan6/t22.png))

### ✅ 23. Критерий включения в резольвенту самосопряженного оператора

**Теорема**: Пусть $A=A^*$ -- самосопряжённый оператор. Тогда: $\lambda \in \rho(А) \Leftrightarrow \exists m>0: \forall x \in H: \|{(\lambda I−А)x}\| \geq m\|{x}\|$

**Доказательство**:
- **[Викиконспекты](https://neerc.ifmo.ru/wiki/index.php?title=%D0%A2%D0%B5%D0%BE%D1%80%D0%B8%D1%8F_%D0%93%D0%B8%D0%BB%D1%8C%D0%B1%D0%B5%D1%80%D1%82%D0%B0-%D0%A8%D0%BC%D0%B8%D0%B4%D1%82%D0%B0#.D0.9A.D1.80.D0.B8.D1.82.D0.B5.D1.80.D0.B8.D0.B8_.D0.B2.D1.85.D0.BE.D0.B6.D0.B4.D0.B5.D0.BD.D0.B8.D1.8F_.D0.B2_.D1.81.D0.BF.D0.B5.D0.BA.D1.82.D1.80_.D0.B8_.D1.80.D0.B5.D0.B7.D0.BE.D0.BB.D1.8C.D0.B2.D0.B5.D0.BD.D1.82.D0.BD.D0.BE.D0.B5_.D0.BC.D0.BD.D0.BE.D0.B6.D0.B5.D1.81.D1.82.D0.B2.D0.BE)** ([скриншот](https://raw.githubusercontent.com/arthur-samarin/funcan6/master/t23.png))

### ✅ 24. Критерий включения в спектр самосопряженного оператора

**Теорема**: Пусть $А$ — самосопряжённый оператор. Тогда: $\lambda \in \sigma(A) \Leftrightarrow \exists x_n : \|{x_n}\|=1, \ \|{(λI−A)x_n}\| \to 0$

**Доказательство**: 
- **[Викиконспекты](https://neerc.ifmo.ru/wiki/index.php?title=%D0%A2%D0%B5%D0%BE%D1%80%D0%B8%D1%8F_%D0%93%D0%B8%D0%BB%D1%8C%D0%B1%D0%B5%D1%80%D1%82%D0%B0-%D0%A8%D0%BC%D0%B8%D0%B4%D1%82%D0%B0#.D0.9A.D1.80.D0.B8.D1.82.D0.B5.D1.80.D0.B8.D0.B8_.D0.B2.D1.85.D0.BE.D0.B6.D0.B4.D0.B5.D0.BD.D0.B8.D1.8F_.D0.B2_.D1.81.D0.BF.D0.B5.D0.BA.D1.82.D1.80_.D0.B8_.D1.80.D0.B5.D0.B7.D0.BE.D0.BB.D1.8C.D0.B2.D0.B5.D0.BD.D1.82.D0.BD.D0.BE.D0.B5_.D0.BC.D0.BD.D0.BE.D0.B6.D0.B5.D1.81.D1.82.D0.B2.D0.BE)** ([скриншот](https://raw.githubusercontent.com/arthur-samarin/funcan6/master/t23.png))

### ✅ 25. Оценка протяженности спектра самосопряженного оператора через его границы $m_-$ и $m^+$
$m^+ = \sup\limits_{\|{x}\| = 1}{\langle Ax, x\rangle }$ -- верхняя граница
$m_- = \inf\limits_{\|{x}\| = 1}{\langle Ax, x\rangle }$ -- нижняя граница

**Теорема**: Для самосопряженного оператора $A$ верно, что:

1) $\sigma(A) \subset [m_-, m_+]$
2) $m_-, m_+ \in \sigma(A)$

**Доказательство**:
- **[Викиконспекты](https://neerc.ifmo.ru/wiki/index.php?title=%D0%A2%D0%B5%D0%BE%D1%80%D0%B8%D1%8F_%D0%93%D0%B8%D0%BB%D1%8C%D0%B1%D0%B5%D1%80%D1%82%D0%B0-%D0%A8%D0%BC%D0%B8%D0%B4%D1%82%D0%B0#.D0.9A.D1.80.D0.B8.D1.82.D0.B5.D1.80.D0.B8.D0.B8_.D0.B2.D1.85.D0.BE.D0.B6.D0.B4.D0.B5.D0.BD.D0.B8.D1.8F_.D0.B2_.D1.81.D0.BF.D0.B5.D0.BA.D1.82.D1.80_.D0.B8_.D1.80.D0.B5.D0.B7.D0.BE.D0.BB.D1.8C.D0.B2.D0.B5.D0.BD.D1.82.D0.BD.D0.BE.D0.B5_.D0.BC.D0.BD.D0.BE.D0.B6.D0.B5.D1.81.D1.82.D0.B2.D0.BE)** ([скриншот](https://raw.githubusercontent.com/arthur-samarin/funcan6/master/t25.png))
  *Примечание:* критерий принадлежности спектру берется из 24 билета.

### ✅ 26. Теорема о спектральном радиусе самосопряженного оператора

**Теорема**: $r_\sigma(A) = \max \{|m_-|, |m_+| \}$ и $r_\sigma(A) = \|{A}\|$

**Доказательство**:
- **[Викиконспекты](https://neerc.ifmo.ru/wiki/index.php?title=%D0%A2%D0%B5%D0%BE%D1%80%D0%B8%D1%8F_%D0%93%D0%B8%D0%BB%D1%8C%D0%B1%D0%B5%D1%80%D1%82%D0%B0-%D0%A8%D0%BC%D0%B8%D0%B4%D1%82%D0%B0#.D0.A2.D0.B5.D0.BE.D1.80.D0.B5.D0.BC.D0.B0_.D0.BE_.D1.81.D0.BF.D0.B5.D0.BA.D1.82.D1.80.D0.B0.D0.BB.D1.8C.D0.BD.D0.BE.D0.BC_.D1.80.D0.B0.D0.B4.D0.B8.D1.83.D1.81.D0.B5)** ([скриншот](https://raw.githubusercontent.com/arthur-samarin/funcan6/master/t26.png))
  *Примечание:* первое равенство -- тривиальное следствие билета 25 и $r_\sigma(A) := \sup\limits_{\lambda \in \sigma(A)} |\lambda|$

### ✅ 27. Теорема Гильберта-Шмидта о базисе из собственных векторов компактного самосопряженного оператора

**Теорема**: Пусть $H$ -- сепарабельное ГП, $А$ -- самосопряженный компактный оператор $H \to H$. Тогда из собственных векторов этого оператора можно построить ортонормированный базис.

**Доказательство**: 
- **[Жолус]**: Теорема 3.10
- [Викиконспекты](https://neerc.ifmo.ru/wiki/index.php?title=%D0%A2%D0%B5%D0%BE%D1%80%D0%B8%D1%8F_%D0%93%D0%B8%D0%BB%D1%8C%D0%B1%D0%B5%D1%80%D1%82%D0%B0-%D0%A8%D0%BC%D0%B8%D0%B4%D1%82%D0%B0#.D0.A2.D0.B5.D0.BE.D1.80.D0.B5.D0.BC.D0.B0_.D0.93.D0.B8.D0.BB.D1.8C.D0.B1.D0.B5.D1.80.D1.82.D0.B0-.D0.A8.D0.BC.D0.B8.D0.B4.D1.82.D0.B0)

### ✅ 28. Следствие теоремы Гильберта-Шмидта о разложении компактного самосопряженного оператора и его резольвенты

**Следствие**: Пусть $A$ - самосопряженный компактный оператор, тогда (из теоремы) для любого $x \in H$ можно построить:

$Ax = \sum_{n=1}^\infty \lambda_n*\langle x, e_n \rangle *e_n$, а значит 

$R_\lambda(A)(y) = \sum_{n=1}^\infty \langle y, e_n \rangle/(\lambda - \lambda_n) * e_n$, где $e_1, e_2, \ldots$ --- собственные вектора.

**Доказательство**:
- **[Викиконспекты](https://neerc.ifmo.ru/wiki/index.php?title=%D0%A2%D0%B5%D0%BE%D1%80%D0%B8%D1%8F_%D0%93%D0%B8%D0%BB%D1%8C%D0%B1%D0%B5%D1%80%D1%82%D0%B0-%D0%A8%D0%BC%D0%B8%D0%B4%D1%82%D0%B0#.D0.A2.D0.B5.D0.BE.D1.80.D0.B5.D0.BC.D0.B0_.D0.93.D0.B8.D0.BB.D1.8C.D0.B1.D0.B5.D1.80.D1.82.D0.B0-.D0.A8.D0.BC.D0.B8.D0.B4.D1.82.D0.B0)**

### ℹ️ 29. Теорема о положительности произведения положительных самосопряженных операторов

Пусть $A$ - самосопряжённый оператор.

$A \ge 0 \Leftrightarrow \forall x \in H : \langle Ax, x \rangle \ge 0$
$B \ge A \Leftrightarrow B - A \ge 0$ (частичный порядок)

**Пример**: $A^2 \ge 0$, т.к. $\langle A^2x, x\rangle = \langle Ax, Ax \rangle = \| Ax \|^2 \ge 0$

По теореме о спектральном радиусе самосопряжённого оператора получаем $0 \le A \le B \Rightarrow \|A\| \le \|B\|$

Пусть $A,B \geq 0$ -- самосопряженные, $AB=BA$. Тогда $AB \ge 0$.

**Схема доказательства**: Додонов

### ℹ️ 30. Существование сильного предела у монотонной, ограниченной последовательности самосопряженных операторов

Пусть $\exists M = const :A_n \leq A_{n+1} \leq M$. Тогда существует самосопряжённый $A$ такой, что:
1) $\forall x \in H \Rightarrow Ax = \lim\limits_{n \to \infty} A_n x$
2) $A_nB=BA_n \Rightarrow AB=BA$

**Схема доказательства**: Додонов

### ℹ️ 31. Проекторы в гильбертовом пространстве -- критерий

По основной теореме гильбертовых пространств, если  $H_1$ -- подпространство $H$, то $H=H_1 \oplus H_1^\perp$. Значит любой $x \in H$ представим в виде $x = x_1 + x_1^\perp$, где $x_1 \in H_1$ -- единственный. Тогда $P_{H_1} (x) = P(x) = x_1$ --- **проектор** $H$ на $H_1$.

**Теорема**: Пусть $P : H \to H$ -- ограниченный линейный оператор. 
$P$ -- проектор на $H$ $\Leftrightarrow$ $P$ -- самосопряженный и $P^2 = P$.

**Схема доказательства**: Додонов

### ℹ️ 32. Критерий разложения проектора в сумму проекторов

Проекторы $P_1$ и $P_2$ **ортогональны** ($P_1 \perp P_2$), если $P_1 \circ P_2 = 0$.

**Утверждение**: Пусть $P_1$, $P_2$ - проекторы. Тогда $P_1 + P_2$ - тоже проектор, если $P_1 \perp P_2$.

### ℹ️ 33. Критерий положительности разности двух проекторов

$P_2 \ge P_1 \Leftrightarrow P_2 - P_1 \ge 0$

**Утверждение**: Пусть $P_1$, $P_2$ - проекторы на $H_1, H_2$. Тогда $P_1 \leq P_2 \Leftrightarrow P_2 \circ P_1 = P_1 \Leftrightarrow H_1 ⊂ H_2$

### ℹ️ 34. Положительность $p(L)$, где $р$ -- положительный полином на $[m_-,m^+]$

**Лемма:** Пусть $L$ -- ограниченный самосопряженный оператор, $p(t)=a_0+a_1t+a_2t^2+\ldots$ -- полином с вещественными коэффициентами. Если $p(t) \geq 0$ при $t \in [m_-, m^+]$, то $p(L) \geq 0$.

### ℹ️ 35. Определение и существование $f(L)$ для непрерывной на $[m_-,m^+]$ функции $f$ 

Пусть $A$ -- самосопряжённый ограниченный оператор, $m_-, m^+$ -- его границы, $f: \mathbb{R}\to\mathbb{R}$ -- непрерывна на $[m_-, m+]$. По теореме Вейерштрасса существует последовательность полиномов $p_n: p_n \xrightarrow{\text{равн}} f$, которые аппроксимируют $f$.

Определим $f(L)$ как предел последовательности операторов: $f(L) = \lim\limits_{n\to\infty}p_n(L)$. 

**Теорема:** $\lim\limits_{n\to\infty}p_n(L)$ всегда существует.


### 🔄ℹ️ 36. Свойства $f \to f(L)$ (сохранение знака, нормы и арифметика)
1) $\forall x \in [m_-, m_+] \ f(x) \geq 0 \Rightarrow f(L) \geq 0$ (сохранение знака)
2) $(f + g)(L) = f(L) + g(L)$
3) $(f \cdot g)(L) = f(L) g(L)$
3) $\|f(A)\| \leq \sup\limits_{\lambda \in [m_-, m+]} |f(\lambda)|$ (сохранение нормы)

### 🔄ℹ️ 37. Определение и существование $f(L)$ для полунепрерывной сверху функции

Пусть $L$ - самосопряжённый ограниченный оператор. $f$ называется **полунепрерывной сверху** в точке $x_0$, если $\forall \varepsilon > 0 \ \exists \delta \ \forall x : |x - x_0| < \delta \Rightarrow f(x) < f(x_0) + \varepsilon$.

Из матана известно, что любая полунепрерывная сверху функция $f$ является поточечным пределом убывающей последовательности непрерывных функций $f_n$. 

Определим $f(L)$ как поточечный предел: $f(L) x = \lim\limits_{n \to +\infty} f_n(L)x$

**Теорема:** $\lim\limits_{n \to +\infty} f_n(L)x$ всегда существует.

### 🔄ℹ️ 38. Определение спектральной функции самосопряженного оператора и ее основные свойства (сильная непрерывность справа, коммутируемость, монотонность)
Пусть $A$ -- самосопряжённый ограниченный оператор. Введём функции $P_{\lambda}(t)$:
$P_{\lambda}(t) = \begin{cases}
  1, & t \leq \lambda \\
  0, & t \gt \lambda
\end{cases}$
Они являются полунепрерывными, поэтому их можно применить к оператору $A$. Можно показать, что получившиеся операторы будут проекторами.
Множество операторов $\{P_{\lambda}(A) \mid \lambda \in \mathbb{R} \}$ назовём **спектральным семейством** оператора $A$. Функцию, сопоставляющую $\lambda$ оператор $P_{\lambda}(A)$, назовём **спектральной функцией** оператора $A$.

Эта функция обладает следующими свойствами:
1) $\lambda_1 \leq \lambda_2 \Rightarrow P_{\lambda_1} \leq P_{\lambda_2}$ (монотонность)
2) $\forall x \ P_\lambda{x}  \xrightarrow[\lambda \to \lambda_0 + 0]{} P_{\lambda_0}x$  (непрерывна справа)
3) $\lambda < m_- \Rightarrow P_\lambda = 0$
   $\lambda \geq m^+ \Rightarrow P_\lambda = I$
4) Проекторы $P_\lambda(A)$ коммутируют друг с другом и с любым $B$, который коммутирует с $A$.

### 🔄ℹ️ 39. Разложение самосопряженного оператора посредством спектральной функции

Пусть $A$ -- ограниченный самосопряжённый оператор и $f: R \to R$ непрерывна на $[m_-, m^+]$. Тогда 
$f(A, ?) = \int_{-\infty}^{\infty} f(\lambda) d P_\lambda$ (???), интеграл в смысле Римана-Стильтьеса, $f(A, ?) : H \to H$

### 🔄ℹ️ 40. Теорема о спектральном исчислении

Используя определение $f(L)$ для непрерывных функций $f$ и тот простой факт, что при $\lambda_1 \le \lambda_2 \le \lambda_3 \le \lambda_4$ будет $P_{\lambda_2} - P_{\lambda_1} \perp P_{\lambda_4} - P_{\lambda_3}$, легко получаем следующую теорему.

**Теорема**: Пусть $L$ -- самосопряжённый оператор, $P_{\lambda}$ -- его спектральная функция, $f$ -- (???). Тогда:
1) $f(A) = \int\limits_\mathbb{R} f(\lambda)dP_{\lambda}$
2) $f(A)x = \int\limits_\mathbb{R} f(\lambda)dP_{\lambda}(x)$
3) $\langle f(L)x, y \rangle = \int\limits_\mathbb{R} f(\lambda)d \langle P_{\lambda}x, y \rangle$

:::info
Билеты ниже -- то, что было у предыдущих курсов
:::

### 🔄🈹 XX. Локальная сходимость метода последовательных приближений

Пусть $V$ -- замкнутый шар в $B$-пространстве, x* из V, x*=T(x*), T '(x*)=0, где T' -- производная Фрише, тогда метод простых итераций, x_(n+1) = T(x_n) сходится к x*. 

### 🔄🈹 XX. Локальная сходимость метода Ньютона

Пусть X* : F(X*) = 0, и в некотором шаре с центром в X* это отоб. непрер. дифф-тся. Тогда в х0 ≈ х*: x_n+1 = x_n - F(x_n)/F'(x_n) - метод Ньютона будет сх. к х*. x_0 должна быть в окресности.

### 🔄🈹 XX. Равномерный предел последовательности непрерывных,компактных операторов

T_n -> (равномерно) T на G, T_n(G) - относит. компакт. => T(G) - относит. компакт.

### 🔄🈹 XX. Проекторы Шаудера

Пусть дано некоторое множество M из B-пространства. M -- замкнуто, выпукло и ограничено.
Пусть T: M->M -- компактный оператор(вполне непрерывный), Convex(T(M)) тоже относительный компакт. Возьмём eps-конечную сеть для Convex(T(M)), состояющую из y_j, где j = 1..p.
eps-проектор Шаудера: P_eps (y) = sum_{j=1}^p (гамма_j) (y) y_j, где
(alpha)_j (y) = eps - ||y - y_j||, if ||y - y_j|| < eps, 0 otherwise
gamma_j = alpha_j / (sum alpha_k)

### 🔄🈹 XX. Теорема Шаудера о неподвижной точке

Пусть D - огр. замк., выпуклое множество, Т - непр. комп. оператор заданный на D и непереводящий его в себя. Тогда у Т на D сущ. хотя бы одна неподвижная точка.

![That's all folks!](https://neerc.ifmo.ru/wiki/images/b/bd/Thats_all_forks.jpg)