# Algorithms
算法导论
## 第二章
### 插入排序
第一个算法是插入排序算法。
- 输入：n个数
- 输出：输入序列的一个排列（即重新排序）
- 待排序的数也称为关键字(key)
### 循环不变式与插入算法的正确性
循环不变式主要用来帮助我们理解算法的正确性。对于循环不变式，必须证明它的三个性质：
- 初始化：它在循环的第一轮迭代开始之前，应该是正确的。
- 保持：如果在循环的某一次迭代开始之前它是正确的，那么，下一次迭代开始之前她也应该保持正确
- 终止：当循环结束时，不变式给了我们一个有用的性质，它有助于表明算法是正确的。
- 当头两个性质成立时，就能保证循环不变式在循环的每一轮迭代开始之前，都是正确的。
### 算法分析
算法分析即指对一个算法所需要的资源进行预测。通常我们希望预测的是计算时间。书中采用一种通用的但处理器、随机存取机（RAM）计算模型，在RAM模型中，指令一条接一条执行，没有并发操作。
- 插入排序算法的分析
输入规模的概念与具体问题有关，对许多问题而言，最自然的度量标准是输入中元素个数。 算法的运行时间是指在特定输入时，所执行的基本操作数（或步数）。
- 最坏情况和平均情况分析
一般考察算法的最坏情况运行时间，亦即，对于任何规模为n的任何输入，算法的最长运行时间。原因如下：
一个算法的最坏情况时在任何输入下运行时间的上限。
对于某些算法来说（例如：在数据库检索信息而信息并不在数据库中），最坏情况出现得相当频繁。
大致上看，“平均情况”与最坏情况一样差。
在某些情况喜爱，我们会对算法的平均情况或期望的运行时间感兴趣，第5章会介绍概率分析技术来确定一个算法期望的运行时间。采用随机化算法可以做出随机选择，从而可以对算法进行概率分析。
- 增长的量级
运行时间的增长率（增长的量级），只需要考虑攻势中的最高次项且忽略其系数。
### 算法设计
有很多算法在结构上是递归的：为了解决一个给定的问题，算法要一次或多次地递归调用其自身来解决相关的子问题。这些算法常采用分治策略：将原问题划分为n个规模较小而结构与原问题相似的子问题；递归地解决这些子问题，然后再合并其结果，就得到原问题的解。

分治模式再每一层递归上都有三个步骤：

分解：将原问题分解成一系列子问题；

解决：递归地解各子问题。若子问题足够小，则直接求解；

合并：将子问题的结果合并成原问题的解。

合并排序操作模式如下：

分解：将n个元素分成各含n/2个元素的子序列；

解决：用合并排序法对两个子序列递归地排序；

合并：合并两个已排好序的子序列以得到排序结果。
