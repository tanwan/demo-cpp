// 一般来说template <typename T>跟template <class T>是一样的
// 多个使用template <typename T1,typename T2>
// 模板类都需要定义在头文件中

// 函数模板
// T的只作用于当前方法
template <typename T> T add(T a, T b) { return a + b; }

// K,V只作用于当前类
template <typename K, typename V> class Pair {
public:
  Pair(K k, V v) : key(k), value(v) {}

  K getKey() const { return key; }

  V getValue() const { return value; }

private:
  K key;
  V value;
};