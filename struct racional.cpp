#include <stdio.h>

	struct racional{
		private:
			int numerador;
			int denominador;
		public:
			void imprimir();
			void asignar(int n, int d);
			racional sumarRacionales(racional r);
			racional restarRacionales(racional r);
			racional multiplicarRacionales(racional r);
			racional dividirRacionales(racional r);
			int mcd(int a, int b);
			racional simplificarRacionales();
	};
	
	void racional::imprimir(){
		printf("%d /", numerador);
		printf("%d \n", denominador);
	};
	
	void racional::asignar(int n, int d){
		numerador=n;
		denominador=d;
	};
	
	racional racional::sumarRacionales(racional r){
		racional aux;
		aux.numerador=numerador*r.denominador + denominador*r.numerador;
		aux.denominador=denominador*r.denominador;
		return aux;
	};
	
	racional racional::restarRacionales(racional r){
		racional aux;
		aux.numerador=numerador*r.denominador - denominador*r.numerador;
		aux.denominador=denominador*r.denominador;
		return aux;
	};
	
	racional racional::multiplicarRacionales(racional r){
		racional aux;
		aux.numerador=numerador*r.numerador;
		aux.denominador=denominador*r.denominador;
		return aux;
	};
	
	racional racional::dividirRacionales(racional r){
		racional aux;
		aux.numerador=numerador*r.denominador;
		aux.denominador=r.numerador*denominador;
		return aux;
	};
	
	int racional::mcd(int a, int b){
		int aux=1, i;
		if (a<b){
			int intermedio;
			intermedio=a;
			a=b;
			b=intermedio;
		}
		for (int i=2; i<=b; i++){
			if (((a%i)==0)&&((b%i)==0)){
				aux=i;
			}
		}
		return aux;
	};
	
	racional racional::simplificarRacionales(){
		racional aux;
		int maxcomdiv;
		maxcomdiv=mcd(numerador, denominador);
		aux.numerador=numerador/maxcomdiv;
		aux.denominador=denominador/maxcomdiv;
		return aux;
	};
	
	
	int main(){
		racional r1, r2, r3, r4, r5, r6, r7;
		r1.asignar(1,2);
		r2.asignar(3,4);
		r3=r1.sumarRacionales(r2);
		r4=r1.restarRacionales(r2);
		r5=r1.multiplicarRacionales(r2);
		r6=r1.dividirRacionales(r2);
		r7=r3.simplificarRacionales();
      printf("Operaciones basicas entre las sig. fracciones: \n");
	   r1.imprimir();
	   r2.imprimir();
      printf("Suma: \n");
	   r3.imprimir();
      printf("Resta: \n");
  	   r4.imprimir();
      printf("Multiplicacion: \n");
  	   r5.imprimir();
      printf("Division: \n");
      r6.imprimir();
      printf("Simplificación de la suma: \n");
  	   r7.imprimir();
		return 0;
	}
