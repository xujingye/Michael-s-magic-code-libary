
// # 0.01
// stringsplit is intended to spilt target string by whitespace
// the splited substrings will be stored into container
// if the # of substrings equal size, i will return true
// otherwise, it will return false

bool stringsplit(string container[], string line , int size) {
    int pos = 0;
    string temp;
    istringstream ss{line};
    while (pos < size && ss >> temp){
        container[pos] = temp;
        pos++;
    }
    return !(ss >> temp) && (size == pos) ;
}
