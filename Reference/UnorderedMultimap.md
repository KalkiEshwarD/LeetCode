# Unordered Multimap

## Initialization

\# include <unoredered_map>
unordered_multimap<int, string> ummName {
    { 1, "A" },
    { 2, "B" },
    { 3, "C" },
};

## Access

for (cont auto& pair: ummName) {
    cout << pair.first << ":" << pair.second << endl;
}

auto found = ummName.find(keyName); / Here key is of type int.

int count = ummName.count(keyName); / Counts the number of occurences of key in the thing

## Modifiers

ummName.insert({ 4, "C" });
ummName.insert({ { 5, "D" }, { 6, "E" } });

