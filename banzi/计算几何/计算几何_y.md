1. 前置知识点
   $$
   pi = acos(-1);
   $$

​		
$$
余弦定理 c^2 = a^2 + b^2 - 2abcos(t)
$$

2. 浮点数的比较

   ```c++
   const double eps = 1e-8;
   int sign(double x) // 符号函数
   {
     if (fabs(x) < eps) return 0;
     if (x < 0) return -1;
     return 1;
   }
   int cmp(double x, double y) // 比较函数
   {
     if (fabs(x - y) < eps) return 0;
     if (x < y) return -1;
     return 1;
   }
   ```

3. 向量
     3.1 向量的加减法和数乘运算
     3.2 内积（点积） A·B = |A||B|cos(C)
       (1) 几何意义：向量A在向量B上的投影与B的长度的乘积。
       (2) 代码实现
       double dot(Point a, Point b)
       {
         return a.x * b.x + a.y * b.y;
       }
     3.3 外积（叉积） AxB = |A||B|sin(C)
       (1) 几何意义：向量A与B张成的平行四边形的有向面积。B在A的逆时针方向为正。
       (2) 代码实现
       double cross(Point a, Point b)
       {
         return a.x * b.y - b.x * a.y;
       }
     3.4 常用函数
       3.4.1 取模
       double get_length(Point a)
       {
         return sqrt(dot(a, a));
       }
       3.4.2 计算向量夹角
       double get_angle(Point a, Point b)
       {
         return acos(dot(a, b) / get_length(a) / get_length(b));
       }
       3.4.3 计算两个向量构成的平行四边形有向面积
       double area(Point a, Point b, Point c)
       {
         return cross(b - a, c - a);
       }
       3.4.5 向量A顺时针旋转C的角度：
       Point rotate(Point a, double angle)
       {
         return Point(a.x * cos(angle) + a.y * sin(angle), -a.x * sin(angle) + a.y * cos(angle));
       }
   \4. 点与线
     4.1 直线定理
       (1) 一般式 ax + by + c = 0
       (2) 点向式 p0 + vt
       (3) 斜截式 y = kx + b
     4.2 常用操作
       (1) 判断点在直线上 A x B = 0
       (2) 两直线相交
       // cross(v, w) == 0则两直线平行或者重合
       Point get_line_intersection(Point p, Vector v, Point q, vector w)
       {
         vector u = p - q;
         double t = cross(w, u) / cross(v, w);
         return p + v * t;
       }
       (3) 点到直线的距离
       double distance_to_line(Point p, Point a, Point b)
       {
         vector v1 = b - a, v2 = p - a;
         return fabs(cross(v1, v2) / get_length(v1));
       }
       (4) 点到线段的距离
       double distance_to_segment(Point p, Point a, Point b)
       {
         if (a == b) return get_length(p - a);
         Vector v1 = b - a, v2 = p - a, v3 = p - b;
         if (sign(dot(v1, v2)) < 0) return get_length(v2);
         if (sign(dot(v1, v3)) > 0) return get_length(v3);
         return distance_to_line(p, a, b);
       }
       (5) 点在直线上的投影
       Point get_line_projection(Point p, Point a, Point b)
       {
         Vector v = b - a;
         return a + v * (dot(v, p - a) / dot(v, v));
       }
       (6) 点是否在线段上
       bool on_segment(Point p, Point a, Point b)
       {
         return sign(cross(p - a, p - b)) == 0 && sign(dot(p - a, p - b)) <= 0;
       }
       (7) 判断两线段是否相交
       bool segment_intersection(Point a1, Point a2, Point b1, Point b2)
       {
         double c1 = cross(a2 - a1, b1 - a1), c2 = cross(a2 - a1, b2 - a1);
         double c3 = cross(b2 - b1, a2 - b1), c4 = cross(b2 - b1, a1 - b1);
         return sign(c1) * sign(c2) <= 0 && sign(c3) * sign(c4) <= 0;
       }
   \5. 多边形
     5.1 三角形
     5.1.1 面积
       (1) 叉积
       (2) 海伦公式
         p = (a + b + c) / 2;
         S = sqrt(p(p - a) * (p - b) * (p - c));
     5.1.2 三角形四心
       (1) 外心，外接圆圆心
         三边中垂线交点。到三角形三个顶点的距离相等
       (2) 内心，内切圆圆心
         角平分线交点，到三边距离相等
       (3) 垂心
         三条垂线交点
       (4) 重心
         三条中线交点（到三角形三顶点距离的平方和最小的点，三角形内到三边距离之积最大的点）
     5.2 普通多边形
       通常按逆时针存储所有点
       5.2.1 定义
       (1) 多边形
         由在同一平面且不再同一直线上的多条线段首尾顺次连接且不相交所组成的图形叫多边形
       (2) 简单多边形
         简单多边形是除相邻边外其它边不相交的多边形
       (3) 凸多边形
         过多边形的任意一边做一条直线，如果其他各个顶点都在这条直线的同侧，则把这个多边形叫做凸多边形
         任意凸多边形外角和均为360°
         任意凸多边形内角和为(n−2)180°
       5.2.2 常用函数
       (1) 求多边形面积（不一定是凸多边形）
       我们可以从第一个顶点除法把凸多边形分成n − 2个三角形，然后把面积加起来。
       double polygon_area(Point p[], int n)
       {
         double s = 0;
         for (int i = 1; i + 1 < n; i ++ )
           s += cross(p[i] - p[0], p[i + 1] - p[i]);
         return s / 2;
       }
       (2) 判断点是否在多边形内（不一定是凸多边形）
       a. 射线法，从该点任意做一条和所有边都不平行的射线。交点个数为偶数，则在多边形外，为奇数，则在多边形内。
       b. 转角法
       (3) 判断点是否在凸多边形内
       只需判断点是否在所有边的左边（逆时针存储多边形）。
     5.3 皮克定理
       皮克定理是指一个计算点阵中顶点在格点上的多边形面积公式该公式可以表示为:
         S = a + b/2 - 1
       其中a表示多边形内部的点数，b表示多边形边界上的点数，S表示多边形的面积。
   \6. 圆
     (1) 圆与直线交点
     (2) 两圆交点
     (3) 点到圆的切线
     (4) 两圆公切线
     (5) 两圆相交面积