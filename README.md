# V.2

Šioje versijoje *Studentas* klasei realizuotas *"Rule of three"*

**Destructor**
``` c++
 ~Studentas() { 
        paz.clear();
    }
```

**Copy constructor**
```c++

Studentas(const Studentas& s) { 
        Vard = s.Vard;
        Pav = s.Pav;
        egz = s.egz;
        paz = s.paz;
        galut = s.galut;
        median = s.median;
    }

```


**Copy assigment**

``` C++
Studentas& operator=(const Studentas & s) {
        if (this == &s) {
            return *this;
        }
        Vard = s.Vard;
        Pav = s.Pav;
        egz = s.egz;
        copy(s.paz.begin(), s.paz.end(), paz.begin());
        galut = s.galut;
        median = s.median;
        return *this;
    }

```
