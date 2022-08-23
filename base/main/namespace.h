namespace ns1 {
void method();
//名称空间可以嵌套
namespace ns11 {
void method();
}
}

namespace ns2 {
void method();
}

// 直接定义嵌套的名称空间
namespace ns1::ns11::ns111 {
void method();
}