# CCSJP3
# C, C++, C#, Java, Python3を忘れないために.

/*
 * # 実行環境
 */


/*
 * # クラス, 関数, メンバ変数のケース
 */

/* "C#" */
全てUpperCamelcase.

/* "Java" */
classのみUpperCamelcase.
関数とメンバ変数はLowerCamelcase.


/* 
 * # ライブラリその他の読み込み等
 */

/* "C, C++" */
#include <x>
#include "x"

/* "C#" */
コンパイラに/rオプションでdllファイルを指定.

/* "Java" */
import X.x;
package x;
packageは名前空間かも.

/* "Python3" */
import X.x
from X import x


/*
 * # 名前空間
 */

/* "C++" */
namesapce x;
using namespace x;

/* "C#" */
using

/* "Java" */
package

/* "Python3" */


/*
 * # エントリポイント
 * # コマンドライン引数
 */

/* "C, C++" */
int main(int argc, char *argv[])

/* "C#" */
static void Main(string[] args)
stringはStringでも可. stringはStringクラスのエイリアス.

/* "Java" */
public static void main(String args[])

/* "Python3" */
if __name__ == '__main__' :
コマンドライン引数はsys.argv


/*
 * # 入出力
 * 整数型の入力を変数xに代入してそれを出力する.
 */

/* "C, C++" */
scanf("%d", &x);
printf("x = %d\n", x);
fgets(c, sizeof (c), stdin);
fprintf(stdout, "%s", c);

/* "C++" */
cin >> x;
cout << x;

/* "C#" */
Console.ReadLine(x);
Console.WriteLine("x = {0}", x);
Console.Write("x = {0]\n", x);

/* "Java" */
InputStreamReader is = new InputStreamReader(System.in);
BufferedReader br = new BufferedReader(is);
try {
        int x = Integer.parseInt(br.readLine());
        System.out.println("x = " + x);
        System.out.print("x = " + x);
} catch(IOException e) {
        System.err.println("Exception : " + e);
}
System.xxがストリーム.

Scannerクラスを使う方法
Scanner scan = new Scanner(Sytem.in);
String str = scan.next();
int x = scan.nextInt();
System.out.println(str);
System.out.println(x);

/* "Python3" */
x = input()
print('x = {}'.format(x))


/*
 * # コメント
 */

/* "C, C++, C#, Java" */
/* */
//

/* "Python3" */
#


/*
 * # NULL
 */

/* "C, C++" */
NULL

/* "C#, Java" */
null

/* "Python3" */
None


/*
 * # 真偽
 */

/* "C, C++" */
0が偽
0以外が真
false
true

/* "C#, Java" */
true
false

/* "Python3" */
0が偽
0以外が真
True
False


/*
 * # 型変換, 型キャスト
 */

/* "C, C++, C#" */
(int)
(float)
バイト数が大きい型から小さい型への暗黙的型変換あり.
CとC++は汎整数拡張があるけどC#はわからない.

/* "C#" */
int.Parse()
float.Parse()
Convert.ToInt32()
Convertクラスで変換するとnullを渡してもerrorにならない.

/* "Java" */
Integer.parseInt()
Integer.valueOf()
parseInt()はプリミティブ型を返す.
valueOf()はラッパー型を返す.

/* "Python3" */
int()
float()
バイト数が大きい型から小さい型への暗黙的型変換あり.


/*
 * # 文字列クラス関係の変換
 */
/* "C" */
なし.

/* "C++" */
std::to_string()
std::stoi()
std::stod()
std::stof()
c_str()

/* "C#" */
str = x.ToString();
int.Parse(str)
float.Parse(str)
Convert.ToString()
Convertクラスで変換するとnullを渡してもerrorにならない.

/* "Java" */
Integer.toString()
String.valueOf()
Integer.parseInt()
Integer.valueOf()

/* "Python3" */
str()
int()
普通のPython3の型キャストと同じ


/*
 * # 定数, 静的変数
 */

/* "C, C++, C#" */
const

