fun main() {
    val n: Int = readln().toInt()
    var res = 1 // factorial of 0 and 1 is 1 , so default initialization is at least 1 .

    for (i in 2..n) {
        res *= i
    }
    print(res)
}