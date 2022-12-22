# V1.1

Šioje versijoje vietoj struktūros (*struct*) yra naudojama klasė (*class*).

Spartos analizėje buvo naudojamas *vector* tipo konteineris, 100000 ir 1000000 dydžio failai bei geriausia studentų dalijimo į dvi grupes strategija:

 Strategija nr.2 pritaikius **copy_if** ir **remove_if** algoritmus (naudojama tik _std::vector_ tipo konteineriui)
  ```c++
  copy_if(studentai.begin(), studentai.end(), back_inserter(vargsiukai), vargsiuku_paz1);
  studentai.erase(remove_if(studentai.begin(), studentai.end(), vargsiuku_paz1), studentai.end());
 ```

# V1.1 rezultatai

Gauti rezultatai rodo, kad studentų dalijimas į dvi grupes trunka mažiau laiko, kai yra naudojama struktūra, tačiau studentų rezultatų išvedimas į du failus trunka mažiau laiko, kai yra naudojama klasė.

***struct***
![vector struct](https://user-images.githubusercontent.com/112932535/209170795-577a7cf6-1ec4-400a-bccf-e2573a9739e7.PNG)

***class***
![class1](https://user-images.githubusercontent.com/112932535/209170807-dfd415b1-b2b5-4d33-b5b5-8fa2cf21c9ca.PNG)
