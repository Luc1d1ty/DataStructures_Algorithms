fun main(){
    print("FizzBuzz of 1 to ")
    var num: Int = readln().toInt()
    var fizz = 3
    var buzz = 5

    for (i in 1 .. num){
        var res = ""
        if (i % fizz == 0){
            res += "Fizz"
        }
        if (i % buzz == 0 ){
            res += "Buzz"
        }
        if (res.isEmpty()){
            res += i
        }
        println(res)
    }
}