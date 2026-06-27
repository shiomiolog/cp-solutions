#include <iostream>
#include <atcoder/dsu>

int main()
{
    // 要素数5のUnion-Findを作成
    atcoder::dsu d(5);

    std::cout << "--- C++ ACL 動作テスト ---" << std::endl;
    std::cout << "要素数 " << d.size(0) << " の親を正常に初期化しました！" << std::endl;

    return 0;
}