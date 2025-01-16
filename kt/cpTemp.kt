// template to use for cp . example submission of https://codeforces.com/contest/1566/problem/B

import java.io.*
import java.util.*

fun main() {
    var fs = FScan2()
    var pw =  PrintWriter(System.`out`,true);

    repeat(fs.nextInt()){

        var s = fs.next()
        var cnt = 0
        var fn = 0

        for (i in 0 until (s.length)) {
            if(s[i] == '0'){
                cnt = 1
            }
            else if(s[i] != '0' && cnt == 1){
                fn++
                cnt = 0
            }
        }
        if (s[s.length - 1] == '0'){
            fn++
        }
        pw.println(Math.min(fn,2))
    }

}

internal class FScan2 {
    private var br = BufferedReader(InputStreamReader(System.`in`))
    private var st = StringTokenizer("")
    operator fun next(): String {
        while (!st.hasMoreTokens()) try {
            st = StringTokenizer(br.readLine())
        } catch (e: IOException) {}
        return st.nextToken()
    }

    fun nextInt(): Int {
        return next().toInt()
    }

    fun nextLong(): Long {
        return next().toLong()
    }

    fun nextDouble(): Double {
        return next().toDouble()
    }
}


//private fun readInt() = readln().toInt()
//private fun readLong() = readln().toLong()
//private fun readDouble() = readln().toDouble()
//private fun readStrings() = readln().split(" ")
//private fun readInts() = readStrings().map { it.toInt() }
//private fun inArrOfLis(sz: Int) = Array(sz) {readln().split(' ')} // fixed sized Array of list as an example .
//private fun readArrInt() = readInts().toTypedArray()
//private fun readLongs() = readStrings().map { it.toLong() }
//private fun readDoubles() = readStrings().map { it.toDouble() }