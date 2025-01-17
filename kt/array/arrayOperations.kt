// working with non-primitive array . size of array is fixed !

fun main() {
    print("Enter Array Size : ")
    var sz = readln().toInt()
    var arr = Array (sz) { 0 }
    println("Empty Array of size $sz initialized .")
    print("Elements are : ${printArr(*arr)}")
    do {
        println("\nOperations : ")
        println(""" 1 -> Print Array .
            | 2 -> Update Item .
            | 3 -> Delete Item .
            | 4 -> Find Item .
            | 0 -> Terminate Program .
            |Enter here : 
        """.trimMargin())
        var op = readln().toInt()

        when (op) {
            1 -> println("Elements are : ${printArr(*arr)}")
            2 -> {
                print(" Enter index 0 <= your Input <= ${sz - 1} : ")
                var pos = readInt()
                print("Enter Value : ")
                var valToStore = readInt()
                arr[pos] = valToStore
                print(" Your New Array : ${printArr(*arr)}")
            }
        }

    } while (op != 0)

}



fun <T> printArr(vararg arr: T) = arr.joinToString(" ")
fun readInt() = readln().toInt()