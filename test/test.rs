use ac_library::Dsu;
use proconio::input;

fn main() {
    println!("--- Rust 動作テスト ---");
    println!("適当な数値を入力して Enter を押してください（例: 5）:");

    input! {
        n: usize,
    }

    let mut dsu = Dsu::new(n);
    println!(
        "要素数 {} の親を正常に初期化しました。環境構築は完全に成功しています！",
        dsu.size(0)
    );
}
