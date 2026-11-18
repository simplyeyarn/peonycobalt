#include <string>
#include <vector>

void max_of_two() {
    int a = 33, b = 57;
    int m = (a > b) ? a : b;
    (void)m;
}

void sum_squares() {
    int acc = 0;
    for (int i = -5; i <= 5; ++i) acc += i * i;
    (void)acc;
}

void count_vowels() {
    std::string text = "prism bridge";
    int vowels = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        char ch = text[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') vowels += 1;
    }
    (void)vowels;
}

void char_frequency() {
    std::string text = "banana";
    int count = 0;
    for (std::size_t i = 0; i < text.size(); ++i) {
        if (text[i] == 'a') count += 1;
    }
    (void)count;
}

extern "C" int serene_compass();
extern void noble_vale();
extern void sable_meadow();

int main() {
    max_of_two();
    sum_squares();
    count_vowels();
    char_frequency();
    noble_vale();
    sable_meadow();
    return serene_compass();
}
