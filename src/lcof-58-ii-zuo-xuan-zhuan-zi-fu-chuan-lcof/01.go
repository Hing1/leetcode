func reverseLeftWords(s string, n int) string {
    return s[n:] + s[0:n]
}