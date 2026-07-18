# 排序

## 声明

本markdown中代码的对应条件（所有）：

$1 ≤ n ≤ 10^{5}，1 ≤ a_i ≤ x, 1 ≤ x ≤ n$.

"N（不稳定）指处理相等时有概率出现问题的方法"

## 一、选择排序

时间复杂度：

平均：(时间复杂度$O(n^2)$)

最坏：(时间复杂度$O(n^2)$)

稳定性：N(不稳定)

```C++
#include <bits/stdc++.h>
using namespace std;

int n;
int a[100010];

inline void XuanzeSort(int l, int r) {
    for(int i = l; i < r; i ++) {
        int id = 0;
        for(int j = i + 1; j <= r; j ++) {
            if(a[i] > a[j]) {
                id = j;
            }
        }
        swap(a[j], a[id]);
    }
}

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    XuanzeSort(1, n);
    for(int i = 1; i <= n; i ++) {
        cout << a[i] << " ";
    }
}
```

## 二、冒泡排序

时间复杂度：

平均：(时间复杂度$O(n^2)$)

最坏：(时间复杂度$O(n^2)$)

稳定性：Y(稳定)

```C++
#include <bits/stdc++.h>
using namespace std;

int n;
int a[100010];

inline void BubblesSort(int l, int r) {
    for(int i = l; i <= r; i ++) {
        for(int j = 1; j <= r - i; j ++) {
            if(a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    BubblesSort(1, n);
    for(int i = 1; i <= n; i ++) {
        cout << a[i] << " ";
    }
}
```

## 三、计数排序

时间复杂度：

平均：(时间复杂度$O(n + x)$)

最坏：(时间复杂度$O(n + x)$)

稳定性：Y(稳定)

```C++
#include <bits/stdc++.h>
using namespace std;

int n;
int a[100010], c[100010], b[100010];

inline void CountSort(int l, int r) {
    for(int i = 1; i <= n; i ++) {
        c[a[i]]++;
    }
    int l = 0;
    for(int i = 1; i <= n; i ++) {
        if(c[i]) {
            for(int j = 1; j <= c[i]; j ++) {
                b[++l] = i;
            }
        }
    }
}

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    CountSort(1, n);
    for(int i = 1; i <= n; i ++) {
        cout << b[i] << " ";
    }
}
```

## 四、插入排序

时间复杂度：

平均：(时间复杂度$O(n^2)$)

最坏：(时间复杂度$O(n^2)$)

稳定性：Y(稳定)

```C++
#include <bits/stdc++.h>
using namespace std;

int n;
int a[100010];

inline void InsertSort(int l, int r) {
    for(int i = l; i <= r; i ++) {
        for(int j = i; j > l; j --) {
            if(a[j] < a[j - 1]) {
                swap(a[j], a[j - 1]);
            }
        }
    }
}

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    InsertSort(1, n);
    for(int i = 1; i <= n; i ++) {
        cout << a[i] << " ";
    }
}
```

## 五、快速排序(最难写的)

时间复杂度：
平均：(时间复杂度$O(n log n)$)
最坏：(时间复杂度$O(n^2)$)
稳定性：N(不稳定)

```C++
#include <bits/stdc++.h>
using namespace std;

int n;
int a[100010];

inline void quicksort(int l, int r) {
    if(l >= r) {
        return;
    }
    int x = a[l + rand() % (r - l + 1)];
    int l1, l2, y;
    l1 = l2 = y = 0;
    for(int i = l; i <= r; i ++) {
        if(a[i] < x) {
            b[++l1] = a[i];
        } else {
            if(a[i] > x) {
                c[++l2] = a[i];
            } else {
                ++y;
            }
        }
    }
    int p = l;
    fpr(int i = 1; i <= l1; i ++) {
        a[p++] = b[i];
    }
    for(int i = 1; i <= y; i ++) {
        a[p++] = x;
    }
    for(int i = 1; i <= l2; i ++) {
        a[p++] = c[i];
    }
    quicksort(l, l + l1 - 1);
    quicksort(l + l1 + y, r);
}

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    quicksort(1, n);
    for(int i = 1; i <= n; i ++) {
        cout << a[i] << " ";
    }
}
```

## 六、归并排序

时间复杂度：
平均：(时间复杂度$O(n log n)$)
最坏：(时间复杂度$O(n log n)$)
稳定性：Y(稳定)

```C++
#include <bits/stdc++.h>
using namespace std;

int n;
int a[100010];

inline void mergesort(int l, int r) {
    if(l == r) {
        return;
    }
    int m = (l + r) / 2;
    mergesort(l, m);
    mergesort(m + 1, r);
    int p1 = l, p2 = m + 1, tot = 0;
    while(p1 <= m && p2 <= r) {
        if(a[p1] <= a[p2]) {
            c[++tot] = a[p1++];
        } else {
            c[++tot] = a[p2++];
        }
    }
    while(p1 <= m) {
        c[++tot] = a[p1++];
    }
    while(p2 <= r) {
        c[++tot] = a[p2++];
    }
    for(int i = 1; i <= tot; i ++) {
        a[i + l - 1] = c[i];
    }
}

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    mergesort(1, n);
    for(int i = 1; i <= n; i ++) {
        cout << a[i] << " ";
    }
}
```

## 七、最终之神——sort

时间复杂度：
平均：(时间复杂度$O(log n)$)
最坏：(时间复杂度$O(log n)$)
稳定性：N(不稳定)

```C++
#include <bits/stdc++.h>
using namespace std;

int n;
int a[100010];

int main() {
    cin >> n;
    for(int i = 1; i <= n; i ++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    //从大往小加写个cmp
    for(int i = 1; i <= n; i ++) {
        cout << a[i] << " ";
    }
}
```

# Tips

从大到小排序未收录于此Markdown中，请前往"从大到小排序.md"。

# 总结

我的**应用**频率：
$ 1. `sort`排序 ≥ 90\% $
$ 2. $计数排序$ ≥ 5\% $
$ 3. $冒泡排序$ ≥ 3\% $
$ 4. $选择排序$ ≥ 2\% $
$ 5. $归并排序$ ≈ 0\% $
$ 6. $插入排序$ ≈ 0\% $
$ 7. $快速排序$ ≈ 0\% $

附加的头文件：[C++扩展库](https://github.com/Huo-Tian/CPP--ByHuoTian)