/* "C#" */
readonly
classのメンバに対してのみ可.

/* "Java" */
final


/*
 * # 型推論
 */

/* "C" */
なし.

/* "C++" */
auto
関数の戻り値型にも仕える. そのときはreturnから推論.

/* "C#" */
var 

/* "Java" */
わからん. Java8からあるっぽいけど.

/* "Python3" */
あるのかすらわからない.


/*
 * # if
 */

/* "C, C++, C#, Java" */
if () {}
else if () {}
else {}

/* "Python3" */
if :
elif :
else :


/*
 * # switch
 */

/* "C, C++, C#, Java" */
switch () {
        case :
                break;
        case :
                break;
        default :
                break;
}

C#はfall through禁止. 連続したcaseの場合のみ可.

/* "Python3" */
switchなし.

/*
 * # for, foreach
 */

/* "C, C++, C#, Java" */
for (;;) {}

/* "C++" */
for (:) {}

/* "C#" */
foreach ( in ) {}

/* "Java" */
for (:) {}

/* "Python3" */
for in :


/*
 * # while, do while
 */

/* "C, C++, C#, Java" */
while () {}
do {} while();

/* "Python3" */
while : 

do whileなし.


/*
 * # 配列, 多次元配列, 配列のサイズ
 */

/* "C, C++" */
int x[10];

int x[] = {};

int x[10][10];

int x[][10] = {{}};

sizeof x / sizeof x[0]

/* "C#" */
int[] x;
x = new int[10];

int[] x = {};

int[] x = new int[] {};

var x = new[] {};

int[,] x;
x = new int[10, 10];

int[,] x = new int[10, 10];

int[,] x = new int[,] {{}};

配列の配列
int[][] x = new int[][] {
        new int[]{},
        new int[]{}
};

多次元配列と配列の配列との違いはnewが必要か否か.

x.Length

x.GetLength()
多次元配列の時, 引数に次元数.

/* "Java" */
int[] x;
x = new int[10];

int[] x = {};

int[] x = new int[] {};

int[][] x;
x = new int[10][];

int[][] x = new int[10][10];

int[][] = {{}};

x.length
x[index].length

/* "Python3" */
配列なし.


/*
 * # 関数, expression-bodied, ローカル関数, 仮引数, 
 * # デフォルト引数, オプション引数, 名前付き引数, 
 * # 可変長引数, アドレス渡し, 参照渡し, オーバーロード
 */

/* "C, C++, C#, Java" */
int f(int x) {}

/* "C, C++" */
int f(int *x) {}

int f(int x, ...) {
        va_list args;
        va_start(args, x);
        int value = va_arg(args, int);
        va_end(args);
}

/* "C++" */
int f(int x = 100) {}
int f(int &x) {}
オーバーロード可.

/* "C#" */
int f() =>

int f() { 
        int lf() {} 
}

int f(int x = 100) {}

f(x : 10); 名前付き引数.

int f(params int[] args) {}

f(ref x);
int f(ref int x) {}
参照渡しは呼び出し側にもref必要.

オーバーロード可.

/* "Java" */
ローカルclassがある.
ローカル関数はないっぽい?

デフォルト引数と名前付き引数はない.

int f(int... x) {
        x[index];
}

配列とオブジェクトは参照渡しされるぽい.

オーバーロード可.

/* "Python3" */
def f() :

def f() :
        def lf() :

def f(int x = 10) :

f(x = 10);
def f(int x)

int f(*args) :
int f(**args) :
アスタリスク1つだとタプルに, 2つだと辞書にまとめてくれる.

デフォルトで参照渡し.

オーバーロード可.


/*
 * # ラムダ式, 匿名関数
 */

/* "C" */
なし.

/* "C++" */
[](x) -> int {}
[キャプチャ]
(パラメータ)
属性 ->
戻り値型を推論する場合は -> と 戻り値型を省略可.

/* "C#" */
x =>

/* "Java" */
(x) -> {}

/* "Python3" */
lambda x : 


/*
 * # 列挙型
 */

/* "C" */








