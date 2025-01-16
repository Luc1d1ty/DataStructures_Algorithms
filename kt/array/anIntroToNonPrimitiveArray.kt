fun main(){
    // Non-primitive Array . can be declared in many ways .
    // i -> i ( lambda function )
    // or "it" ( iterator )

    val arr = arrayOf(1 , 2 , 38)                    // typical <
    var arr2: Array<Int> = arrayOf<Int>(4 , 5 , 5)   // same operation as "arr" ^
    /* Array Constructor */
    var arr3 = Array(3) { 0 }                        // array of 3 zeros
    var arr4 = Array(3) { it }                       // array size 3 . "it" gets index values which are 0, 1, 2 .
    var arr5 = Array(3) { i -> (i * 2).toString() }  // here "i" gets size of arr5 . Same operation as "arr4" but different use case .

    var arr0: Array<Any> = arrayOf(1 , 2 , "Gg")     // contains elements of any data type

    arr3.forEach { i -> println(i) }                 // an example of forEach

}


// println(arr contentEquals arr2) // compares array elements