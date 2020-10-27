func defangIPaddr(address string) string {
	var s strings.Builder
	for i := range address {
		if address[i] == '.' {
			s.WriteString("[.]")
		} else {
			s.WriteByte(address[i])
		}
	}
	return s.String()
}