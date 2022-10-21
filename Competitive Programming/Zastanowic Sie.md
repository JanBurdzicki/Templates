* Jaką licencję dać na te templatki? Bo jeszcze nie miałem OWI

* using DB = double;
* using CD = complex <double>; // lub może long double
* using VD = vector <double>;
* using VS = vector <string>;
* template<class T> using pqg = priority_queue<T,vector<T>,greater<T>>;

* TODO: dodać pragmy
* constexpr vs const -> roznica ???
* TODO: zrobić template na wypisywanie YES/NO + trzeba pododawać funkcje, że jeśli YES, to wypisz np rozw lub coś innego
* Kolorki do coutów w formacie -> "\e[91m", "\e[39m" -> jakieś ładne kolorki
* Ogarniacie kiedy coś ma być inline a kiedy nie?

Która z tych rzeczy jest lepsza? Bo jest int_distribution w obu (może trzeba zmienić na long long), ale jeden przyjmuje long long, a drugi int
* #define losuj(a, b) uniform_int_distribution<ll>(a, b)(rng)
* #define uid(a, b) uniform_int_distribution<int>(a, b)(rng)

* chcę zrobić templatkę funkcji, która bierze 2 wartości i min/max przypisuje do pierwszej -> jak ją nazwać?