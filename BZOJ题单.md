# 第一页
|编号|解法|Status|
|---|---|---|
|1001|平面图最小割,转对偶图最短路 | Y |
|1002|矩阵树定理,也可以通过推矩阵的递推关系得到递推式 | Y |
|1003|最短路+DP | Y |
|1007|半平面交 | Y |
|1008|组合数学,需要高精 | Y |
|1010|斜率优化/四边形不等式推决策单调性 | Y |
|1012|线段树 | Y |
|1014|Splay维护字符串的Hash值 | Y |
|1016|矩阵树定理,相同权值压联通块,对一个联通块用一次矩阵树定理计算方案数,累积答案 也可以DFS | Y |
|1023|仙人掌DP找直径 | Y |
|1031|直接构建出倍长后串的SA,用rank数组做 | N |
|1034|贪心 | Y |
|1036|树链剖分/LCT | Y |
|1038|半平面交 | N |
|1041|数论,推一下公式 也可以用一种跟勾股定理相关的做法 | Y |
|1043|计算几何,细节已忘. | N |
|1050|并查集,细节已忘. | N |
|1053|爆搜 | N |
|1054|模拟 | N |
|1059|二分图最大匹配,对行和列做点 | Y |
|1061|不等关系转费用流建图 | Y |
|1066|最大流 | Y |
|1067|线段树分类讨论 | N |
|1070|费用流 | N |
|1072|状压DP,据说暴力可过 | Y |
|1083|最小生成树 | N |
|1087|状压DP | Y |
|1088|枚举状态,暴力 | Y |
|1089|找规律,需要高精,也可以用组合数学推一下 | N |
|1092|模拟 | N |
|1095|动态树分治,或者dfs序线段树维护括号序列 | Y |
|1099|线段树+分类讨论 | N |
---
# 第二页
|编号|解法|Status|
|---|---|---|
|1101|莫比乌斯反演,同HAOI ProblemB | N |
|1103|dfs序,或者链剖 | N |
|1106|树状数组.考虑记录下每个元素上一次出现的位置,然后BIT搞一搞. | N |
|1112|权值平衡树,中位数相关. | N |
|1113|好像是单调栈扫一扫就没了. | N |
|1121|一个结论题,答案是n/2. | N |
|1131|树形DP一下. | N |
|1132|答案的式子可以看出一个坐标的前缀和,优化一下暴力. | N |
|1143|利用那些图论定理,最长反链=n-最大匹配. | N |
|1145|很多种情况,BIT维护一下然后把这些情况加加减减.网上有WJMZBMR题解. | N |
|1146|一个比较模板的题..为了不被卡常卡空间可以考虑把其中一维搞上整体二分. | N |
|1176|cdq分治,或者kdtree | N |
|1180|LCT | N |
|1191|二分图最大匹配 | N |
|1192|考虑二进制分解. | N |
|1193|大规模贪心,小规模暴力. | N |
|1195|状压DP,与某道TC SRM一样. | N |
|1202|加权并查集,维护前缀和. | N |
|1208|权值平衡树. | N |
|1213|二分,Python. | N |
|1227|组合,容斥,二维BIT.建议看黄学长题解. | N |
|1269|区间Splay裸题. | N |
|1307|题意是找最大的一个区间使得区间内为一个排列.记录前驱后继,可以得到符合条件的判定关系与区间长度,区间最大值最小值差有关.通过前驱后继来查询这个东西. | N |
|1318|同1307 | N |
|1336|最小圆覆盖 | N |
|1337|同1336 | N |
|1342|对当前区间搞了个set. | N |
|1345|规律+结论题| N |
|1370|并查集.(这不是某NOIP题吗 | N |
|1379|答案就是m.忘了为什么了. | N |
|1398|KMP最小表示,卡SAM内存. | N |
|1406|数论,找质因子搞一搞. | N |
|1419|DP一下.枚举选到了i张红的,然后1~b枚举选到了多少黑的.似乎需要滚一下数组压内存. | N |
|1453|方法很多,提供四个.1.LCT维护删除时间最大生成树 2.cdq分治+并查集 3.A*爆搜 4.线段树维护连通性 | N |
|1492|斜率优化,因为状态点的x不单调,所以需要平衡树或者cdq分治 | N |
|1500|区间Splay. | N |
|1502|Simpson积分. | N |
|1503|权值平衡树 | N |
|1513|二维线段树 | N |
|1529|答案是联通块个数,并查集或者Tarjan都可以. | N |
|1532|二分答案,最大流判定. | N |
|1543|同JSOI2008最小生成树计数. | N |
|1563|四边形不等式推出决策单调,二分决策点. | N |
|1568|李超线段树. | N |
|1588|权值平衡树. | N |
|1798|线段树双标记.但是我是拿LCT写的. | N |
|1800|暴力 | N |
|1821|二分答案+并查集 | N |
|1853|爆搜 | N |
|1857|三分套三分. | N |
|1875|矩乘优化DP | N |
|1876|Python题,直接GCD | N |
|1877|拆点费用流 | N |
|1878|离线处理+树状数组 | N |
|1879|状压DP | N |
|1880|四遍最短路,然后DP一下 | N |
|1898|可以发现每12次还是6次一个循环,然后对大范围矩乘一下,剩下的一点暴力DP出来. | N |
|1907|树的最小路径覆盖,可以直接树DP/贪心 | N |
|1922|分层图最短路 | N |
|1923|高斯消元. | N |
|1924|强联通分量缩点最长路 | N |
|1925|DP.需要用到一些抖动子序列的性质. | N |
|1941|kdtree最远点 | N |
|1951|数论板子合集. | N |
|1968|枚举1~n统计n/i的和 | N |
|1969|LCT维护两点间桥边数量,不知道当年标算是什么但应该不是LCT吧 | N |
|1979|二分答案,用平衡树判定. | N |
|1984|链剖/LCT裸题. | N |
|1997|平面图判定.需要平面图理论. | N |
|2000|可以贪心的博弈问题.网上很多证明. | N |
|2001|可以LCT,也可以cdq,cdq的话需要很多最小生成树的性质. | N |
|2002|可以LCT,可以分块. | N |
|2003|特技爆搜. | N |
|2004|矩乘优化DP | N |
|2005|莫比乌斯反演 | N |
|2006|线段树+堆维护五元组 | N |
|2012|容斥+组合,同SDOI2013Spring | N |
|2013|DP+二分 | N |
|2045|同POI2007Zap | N |
|2049|国内第一个LCT | N |
|2051|点分治 | N |
|2054|并查集的特技 | N |
|2056|嘿嘿嘿 | N |
|2064|状压DP | N |
|2089|同2090. | N |
|2090|权值线段树优化一下DP.感觉这个DP好像并不一定对啊..但是大家好像都是这么写的. | N |
|2093|左右端点移动一下找到目标位置,然后倍增. | N |
|2096|单调队列搞一搞 | N |
|2111|组合数搞一搞,需要Lucas | N |
|2117|同2051 | N |
|2141|cdq分治 | N |
|2151|堆+贪心 | N |
|2154|莫比乌斯反演,有很多种公式化法,我的好像是比较傻逼的那种.. | N |
|2157|LCT,随便打标记 | N |
|2163|直接最小割过了,其实应该转对偶图然后最短路才对. | N |
|2186|考察线性的逆元求法. | N |
|2190|反演分析一下,最后却发现答案是个跟phi有关的表达式.. | N |
|2213|DP乱搞| N |
|2216|显然权函数单调,满足四边形不等式,决策单调. | N |
|2222|似乎数据有问题还是什么?面向数据了一波. | N |
|2223|主席树 | N |
|2229|GHTree | N |
|2241|暴力枚举答案然后检测,检测时候需要特技,感觉理论复杂度并不对但是过了 | N |
|2243|链剖或者LCT,我写的链剖 | N |
|2244|cdq分治做三维偏序的DP,答案实际上可能非常大会爆…但是出题人十分懒惰没管那样的数据,所以double就过了 | N |
|2275|考虑斐波那契分解.有一个定理,然而并不会证明. | N |
|2280|倍增+最小圆覆盖,卡评测好题. | N |
|2288|线段树优化费用流,模拟费用的取反什么的.5倍经验. | N |
|2295|乱搞| N |
|2296|找到一个P=987654321*10^6,答案就是(P+n)-(P+n)mod n | N |
|2299|裴蜀定理 | N |
|2300|平衡树维护凸包.因为求的是凸包周长,所以贡献不可累积,故不能分治. | N |
|2301|莫比乌斯反演.同POI2007Zap | N |
|2326|矩乘. | N |
|2336|模拟退火 | N |
|2344|暴力找三元环. | N |
|2351|Hash | N |
|2377|同POI2012 A Horrible Poem | N |
|2378|PA2011Kangaroo kdtree 把序列[L,R]看成点(L,R) 然后查询的就是右下角的矩阵,打一些标记搞一搞. | N |
|2393|同SCOI2010幸运数字 | N |
|2395|二维最小乘积生成树,裸. | N |
|2428|模拟退火 | N |
|2433|计算几何. | N |
|2434|AC自动机+线段树. | N |
|2438|强连通分量. | N |
|2440|莫比乌斯函数的应用,实际上就是容斥. | N |
|2448|区间DP,线段树优化,卡普通线段树常数,需要zkw线段树. | N |
|2456|卡内存..乱搞 | N |
|2458|分治,分治子结构内暴力+剪枝 | N |
|2460|线性基 | N |
|2461|乱DP一波 | N |
|2462|同2351Hash | N |
|2463|根奇偶有关的博弈,一眼看出规律,证明可以考虑转化成骨牌铺满格子的问题. | N |
|2464|裸最短路 | N |
|2467|矩阵树定理 | N |
|2506|小范围直接记录答案,大范围暴力. | N |
|2514|同HNOI2010那个. | N |
|2527|整体二分. | N |
|2555| LCT维护SAM Parent树Right集合 | N |
|2568|按位考虑的乱搞树状数组,大量逻辑混乱… | N |
|2588|找dfs序,树上建个主席树 | N |
|2594|LCT | N |
|2595|斯坦纳树. | N |
|2600|贪心,找规律,中位数相关 | N |
|2618|半平面交 | N |
|2623|RGB识别系统的弱化.湖南当年请的教授出题真厉害.. | N |
|2626|kdtree+堆 | N |
|2631|LCT+双标记 | N |
|2639|二维莫队. | N |
|2642|可以发现一次删一段连续的一定是最优的,所以二分一下删的长度,半平面交 | N |
|2648|kdtree | N |
|2654|二分答案然后最小生成树 | N |
|2656|Python题 | N |
|2657|实际上就是让你找直径,没有三角剖分的姿势也没事 | N |
|2659|直觉型数学题 | N |
|2660|DP一下. | N |
|2661|费用流 | N |
|2662|分层图最短路 | N |
|2671|类似莫比乌斯反演,推一推式子就行了 | N |
|2683|我写的cdq | N |
|2697|贪心 | N |
|2705|莫比乌斯反演 | N |
|2716|cdq分治 | N |
|2717|枚举| N |
|2718|同CTSC2008祭祀 | N |
|2721|随便化一下式子 | N |
|2724|分块 | N |
|2729|组合数,需要Python | N |
|2732|二分答案半平面交判定 | N |
|2733|平衡树启发式合并. | N |
|2738|整体二分,也可分块 | N |
|2739|四边形不等式,然后发现决策单调,然后分治找决策点 | N |
|2741|分块套可持久化trie | N |
|2751|根据题目找一个性质啥的..细节已忘 | N |
|2753|本意是求最小树形图,实际上因为题目特殊所以可以BFS一遍然后做最小生成树 | N |
|2754|AC自动机fail树+容斥,实际上暴力也过了. | N |
|2759|题目给的是个环套树,对LCT维护一个额外的father,然后扩欧求答案 | N |
|2761|妈的智障.. | N |
|2763|分层图最短路 | N |
|2783|dfs时候维护一下set | N |
|2786|DP一下,需要Python | N |
|2789|还是考虑上个位置,然后树状数组乱搞一下 | N |
|2795|hash,对一段数枚举约数然后判定 | N |
|2796|记忆化搜索 | N |
|2809|权值平衡树启发式合并,或者左偏树 | N |
|2813|斐波那契数性质的应用,线筛时候记录一下质因子,约数个数之类的 | N |
|2814|人生写过最码农的题,可以LCT可以链剖,只不过都得维护30来个量 | N |
|2815|支配树弱化版,倍增 | N |
|2816|LCT | N |
|2818|同SDOI2012Longge的问题 | N |
|2822|卡特兰数相关,需要Python | N |
|2823|最小圆覆盖 | N |
|2824|好像是个A*,我面向数据了一波 | N |
|2843|LCT | N |
|2850|kdtree | N |
|2851|灭绝树. | N |
|2862|二分limit,dp | N |
|2864|计算几何+最大流 | N |
|2875|矩乘 | N |
|2883|树套树,线段树套平衡树,但是我写的是线段树套权值线段树 | N |
|2886|显然先从整个矩形的边界上走比较好,可以发现转一下就是杨辉三角,再然后就没别的了 | N |
|2888|LCT维护树的重心,需要启发式合并 | N |
|2890|同POI2012 A Horrible Poem | N |
|2896|同AHOI2005航线那题 | N |
|2901|可以发现能用前缀和做.. | N |
|2908|考虑建32位的信息维护,链剖或者LCT | N |
|2916|暴力 | N |
|2936|灌水法,堆+爆搜 | N |
|2937|写了个n^2暴力就能过 | N |
|2946|SAM时刻记录匹配上的最大值 | N |
|2957|线段树维护一段区间斜率 | N |
|2961|圆的反演,然后就成了cdq分治做半平面交 | N |
|2976|模拟一下得到一堆同余方程,扩欧找最小解 | N |
|2986|把2440反过来,做法一样 | N |
|2987|类欧裸题,然而还是不是很理解类欧 | N |
|3038|记录区间最大值,如果还能开根,暴力下放,最多开根lglg次 | N |
|3040|平板电视+Dij | N |
|3043|乱搞| N |
|3051|平面图求域+点定位. | N |
|3052|莫队上树. | N |
|3053|高维kdtree | N |
|3064|线段树+标记+时间戳. | N |
|3069|LCT维护是否存在桥边,实际上可以并查集 | N |
|3070|考虑固定指数,把底数慢慢往上调,比较难写,于是我当时面向数据了一发 | N |
|3072|神DP.建议看Claris题解. | N |
|3073|线段树优化建图最短路 | N |
|3084|扩展KMP.建议看Claris题解 | N |
|3098|生日攻击. | N |
|3100|根前面那个什么 玩具 是一样的. | N |
|3103|跑一边马拉车,然后并查集缩点一下,就成了弦图染色问题. | N |
|3110|整体二分 | N |
|3117|链表+堆搞了一下,看似不科学实际上飞快 | N |
|3130|显然费用的分配是可以贪心的.然后二分. | N |
|3132|二维树状数组 | N |
|3153|TopTree/ETT+LCT 然而出题人的做法不是这两个… | N |
|3155|树状数组乱搞一下 | N |
|3170|链剖 | N |
|3172|建出多串后缀自动机,直接搞 | N |
|3176|显然要考虑逆序对什么的,然后还需要树状数组| N |
|3178|循环构成了一个树形结构,然后就可以DP了 | N |
|3180|单调栈乱搞 需要SPJ 但是我好像恰巧跟std策略相同,直接A了 | N |
|3181|大质数暴力,小的二分乱搞一下 | N |
|3196|树套树 | N |
|3197|树Hash+乱搞 | N |
|3198|容斥+组合 | N |
|3199|显然图是个V图,半平面交弄出来,然后最短路 | N |
|3203|计算几何,答案在凸壳上,三分一下 | N |
|3209|数位DP+数论 | N |
|3211|同 上帝造题七分钟2 | N |
|3223|区间Splay裸题. | N |
|3224|权值平衡树 | N |
|3226|把区间拆成两倍来处理开闭问题,然后线段树就行了,可以看成区间加减01,区间覆盖01的问题 | N |
|3228|把整个坐标系旋转45°,然后就成了扫描线sb题,问题在于统计的不是面积而是格子…所以细节非常麻烦 | N |
|3229|满足四边形不等式然后DP就好了 | N |
|3231|矩乘 | N |
|3236|莫队/树套树/cdq分治. | N |
|3237|我写的cdq分治,实际上也有别的做法 | N |
|3238|后缀自动机Parent树上DP一下 | N |
|3243|基于随机化的乱搞 | N |
|3251|注意到fib数没多少项就爆int了,所以暴力 | N |
|3252|dfs序,然后变成了rmq问题,写个线段树 | N |
|3260|同2886 | N |
|3262|cdq分治维护三维偏序 | N |
|3267|同2288. | N |
|3268|ST表搞一搞.source里都给写了题解了.. | N |
|3272|同3267 | N |
|3277|SAM基本应用 | N |
|3282|LCT | N |
|3283|BSGS. | N |
|3295|cdq分治.注意每次修改会产生更多额外的贡献要单独减去的 | N |
|3309|莫比乌斯反演 | N |
|3323|序列平衡树维护多项式 | N |
|3329|把两问分别考虑,一个数位DP一个矩乘 | N |
|3339|跟SDOI2008HH的项链方法差不多,也是离线然后考虑找到前驱后继线段树做 | N |
|3350|同3103 | N |
|3417|对一个环可以重复走多次每次长度都是+2的,所以第一次BFS看看路径长奇偶就行了. | N |
|3424|跟dfs序有关.有波兰人论文. | N |
|3439|建trie,对trie dfs一遍,同时建立主席树 | N |
|3463|分块维护凸壳 | N |
|3473|同3277 | N |
|3482|SPFA预处理含x条边的情况然后做.建议看Claris题解. | N |
|3483|建trie,可以发现询问能跟trie的dfs序对应起来,所以再建一棵主席树. | N |
|3489|我写的3d kdtree | N |
|3493|同HNOI2010那个 | N |
|3495|考虑2-SAT建图.安利Claris题解. | N |
|3498|枚举三元环,我拿度数倍数判的实际上应该是根号度数.. | N |
|3500|OEIS有数列 | N |
|3501|把3501加点数论特技,CRT什么的.. | N |
|3502|同3272 | N |
|3505|组合数一下 | N |
|3514|LCT.记录下某条边被加入成环,主席树统计答案. | N |
|3522|树DP.可以O(n)特技. | N |
|3524|主席树 | N |
|3527|FFT | N |
|3529|莫比乌斯反演+树状数组 | N |
|3530|AC自动机+数位DP | N |
|3531|动态开点的LCT/链剖线段树 | N |
|3532|退流科技. | N |
|3533|线段树维护凸包 | N |
|3534|构建一个合理的矩阵然后矩阵树定理,这个矩阵的构建需要十分高超的概率姿势,建议看高大哥的题解 | N |
|3543|有定理好像是这样的正方形不超过根号个还是什么来着..忘掉了.反正是结论题 | N |
|3544|搞个set就好了 | N |
|3545|本题不强制在线,标算为平衡树启发式合并 | N |
|3551|对3545强制在线后,我们需要主席树+倍增搞一发 | N |
|3555|hash | N |
|3566|树形概率DP | N |
|3571|最小乘积生成树+KM. | N |
|3572|虚树. | N |
|3573|考虑对树DFS,做一个对数的转化 | N |
|3575|不靠谱的暴力做法..加上堆维护一下 | N |
|3585|又是考虑离线记前驱后继然后线段树的题 | N |
|3589|实际上是虚树.用链剖线段树随便打了打标记.然而标算应该是LCT做链的并吧. | N |
|3594|线段树优化DP | N |
|3603|分块高斯消元. | N |
|3605|分治FFT. | N |
|3606|平面图求域+点定位. | N |
|3607|最长路剖分一下,再轻重路剖分一下,安利Claris题解. | N |
|3613|贪心/找规律. | N |
|3616|kdtree+bitset | N |
|3622|厉害的组合数+DP. | N |
|3629|有一个什么分解定理来着… | N |
|3638|同3502 | N |
|3643|爆搜 | N |
|3647|hash一下,好像也是个双倍经验 | N |
|3651|对ZJOI2012网络去掉权值的维护 | N |
|3658|单调栈+树状数组 | N |
|3659|矩阵树定理+BestTheorem | N |
|3667|MillerRabin+PollarRho | N |
|3668|按位贪心 | N |
|3669|LCT | N |
|3672|点分治+斜率优化+cdq分治. | N |
|3673|3674:rope的应用. | N |
|3675|满足四边形不等式,有决策单调 | N |
|3676|PAM裸题,但是我写的SAM+manacher | N |
|3680|模拟退火/多重爬山 | N |
|3585|VEB树. | N |
|3687|bitset应用 | N |
|3688|线段树优化DP | N |
|3709|贪心.肯定先打能回血的. | N |
|3710|构造神题.波兰人有论文. | N |
|3711|分治优化DP,分治过程中用线段树找决策点,决策点单调. | N |
|3712|树上倍增. | N |
|3713|暴力拆分. | N |
|3714|前缀和Prim. | N |
|3715|找找最大边界值,随便判定一下.. | N |
|3716|最小割转最大流,然后贪心,需要一定坐标变换. | N |
|3717|高姿势的状压DP. | N |
|3718|只要能卡住就行了,树状数组. | N |
|3719|线段树套个vector扫描线扫一扫. | N |
|3721|随便贪心,考虑奇换偶偶换奇. | N |
|3722|树形DP. | N |
|3725|扫一遍,扫的时候记录出现位置,更新答案. | N |
|3726|悬线法. | N |
|3727|稍微推一推公式,然后就发现代价可以根据size什么的树形DP了. | N |
|3728|堆贪心. | N |
|3732|跟某NOIP货车运输一样. | N |
|3733|爆搜+信仰剪枝.安利潇爷(Time-Machine)题解 | N |
|3735|堆搞一搞 | N |
|3737|跟phi的反函数一个做法. | N |
|3743|显然可以直接树形DP. | N |
|3745|分治,前缀和,单调栈. | N |
|3754|很好的乱搞题.可以考虑看成是一堆点,然后中间有一条水平直线算代价. | N |
|3767|Python题. | N |
|3779|LCT+dfs序线段树 | N |
|3791|可以比较容易的DP出来. | N |
|3802|预处理转移的DP.也可以直接手动分类讨论出来,只要你不嫌手累代码长难调. | N |
|3810|记忆化搜索 | N |
|3811|这个期望和概率题好神啊..建议直接上网看题解 | N |
|3812|状压DP,需要一些奇怪姿势. | N |
|3815|kdtree. | N |
|3817|类欧题,类欧前需要很多变形. | N |
|3831|挺sb的一个DP. | N |
|3834|莫比乌斯反演. | N |
|3837|线筛处理一些东西,然后DP. | N |
|3838|看成线段树维护括号序列,然后就发现需要维护的东西特别多还不止一棵线段树. | N |
|3839|考虑从某个点开始向四个方向扩展的凸包,预处理,然后对询问用线段树扫描线一下. | N |
|3884|高姿势的数论题. | N |
|3895|dfs,过程中需要很多情况的讨论,建议看Po姐题解. | N |
|3915|矩形剖分. | N |
|3916|枚举删除的位置,Hash. | N |
|3917|考虑爆搜各种剪枝,每次范围都是之前的十分之一. | N |
|3922|搞一堆线段树分别对应不同公差,大公差暴力,小的线段树. | N |
|3926|trie上SAM扩展裸题.因为度数少,所以暴力合并. | N |
|3928|区间DP一下. | N |
|3944|杜教筛裸题. | N |
|3950|同3607. | N |
|3984|按时间分治,维护删除时间最大的基. | N |
|3990|操作序列的顺序并不影响答案,根据这个性质所以搜. | N |
|3991|虚树. | N |
|3993|二分费用最大流判定. | N |
|3994|比较厉害的莫比乌斯反演,需要一个性质.安利高大哥题解. | N |
|3995|线段树维护两排点,分类讨论. | N |
|3998|SAM的应用. | N |
|4001|找规律.实际上要靠生成函数来推.. | N |
|4010|拓扑. | N |
|4020|手写编译器. | N |
|4025|LCT,或者cdq分治. | N |
|4027|贪心. | N |
|4029|模拟. | N |
|4031|矩阵树定理. | N |
|4032|前两问直接DP,后两问SAM上DP. | N |
|4033|看似n^3,实际上n^2的树DP. | N |
|4034|链剖, | N |
|4036|子集和变换. | N |
|4043|同3802. | N |
|4048|同3928. | N |
|4052|发现gcd最多有log个,单调栈一下. | N |
|4057|状压DP. | N |
|4059|奇怪的暴力. | N |
|4062|同3658. | N |
|4063|智障啊.. | N |
|4066|卡掉离线算法差评不已.kdtree | N |
|4068|维护套着堆的线段树就行了,每次考虑用后来的任务替换一下前面的任务. | N |
|4084|Hash | N |
|4085|线段树维护矩乘.据说考场卡常?矩阵可以从3*3优化到2*2. | N |
|4086|组合数容斥. | N |
|4088|大模拟. | N |
|4106|WF签到题. | N |
|4127|数一直加的,已经没有负数的就不用管了,其他的可以暴力下放. | N |
|4128|矩阵BSGS,矩阵求逆或者不求逆的BSGS. | N |
|4130|kdtree.上面写过这个题了.. | N |
|4140|因为强制在线了,所以要二进制分组 | N |
|4143|乱搞,暴力,没技术含量. | N |
|4144|最短路+最小生成树. | N |
|4145|状压DP. | N |
|4146|写个计数器.sb题 | N |
|4147|又一个根据很多情况来讨论的博弈.看Claris题解把 | N |
|4148|构造.算基础构造题了. | N |
|4149|考虑单调栈搞一搞. | N |
|4151|一个非常厉害的.最短路?安利Claris题解 | N |
|4152|把点排个序,构个图,最短路. | N |
|4154|可以kdtree,要是不只是子树的话,点分就好了. | N |
|4160|这题好神啊.安利Claris题解. | N |
|4180|构建出SAM,然后可以矩乘 | N |
|4184|按时间分治线段树维护一下线性基 | N |
|4194|k做一下前缀和就可以看成是凸壳,然后二分一下斜率什么的. | N |
|4195|并查集 | N |
|4196|链剖 | N |
|4198|Huffman树+贪心 | N |
|4199|SAM Parent树上DP | N |
|4209|把PA的Bazarek用主席树来做动态的 | N |
|4212|同3483,但是卡trie转移边内存. | N |
|4216|分块,也卡内存. | N |
|4229|同PA2011HardChoice | N |
|4236|随便统计一下三个字母数目更新下答案就行了. | N |
|4245|按位贪心 | N |
|4247|背包变形 | N |
|4250|4251前面都出现过了 | N |
|4253|把AHOI那个密码箱找质因子的过程来弄成PollardRho | N |
|4260|trie正着一遍倒着一遍DP,但是我写的可持久化trie,差点T飞 | N |
|4262|考虑询问离线,然后用线段树搞一搞,安利Claris题解. | N |
|4263|某TCSRM题改编,结论题,贪心一下. | N |
|4264|边集Hash. | N |
|4266|同 一个动态树好题 | N |
|4269|线性基 | N |
|4288|跟Baltic2014sequence一样 | N |
|4289|转一下建图,差分建图,,然后最短路 | N |
|4291|跟Bazarek一样 | N |
|4292|按位暴力 | N |
|4293|大小关系是始终不变的,所以排序后可以在线段树上二分. | N |
|4294|斐波那契数列模10^m有循环节,利用这个,然后搜 | N |
|4296|好像是考虑贪心的删?忘了.. | N |
|4297|神题.安利Claris题解. | N |
|4298|比较厉害的边集Hash. | N |
|4299|主席树.可以发现那个东西的一个性质.这个性质如果说出来就没意思了.. | N |
|4300|builtin大法好啊.. | N |
|4305|组合+容斥 | N |
|4310|二分+后缀数组判定/hash判定 | N |
|4311|按时间分治的线段树,答案在凸壳三分 | N |
|4312|大型分类讨论 | N |
|4316|仙人掌DP | N |
|4317|同2051 | N |
|4318|同Easy那题 | N |
|4319|简单的构造 | N |
|4320|小范围记录答案,大范围暴力 的那种题目 | N |
|4327|SAM直接跑 | N |
|4337|树Hash | N |
|4347|比较厉害的DP.安利Claris题解. | N |
|4352|又是个双倍经验..同 A Huge Tower | N |
|4358|考虑kdtree,序列[L,R]当成(L,R)这样子 | N |
|4364|线段树乱搞..乱更新一下 | N |
|4367|搞出暴力DP之后,满足四边形不等式,所以决策单调,然后分治优化,主席树找决策 | N |
|4373|对区间是否符合条件有一个有关gcd的判定,然后线段树就行了.也可以Hash区间和,区间平方和,立方和. | N |
|4378|特技差分然后树状数组. | N |
|4380|区间DP. | N |
|4401|枚举约数. | N |
|4403|组合数学. | N |
|4404|按位搜. | N |
|4407|莫比乌斯反演 | N |
|4408|同FRBSUM | N |
|4414|利用一点斐波那契数列的性质做,可以找规律. | N |
|4415|线段树模拟 | N |
|4418|线段树. | N |
|4419|暴力 | N |
|4421|智障.. | N |
|4423|考虑对偶图中两点连通性与原图中两点连通性关系,然后并查集维护对偶图的连通性. | N |
|4424|nlogn可以差分树剖或者LCT,O(n)就利用一些特技乱搞一下. | N |
|4425|搞个堆 | N |
|4426|满足四边形不等式,分治优化下DP | N |
|4427|计算几何+二分图判定 | N |
|4428|一点特殊的记忆化搜索姿势然后杜教筛 | N |
|4429|二分图最大匹配 | N |
|4430|树状数组找一下逆序对什么的 | N |
|4432|链表大模拟 | N |
|4434|坐标范围很小,考虑分成一小段一小段然后做 | N |
|4435|割流转化,然后最小割树 | N |
|4437|BFS预处理,然后对每个询问三分 | N |
|4438|忘掉了QAQ | N |
|4439|最小割 | N |
|4444|DP了一下.好像是n倍经验 | N |
|4452|离线,并查集 | N |
|4453|高端的姿势!请单独看我题解 | N |
|4454|O(1)gcd黑科技 | N |
|4455|一点状压 | N |
|4456|分治+Dij | N |
|4458|超级钢琴上树 | N |
|4465|第二类strling数变形 | N |
|4471|矩乘+贪心模拟 | N |
|4472|树形DP一下 | N |
|4475|找规律 | N |
|4488|同cerc2013 Magical Gcd | N |
|4490|同4471 | N |
|4500|差分约束 | N |
|4503|FFT | N |
|4505|考虑只找那个字符串的一半,暴力枚举星号状态,然后匹配 | N |
|4513|数位DP | N |
|4514|费用流一直跑,跑到变负数 | N |
|4515|李超线段树 | N |
|4516|SAM裸题 | N |
|4517|直接错排,但是建议写容斥 | N |
|4518|斜率优化,实际上也可以直接四边形不等式然后分治 | N |
|4519|GHtree | N |
|4520|kdtree,姿势同jzpfar | N |
|4521|数位DP一下 | N |
|4522|按他的要求做就行了..写Pollardrho,然后扩欧什么的.. | N |
|4523|可持久化trie,时刻维护单调栈匹配的最大长度 | N |
|4524|打表+堆然后搜的.. | N |
|4527|这题好神..但是也属于那种单调栈+线段树搞一搞的题目.安利Claris题解 | N |
|4538|链剖线段树+kdtree | N |
|4540|同4262 | N |
|4543|提供nlogn 点分治 O(n) 利用启发式思想的树形DP | N |
|4544|打表观察找到一个积性函数. | N |
|4545|SAM强行上trie..实际上还是2555 | N |
|4548|同4062 | N |
|4551|并查集 | N |
|4552|二分答案,线段树 | N |
|4553|发现成立条件跟a[i],minb[i],maxb[i]有关.实际上是个三维偏序,可以kdtree可以cdq分治. | N |
|4554|拆点,二分图最大匹配 | N |
|4556|SAM+dfs序+主席树 | N |
|4557|树形DP一下 | N |
|4558|容斥.需要很多细节讨论 | N |
|4562|拓扑 | N |
|4263|直接上错排 | N |
|4565|状压DP. | N |
|4566|建两个SAM,考虑下合并代价什么的就行了 | N |
|4568|点分治/倍增+线性基(Claris的点分治模板就是快) | N |
|4569|ST表+并查集 | N |
|4598|可以考虑nlogn的点分治,这是doc老师给的标算,同时还有一种O(n)的做法.基于以前的暴力LCA的DP,考虑使用上启发式思想,可以做出一个漂亮的O(n)DP,基本同 4543Hotel加强版 这个题一样. | N |
|4599|首先可以看出回文串的贡献都是可以单独考虑的,然后其他的串可以考虑行列拆点最小割.具体建图已忘. | N |
|4600|考虑按C分类,然后状压DP. | N |
|4601|比较重要的两个性质:1.路径只有两种可能,分别是两种绕法.选出一行/列,考虑这一行/列的插头状况,发现只有一个插头是非空的有了这两个性质就可以独立考虑做法了. | N |
|4602|带权并查集,或者直接dfs(因为无向图DFS树只有返祖边没有横向边).为了解决分数特别大的问题,考虑记录质因子或者取log(会被卡精度). | N |
|4603|正四面体剖分,然后搞一搞.| N |