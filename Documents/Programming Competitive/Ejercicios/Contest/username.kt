import java.util.*

fun main() {
    val scanner = Scanner(System.`in`)
    val t = scanner.nextInt()
    val res = mutableListOf<String>()

    repeat(t) {
        val username = scanner.next()
        val modifiedUsername = username.substring(0, username.length - 1)
        res.add(modifiedUsername)
    }

    for (elem in res) {
        println(elem)
    }
}
