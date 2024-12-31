fun main(){
    // user input
    var value = readln().toInt()
    var res = 0
    while (value > 0 ){
        value /= 10
        res += 1
    }

    println("$res")
}