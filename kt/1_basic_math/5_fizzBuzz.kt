fun main(){
    print("FizzBuzz of 1 to ")
    var num: Int = readln().toInt()

    for (i in 1 .. num){
        if ((i % 3 == 0 ) and (i % 5 == 0 )){
            print("FizzBuzz")
        }
        else if (i % 3 == 0){
            print("Fizz")
        }
        else if (i % 5 == 0 ){
            print("Buzz")
        }
        else{
            print(i)
        }
        println()
    }
}