public class Main {
    public static void main(String[] args) {
        String s = "mjmqqjrmzkvhxlyruonekhhofpzzslupzojfuoztvzmmqvmlhgqxehojfowtrinbatjujaxekbcydldglkbxsqbbnrkhfdnpfbuaktupfftiljwpgglkjqunvithzlzpgikixqeuimmtbiskemplcvljqgvlzvnqxgedxqnznddkiujwhdefziydtquoudzxstpjjitmiimbjfgfjikkjycwgnpdxpeppsturjwkgnifinccvqzwlbmgpdaodzptyrjjkbqmgdrftfbwgimsmjpknuqtijrsnwvtytqqvookinzmkkkrkgwafohflvuedssukjgipgmypakhlckvizmqvycvbxhlljzejcaijqnfgobuhuiahtmxfzoplmmjfxtggwwxliplntkfuxjcnzcqsaagahbbneugiocexcfpszzomumfqpaiydssmihdoewahoswhlnpctjmkyufsvjlrflfiktndubnymenlmpyrhjxfdcq";
        String t = "rjufvjafbxnbgriwgokdgqdqewn";

        int flag = 0;
        int start = 0;
        for (int i = 0; i < t.length(); i++) {
            char temp = t.charAt(i);
            for (int j = start; j < s.length(); j++) {
                if (temp == s.charAt(j)) {
                    start = j + 1;
                    flag++;
                    break;
                }
            }
        }
        if (flag == t.length())
            System.out.println("true");
        else {
            System.out.println("false");
        }
    }
}
