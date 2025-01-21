// working with non-primitive array . size of array is fixed !

fun main() {
    print("Enter Array Size : ")
    var sz = readInt()
    print("Enter Array elements : ")
    var arr = Array(sz) { 0 }

    // using method chaining to read from the terminal in a single line .
    readln().split(' ').mapIndexed { index, value -> arr[index] = value.toInt() }

    // alternatively , // var arr = readln().split(' ').map{it.toInt()}.toTypedArray() // can be used .
    println("Empty Array of size $sz initialized .")
    print("Elements are : ${printArr(*arr)}")
    do {
        println("\nOperations : ")
        println(
            """ 1 -> Print Array .
            | 2 -> Update Item .
            | 3 -> Find Item .
            | 4 -> Add Item (Not recommended !).
            | 0 -> Terminate Program .
            |Enter here : 
        """.trimMargin()
        )
        var op = readInt()

        when (op) {
            1 -> println("Elements are : ${printArr(*arr)}")
            2 -> {
                print(" Enter index 0 <= your Input <= ${sz - 1} : ")
                var pos = readInt()
                print("Enter Value : ")
                var valToFind = readInt()
                arr[pos] = valToFind
                print(" Your New Array : ${printArr(*arr)}")
            }

            3 -> {
                println("Enter the value you want to find .")
                var toFind = readInt()
                println(if (toFind in arr) "Found at index ${arr.indexOf(toFind)}" else "not found")
            }
            4 -> {
                println("Not recommended . It will create a copied version of existing Array with newly added item .")
                println("Demo : Enter value : ")
                arr += readInt()
                print(" Your New Array : ${printArr(*arr)}")
            }
            else -> println("Bye")

        }

    } while (op != 0)

}


fun <T> printArr(vararg arr: T) = arr.joinToString(" ")
fun readInt() = readln().toInt()