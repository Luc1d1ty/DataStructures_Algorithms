fun main() {
    val inp: String = readln()

    var upprVal = inp.length - 1
    var res = true

    for (i in 0..inp.length / 2) {
        if (inp[i] != inp[upprVal]){
            res = false
            break
        }
        else {
            upprVal--
        }
    }
    println(res)
}


//fun main() {
//    for (i in 0 until 5) {
//        val j = 5 - i
//        println("i = $i, j = $j")
//    }
//}