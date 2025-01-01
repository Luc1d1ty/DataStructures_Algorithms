fun main() {
    val userInput: String = readln()

    var lastIndex = userInput.length - 1
    var result = true

    for (i in 0..userInput.length / 2) {
        if (userInput[i] != userInput[lastIndex]){
            result = false
            break
        }
        else {
            lastIndex--
        }
    }
    println(result)
}