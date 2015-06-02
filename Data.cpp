class Time {
 private: 
	int getDia() const{
		return this.dia;
	}
	
	int getMes() const{
		return this.mes;
	}
	int getAno() const{
		return this.ano;
	}
	
	void setDia(int d){
		int udia;
		udia = ultDia(this.mes);
	
		if ((d > 0) && (d <udia))
			this.dia = d;
		else
			cout << "Dia inválido!" << endl;
	}
	void setMes(int m){
		if ((m > 0) && (m < 12))
			this.mes = m;
		else
			cout << "Mês inválido!" << endl;
	}
	void setAno(int a){
		if (a > 0)
			this.ano = a;
		else
			cout << "Ano inválido!" << endl;
	}
	
	int isBisex(int a){
	// Pelado, trabalhe nessa função
		if (a%4==0)
			return 1;
		else
			return 0;
	}
	
	// Germano trabalhando nessa função
	int ultDia(int m){
	int udia;
	if ((this.mes==1) || (this.mes==3) ||(this.mes==5) ||(this.mes==7) ||(this.mes==8) ||(this.mes==10) ||(this.mes==12))
		udia = 31;
	else
		udia = 30;
	if (mes == 2)
		udia = 28;
	if (isBisex(this.ano))
		udia = 29;
	return udia;
	}
	

public:    
	Data(int dia, int mes, int ano); 
	void mostra() const{
		cout << this.getDia() << "/" << this.getMes << "/" << this.getAno << endl;
	}
	
	Data diaSeguinte() const{
	Data dSeg(this.getDia, this.getMes, this.getAno);
		if (dSeg. == ultDia(m))
		{
			dSeg.dia = 1;
			dSeg.mes++;
			if (mdSeg.mes>12)
			{
				dSeg.mes=1;
				dSeg.ano++;
			}
		}
		return dSeg;
	}
};