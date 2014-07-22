template <class T>
class Tabla {
  public:
   Tabla(int nElem);
   ~Tabla();
   T& operator[](int indice) { return pT[indice]; }

  private:
   T *pT;
   int nElementos;
};


template <class T>
Tabla<T>::Tabla(int nElem) : nElementos(nElem) {
   pT = new T[nElementos];
}

template <class T>
Tabla<T>::~Tabla() {
   delete[] pT;
}
