# Defaultowe flagi:
"cpp": "cd $dir && g++ -g -std=c++17 -O3 -Wall -Wextra -pedantic -Wshadow -Wformat=2 -Wfloat-equal -Wconversion -Wlogical-op -Wshift-overflow=2 -Wduplicated-cond -Wcast-qual -Wcast-align -fsanitize=address -fsanitize=undefined -fno-sanitize-recover -fstack-protector -DLOCAL '$fileName' -o '$fileNameWithoutExt'"

# Krótsze flagi:

## Dodatkowe flagi do debugowania:
"cpp": "cd $dir && g++ -std=c++17 -Wshadow -Wall -g -fsanitize=address -fsanitize=undefined -D_GLIBCXX_DEBUG '$fileName' -o '$fileNameWithoutExt'"

## Sprawdzanie szybkości programu / testowanie automatyczne na dużej ilości testów:
"cpp": "cd $dir && g++ -std=c++17 -Wshadow -Wall -O2 -Wno-unused-result '$fileName' -o '$fileNameWithoutExt'"