fun main() {
    val t = readln().toInt()

    repeat(t) {
        val n = readln().toInt()

        val numbers = readln().split(" ").map { it.toLong() }

        val frequencyMap = numbers.groupingBy { it }.eachCount()

        val uniqueNumber = frequencyMap.filter { it.value == 1 }.keys.first()

                val ans = numbers.indexOf(uniqueNumber) + 1

        
        println(ans)
    }
}