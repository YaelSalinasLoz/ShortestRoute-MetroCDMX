
#include <iostream>
#include <string>
#include "Grafo.h"


int main()
{
	setlocale(LC_ALL, "");
	Grafo* grafo = new Grafo();
	int opc = 0;
	//LINEA 1
		//Estaciones (Vértices)
	grafo->InsertaVertice("Observatorio");
	grafo->InsertaVertice("Tacubaya"); //!!!
	grafo->InsertaVertice("Juanacatlan");
	grafo->InsertaVertice("Chapultepec");
	grafo->InsertaVertice("Sevilla");
	grafo->InsertaVertice("Insurgentes");
	grafo->InsertaVertice("Cuauhtemoc");
	grafo->InsertaVertice("Balderas"); //!!!
	grafo->InsertaVertice("Salto de Agua"); //!!!
	grafo->InsertaVertice("Isabel la Catolica");
	grafo->InsertaVertice("Pino Suarez"); //!!!
	grafo->InsertaVertice("Merced");
	grafo->InsertaVertice("Candelaria"); //!!!
	grafo->InsertaVertice("San Lazaro"); //!!!
	grafo->InsertaVertice("Moctezuma");
	grafo->InsertaVertice("Balbuena");
	grafo->InsertaVertice("Blvd Puerto Aereo");
	grafo->InsertaVertice("Gomez Farias");
	grafo->InsertaVertice("Zaragoza");
	grafo->InsertaVertice("Pantitlan"); //!!!
	//Aristas (Sin Transbordes)
	grafo->InsertaArista("Observatorio", "Tacubaya", 1262);
	grafo->InsertaArista("Juanacatlan", "Tacubaya", 1158);
	grafo->InsertaArista("Juanacatlan", "Chapultepec", 973);
	grafo->InsertaArista("Chapultepec", "Juanacatlan", 973);
	grafo->InsertaArista("Chapultepec", "Sevilla", 501);
	grafo->InsertaArista("Sevilla", "Chapultepec", 501);
	grafo->InsertaArista("Sevilla", "Insurgentes", 645);
	grafo->InsertaArista("Insurgentes", "Sevilla", 645);
	grafo->InsertaArista("Insurgentes", "Cuauhtemoc", 793);
	grafo->InsertaArista("Cuauhtemoc", "Insurgentes", 793);
	grafo->InsertaArista("Cuauhtemoc", "Balderas", 409);
	grafo->InsertaArista("Isabel la Catolica", "Salto de Agua", 445);
	grafo->InsertaArista("Isabel la Catolica", "Pino Suarez", 382);
	grafo->InsertaArista("Merced", "Pino Suarez", 745);
	grafo->InsertaArista("Merced", "Candelaria", 698);
	grafo->InsertaArista("Moctezuma", "San Lazaro", 478);
	grafo->InsertaArista("Moctezuma", "Balbuena", 703);
	grafo->InsertaArista("Balbuena", "Moctezuma", 703);
	grafo->InsertaArista("Balbuena", "Blvd Puerto Aereo", 595);
	grafo->InsertaArista("Blvd Puerto Aereo", "Balbuena", 595);
	grafo->InsertaArista("Blvd Puerto Aereo", "Gomez Farias", 611);
	grafo->InsertaArista("Gomez Farias", "Blvd Puerto Aereo", 611);
	grafo->InsertaArista("Gomez Farias", "Zaragoza", 762);
	grafo->InsertaArista("Zaragoza", "Gomez Farias", 762);
	grafo->InsertaArista("Zaragoza", "Pantitlan", 1320);

	//LINEA 2
		//Estaciones (Vértices)
	grafo->InsertaVertice("Cuatro Caminos");
	grafo->InsertaVertice("Panteones");
	grafo->InsertaVertice("Tacuba"); //!!!
	grafo->InsertaVertice("Cuitlahuac");
	grafo->InsertaVertice("Popotla");
	grafo->InsertaVertice("Colegio Militar");
	grafo->InsertaVertice("Normal");
	grafo->InsertaVertice("San Cosme");
	grafo->InsertaVertice("Revolucion");
	grafo->InsertaVertice("Hidalgo"); //!!!
	grafo->InsertaVertice("Bellas Artes"); //!!!
	grafo->InsertaVertice("Allende");
	grafo->InsertaVertice("Zocalo");
	grafo->InsertaVertice("Pino Suarez"); //!!!
	grafo->InsertaVertice("San Antonio Abad");
	grafo->InsertaVertice("Chabacano"); //!!!
	grafo->InsertaVertice("Viaducto");
	grafo->InsertaVertice("Xola");
	grafo->InsertaVertice("Villa de Cortes");
	grafo->InsertaVertice("Nativitas");
	grafo->InsertaVertice("Portales");
	grafo->InsertaVertice("Ermita"); //!!!
	grafo->InsertaVertice("General Anaya");
	grafo->InsertaVertice("Tasquena");
	//Aristas (Sin Transbordes)
	grafo->InsertaArista("Cuatro Caminos", "Panteones", 1639);
	grafo->InsertaArista("Panteones", "Cuatro Caminos", 1639);
	grafo->InsertaArista("Panteones", "Tacuba", 1416);
	grafo->InsertaArista("Cuitlahuac", "Tacuba", 637);
	grafo->InsertaArista("Cuitlahuac", "Popotla", 620);
	grafo->InsertaArista("Popotla", "Cuitlahuac", 620);
	grafo->InsertaArista("Popotla", "Colegio Militar", 462);
	grafo->InsertaArista("Colegio Militar", "Popotla", 462);
	grafo->InsertaArista("Colegio Militar", "Normal", 516);
	grafo->InsertaArista("Normal", "Colegio Militar", 516);
	grafo->InsertaArista("Normal", "San Cosme", 657);
	grafo->InsertaArista("San Cosme", "Normal", 657);
	grafo->InsertaArista("San Cosme", "Revolucion", 537);
	grafo->InsertaArista("Revolucion", "San Cosme", 537);
	grafo->InsertaArista("Revolucion", "Hidalgo", 587);
	grafo->InsertaArista("Allende", "Bellas Artes", 387);
	grafo->InsertaArista("Allende", "Zocalo", 602);
	grafo->InsertaArista("Zocalo", "Allende", 602);
	grafo->InsertaArista("Zocalo", "Pino Suarez", 745);
	grafo->InsertaArista("San Antonio Abad", "Pino Suarez", 817);
	grafo->InsertaArista("San Antonio Abad", "Chabacano", 642);
	grafo->InsertaArista("Viaducto", "Chabacano", 774);
	grafo->InsertaArista("Viaducto", "Xola", 490);
	grafo->InsertaArista("Xola", "Viaducto", 490);
	grafo->InsertaArista("Xola", "Villa de Cortes", 698);
	grafo->InsertaArista("Villa de Cortes", "Xola", 698);
	grafo->InsertaArista("Villa de Cortes", "Nativitas", 750);
	grafo->InsertaArista("Nativitas", "Villa de Cortes", 750);
	grafo->InsertaArista("Nativitas", "Portales", 924);
	grafo->InsertaArista("Portales", "Nativitas", 924);
	grafo->InsertaArista("Portales", "Ermita", 748);
	grafo->InsertaArista("General Anaya", "Ermita", 838);
	grafo->InsertaArista("General Anaya", "Tasquena", 1330);
	grafo->InsertaArista("Tasquena", "General Anaya", 1330);

	//LINEA 3
		//Estaciones (Vértices)
	grafo->InsertaVertice("Indios Verdes");
	grafo->InsertaVertice("Deportivo 18 de Marzo");
	grafo->InsertaVertice("Potrero");
	grafo->InsertaVertice("La Raza");
	grafo->InsertaVertice("Tlatelolco");
	grafo->InsertaVertice("Guerrero");
	grafo->InsertaVertice("Hidalgo");
	grafo->InsertaVertice("Juarez");
	grafo->InsertaVertice("Balderas");
	grafo->InsertaVertice("Ninos Heroes");
	grafo->InsertaVertice("Hospital General");
	grafo->InsertaVertice("Centro Medico");
	grafo->InsertaVertice("Etiopia");
	grafo->InsertaVertice("Eugenia");
	grafo->InsertaVertice("Division del Norte");
	grafo->InsertaVertice("Zapata");
	grafo->InsertaVertice("Coyoacan");
	grafo->InsertaVertice("Viveros");
	grafo->InsertaVertice("Miguel Angel de Quevedo");
	grafo->InsertaVertice("Copilco");
	grafo->InsertaVertice("Universidad");
	//Aristas (Sin Transbordes)
	grafo->InsertaArista("Indios Verdes", "Deportivo 18 de Marzo", 1166);
	grafo->InsertaArista("Potrero", "Deportivo 18 de Marzo", 966);
	grafo->InsertaArista("Potrero", "La Raza", 1106);
	grafo->InsertaArista("Tlatelolco", "La Raza", 1445);
	grafo->InsertaArista("Tlatelolco", "Guerrero", 1042);
	grafo->InsertaArista("Juarez", "Hidalgo", 251);
	grafo->InsertaArista("Juarez", "Balderas", 659);
	grafo->InsertaArista("Ninos Heroes", "Balderas", 665);
	grafo->InsertaArista("Ninos Heroes", "Hospital General", 559);
	grafo->InsertaArista("Hospital General", "Ninos Heroes", 559);
	grafo->InsertaArista("Hospital General", "Centro Medico", 653);
	grafo->InsertaArista("Etiopia", "Centro Medico", 1119);
	grafo->InsertaArista("Etiopia", "Eugenia", 950);
	grafo->InsertaArista("Eugenia", "Etiopia", 950);
	grafo->InsertaArista("Eugenia", "Division del Norte", 715);
	grafo->InsertaArista("Division del Norte", "Eugenia", 715);
	grafo->InsertaArista("Division del Norte", "Zapata", 794);
	grafo->InsertaArista("Coyoacan", "Zapata", 1153);
	grafo->InsertaArista("Coyoacan", "Viveros", 908);
	grafo->InsertaArista("Viveros", "Coyoacan", 908);
	grafo->InsertaArista("Viveros", "Miguel Angel de Quevedo", 824);
	grafo->InsertaArista("Miguel Angel de Quevedo", "Viveros", 824);
	grafo->InsertaArista("Miguel Angel de Quevedo", "Copilco", 1295);
	grafo->InsertaArista("Copilco", "Miguel Angel de Quevedo", 1295);
	grafo->InsertaArista("Copilco", "Universidad", 1306);
	grafo->InsertaArista("Universidad", "Copilco", 1306);

	//LINEA 4
		//Estaciones (Vértices)
	grafo->InsertaVertice("Martin Carrera");
	grafo->InsertaVertice("Talisman");
	grafo->InsertaVertice("Bondojito");
	grafo->InsertaVertice("Consulado");
	grafo->InsertaVertice("Canal del Norte");
	grafo->InsertaVertice("Morelos");
	grafo->InsertaVertice("Fray Servando");
	grafo->InsertaVertice("Jamaica");
	grafo->InsertaVertice("Santa Anita");
	//Aristas (Sin Transbordes)
	grafo->InsertaArista("Talisman", "Tasquena", 1129);
	grafo->InsertaArista("Talisman", "Bondojito", 959);
	grafo->InsertaArista("Bondojito", "Talisman", 959);
	grafo->InsertaArista("Bondojito", "Consulado", 645);
	grafo->InsertaArista("Canal del Norte", "Consulado", 884);
	grafo->InsertaArista("Canal del Norte", "Morelos", 910);
	grafo->InsertaArista("Fray Servando", "Candelaria", 633);
	grafo->InsertaArista("Fray Servando", "Jamaica", 1033);


	//LINEA 5
		//Estaciones (Vértices)
	grafo->InsertaVertice("Politecnico");
	grafo->InsertaVertice("Instituto del Petroleo");
	grafo->InsertaVertice("Autobuses del Norte");
	grafo->InsertaVertice("Misterios");
	grafo->InsertaVertice("Valle Gomez");
	grafo->InsertaVertice("Consulado");
	grafo->InsertaVertice("Eduardo Molina");
	grafo->InsertaVertice("Aragon");
	grafo->InsertaVertice("Oceania");
	grafo->InsertaVertice("Terminal Aerea");
	grafo->InsertaVertice("Hangares");
	//Aristas (Sin Transbordes)
	grafo->InsertaArista("Politecnico", "Instituto del Petroleo", 1188);
	grafo->InsertaArista("Autobuses del Norte", "Instituto del Petroleo", 1067);
	grafo->InsertaArista("Autobuses del Norte", "La Raza", 975);
	grafo->InsertaArista("Misterios", "La Raza", 892);
	grafo->InsertaArista("Misterios", "Valle Gomez", 969);
	grafo->InsertaArista("Valle Gomez", "Misterios", 969);
	grafo->InsertaArista("Valle Gomez", "Consulado", 679);
	grafo->InsertaArista("Eduardo Molina", "Consulado", 815);
	grafo->InsertaArista("Eduardo Molina", "Aragon", 860);
	grafo->InsertaArista("Aragon", "Eduardo Molina", 860);
	grafo->InsertaArista("Aragon", "Oceania", 1219);
	grafo->InsertaArista("Terminal Aerea", "Oceania", 1174);
	grafo->InsertaArista("Terminal Aerea", "Hangares", 1153);
	grafo->InsertaArista("Hangares", "Terminal Aerea", 1153);
	grafo->InsertaArista("Hangares", "Pantitlan", 1644);

	//LINEA 6
		//Estaciones (Vértices)
	grafo->InsertaVertice("El Rosario");
	grafo->InsertaVertice("Tezozomoc");
	grafo->InsertaVertice("UAM Azcapotzalco");
	grafo->InsertaVertice("Ferreria");
	grafo->InsertaVertice("Norte 45");
	grafo->InsertaVertice("Vallejo");
	grafo->InsertaVertice("Lindavista");
	grafo->InsertaVertice("La Villa");
	//Aristas (Sin Transbordes)
	grafo->InsertaArista("El Rosario", "Aquiles Serdan", 1615);
	grafo->InsertaArista("El Rosario", "Tezozomoc", 1257);
	grafo->InsertaArista("Tezozomoc", "El Rosario", 1257);
	grafo->InsertaArista("Tezozomoc", "UAM Azcapotzalco", 973);
	grafo->InsertaArista("UAM Azcapotzalco", "Tezozomoc", 973);
	grafo->InsertaArista("UAM Azcapotzalco", "Ferreria", 1173);
	grafo->InsertaArista("Ferreria", "UAM Azcapotzalco", 1173);
	grafo->InsertaArista("Ferreria", "Norte 45", 1072);
	grafo->InsertaArista("Norte 45", "Ferreria", 1072);
	grafo->InsertaArista("Norte 45", "Vallejo", 660);
	grafo->InsertaArista("Vallejo", "Norte 45", 660);
	grafo->InsertaArista("Vallejo", "Instituto del Petroleo", 755);
	grafo->InsertaArista("Lindavista", "Instituto del Petroleo", 755);
	grafo->InsertaArista("Lindavista", "Deportivo 18 de Marzo", 1075);
	grafo->InsertaArista("La Villa", "Deportivo 18 de Marzo", 570);
	grafo->InsertaArista("La Villa", "Martin Carrera", 1141);

	//LINEA 7
		//Estaciones (Vértices)
	grafo->InsertaVertice("Aquiles Serdan");
	grafo->InsertaVertice("Camarones");
	grafo->InsertaVertice("Refineria");
	grafo->InsertaVertice("San Joaquin");
	grafo->InsertaVertice("Polanco");
	grafo->InsertaVertice("Auditorio");
	grafo->InsertaVertice("Constituyentes");
	grafo->InsertaVertice("San Pedro de los Pinos");
	grafo->InsertaVertice("San Antonio");
	grafo->InsertaVertice("Mixcoac");
	grafo->InsertaVertice("Barranca del Muerto");
	//Aristas (Sin Transbordes)
	grafo->InsertaArista("Aquiles Serdan", "El Rosario", 1615);
	grafo->InsertaArista("Aquiles Serdan", "Camarones", 1402);
	grafo->InsertaArista("Camarones", "Aquiles Serdan", 1402);
	grafo->InsertaArista("Camarones", "Refineria", 952);
	grafo->InsertaArista("Refineria", "Camarones", 952);
	grafo->InsertaArista("Refineria", "Tacuba", 1295);
	grafo->InsertaArista("San Joaquin", "Tacuba", 1433);
	grafo->InsertaArista("San Joaquin", "Polanco", 1163);
	grafo->InsertaArista("Polanco", "San Joaquin", 1163);
	grafo->InsertaArista("Polanco", "Auditorio", 812);
	grafo->InsertaArista("Auditorio", "Polanco", 812);
	grafo->InsertaArista("Auditorio", "Constituyentes", 1430);
	grafo->InsertaArista("Constituyentes", "Auditorio", 1430);
	grafo->InsertaArista("Constituyentes", "Tacubaya", 1005);
	grafo->InsertaArista("San Pedro de los Pinos", "Tacubaya", 1084);
	grafo->InsertaArista("San Pedro de los Pinos", "San Antonio", 606);
	grafo->InsertaArista("San Antonio", "San Pedro de los Pinos", 606);
	grafo->InsertaArista("San Antonio", "Mixcoac", 788);
	grafo->InsertaArista("Barranca del Muerto", "Mixcoac", 1476);

	//LINEA 8
		//Estaciones (Vértices)
	grafo->InsertaVertice("Garibaldi Lagunilla");
	grafo->InsertaVertice("San Juan de Letran");
	grafo->InsertaVertice("Doctores");
	grafo->InsertaVertice("Obrera");
	grafo->InsertaVertice("La Viga");
	grafo->InsertaVertice("Coyuya");
	grafo->InsertaVertice("Iztacalco");
	grafo->InsertaVertice("Apatlaco");
	grafo->InsertaVertice("Aculco");
	grafo->InsertaVertice("Escuadrón 201");
	grafo->InsertaVertice("Atlalilco");
	grafo->InsertaVertice("Iztapalapa");
	grafo->InsertaVertice("Cerro de la Estrella");
	grafo->InsertaVertice("UAM I");
	grafo->InsertaVertice("Constitucion de 1917");
	//Aristas (Sin Transbordes)
	grafo->InsertaArista("San Juan de Letran", "Bellas Artes", 456);
	grafo->InsertaArista("San Juan de Letran", "Salto del Agua", 292);
	grafo->InsertaArista("Doctores", "Salto del Agua", 564);
	grafo->InsertaArista("Doctores", "Obrera", 761);
	grafo->InsertaArista("Obrera", "Doctores", 761);
	grafo->InsertaArista("Obrera", "Chabacano", 1143);
	grafo->InsertaArista("La Viga", "Chabacano", 843);
	grafo->InsertaArista("La Viga", "Santa Anita", 633);
	grafo->InsertaArista("Coyuya", "Santa Anita", 968);
	grafo->InsertaArista("Coyuya", "Iztacalco", 993);
	grafo->InsertaArista("Iztacalco", "Coyuya", 993);
	grafo->InsertaArista("Iztacalco", "Apatlaco", 910);
	grafo->InsertaArista("Apatlaco", "Iztacalco", 910);
	grafo->InsertaArista("Apatlaco", "Aculco", 534);
	grafo->InsertaArista("Aculco", "Apatlaco", 534);
	grafo->InsertaArista("Aculco", "Escuadrón 201", 789);
	grafo->InsertaArista("Escuadrón 201", "Aculco", 789);
	grafo->InsertaArista("Escuadrón 201", "Atlalilco", 1738);
	grafo->InsertaArista("Iztapalapa", "Atlalilco", 732);
	grafo->InsertaArista("Iztapalapa", "Cerro de la Estrella", 717);
	grafo->InsertaArista("Cerro de la Estrella", "Iztapalapa", 717);
	grafo->InsertaArista("Cerro de la Estrella", "UAM I", 1135);
	grafo->InsertaArista("UAM I", "Cerro de la Estrella", 1135);
	grafo->InsertaArista("UAM I", "Constitucion de 1917", 1137);
	grafo->InsertaArista("UAM I", "Constitucion de 1917", 1137);

	//LINEA 9
		//Estaciones (Vértices)
	grafo->InsertaVertice("Patriotismo");
	grafo->InsertaVertice("Chilpancingo");
	grafo->InsertaVertice("Lazaro Cardenas");
	grafo->InsertaVertice("Mixiuhca");
	grafo->InsertaVertice("Velodromo");
	grafo->InsertaVertice("Ciudad Deportiva");
	grafo->InsertaVertice("Puebla");
	//Aristas (Sin Transbordes)
	grafo->InsertaArista("Patriotismo", "Tacubaya", 1133);
	grafo->InsertaArista("Patriotismo", "Chilpancingo", 955);
	grafo->InsertaArista("Chilpancingo", "Patriotismo", 955);
	grafo->InsertaArista("Chilpancingo", "Centro Medico", 1152);
	grafo->InsertaArista("Lazaro Cardenas", "Centro Medico", 1059);
	grafo->InsertaArista("Lazaro Cardenas", "Chabacano", 1000);
	grafo->InsertaArista("Mixiuhca", "Jamaica", 942);
	grafo->InsertaArista("Mixiuhca", "Velodromo", 821);
	grafo->InsertaArista("Velodromo", "Mixiuhca", 821);
	grafo->InsertaArista("Velodromo", "Ciudad Deportiva", 1110);
	grafo->InsertaArista("Ciudad Deportiva", "Velodromo", 1110);
	grafo->InsertaArista("Ciudad Deportiva", "Puebla", 800);
	grafo->InsertaArista("Puebla", "Ciudad Deportiva", 800);
	grafo->InsertaArista("Puebla", "Pantitlan", 1380);

	//LINEA 12
		//Estaciones (Vértices)
	grafo->InsertaVertice("Tlahuac");
	grafo->InsertaVertice("Tlaltenco");
	grafo->InsertaVertice("Zapotitlan");
	grafo->InsertaVertice("Nopalera");
	grafo->InsertaVertice("Olivos");
	grafo->InsertaVertice("Tezonco");
	grafo->InsertaVertice("Periferico Oriente");
	grafo->InsertaVertice("Calle 11");
	grafo->InsertaVertice("Lomas Estrella");
	grafo->InsertaVertice("San Andres Tomatlan");
	grafo->InsertaVertice("Culhuacan");
	grafo->InsertaVertice("Mexicaltzingo");
	grafo->InsertaVertice("Eje Central");
	grafo->InsertaVertice("Parque de los Venados");
	grafo->InsertaVertice("Hospital 20 de Noviembre");
	grafo->InsertaVertice("Insurgentes Sur");
	//Aristas (Sin Transbordes)
	grafo->InsertaArista("Tlahuac", "Tlaltenco", 1298);
	grafo->InsertaArista("Tlaltenco", "Tlahuac", 1298);
	grafo->InsertaArista("Tlaltenco", "Zapotitlan", 1115);
	grafo->InsertaArista("Zapotitlan", "Tlaltenco", 1115);
	grafo->InsertaArista("Zapotitlan", "Nopalera", 1276);
	grafo->InsertaArista("Nopalera", "Zapotitlan", 1276);
	grafo->InsertaArista("Nopalera", "Olivos", 1360);
	grafo->InsertaArista("Olivos", "Nopalera", 1360);
	grafo->InsertaArista("Olivos", "Tezonco", 490);
	grafo->InsertaArista("Tezonco", "Olivos", 490);
	grafo->InsertaArista("Tezonco", "Periferico Oriente", 1545);
	grafo->InsertaArista("Periferico Oriente", "Tezonco", 1545);
	grafo->InsertaArista("Periferico Oriente", "Calle 11", 1111);
	grafo->InsertaArista("Calle 11", "Periferico Oriente", 1111);
	grafo->InsertaArista("Calle 11", "Lomas Estrella", 906);
	grafo->InsertaArista("Lomas Estrella", "Calle 11", 906);
	grafo->InsertaArista("Lomas Estrella", "San Andres Tomatlan", 1060);
	grafo->InsertaArista("San Andres Tomatlan", "Lomas Estrella", 1060);
	grafo->InsertaArista("San Andres Tomatlan", "Culhuacan", 990);
	grafo->InsertaArista("Culhuacan", "San Andres Tomatlan", 990);
	grafo->InsertaArista("Culhuacan", "Atlalilco", 1671);
	grafo->InsertaArista("Mexicaltzingo", "Atlalilco", 1922);
	grafo->InsertaArista("Mexicaltzingo", "Ermita", 1805);
	grafo->InsertaArista("Eje Central", "Ermita", 895);
	grafo->InsertaArista("Eje Central", "Parque de los Venados", 1280);
	grafo->InsertaArista("Parque de los Venados", "Eje Central", 1280);
	grafo->InsertaArista("Parque de los Venados", "Zapata", 563);
	grafo->InsertaArista("Hospital 20 de Noviembre", "Zapata", 450);
	grafo->InsertaArista("Hospital 20 de Noviembre", "Insurgentes Sur", 725);
	grafo->InsertaArista("Insurgentes Sur", "Hospital 20 de Noviembre", 725);
	grafo->InsertaArista("Insurgentes Sur", "Mixcoac", 651);

	//LINEA A
		//Estaciones (Vértices)
	grafo->InsertaVertice("Agricola Oriental");
	grafo->InsertaVertice("Canal de San Juan");
	grafo->InsertaVertice("Tepalcates");
	grafo->InsertaVertice("Guelatao");
	grafo->InsertaVertice("Penon Viejo");
	grafo->InsertaVertice("Acatitla");
	grafo->InsertaVertice("Santa Marta");
	grafo->InsertaVertice("Los Reyes");
	grafo->InsertaVertice("La Paz");
	//Aristas (Sin Transbordes)
	grafo->InsertaArista("Agricola Oriental", "Pantitlan", 1409);
	grafo->InsertaArista("Agricola Oriental", "Canal de San Juan", 1093);
	grafo->InsertaArista("Canal de San Juan", "Agricola Oriental", 1093);
	grafo->InsertaArista("Canal de San Juan", "Tepalcates", 1456);
	grafo->InsertaArista("Tepalcates", "Canal de San Juan", 1456);
	grafo->InsertaArista("Tepalcates", "Guelatao", 1161);
	grafo->InsertaArista("Guelatao", "Tepalcates", 1161);
	grafo->InsertaArista("Guelatao", "Penon Viejo", 2206);
	grafo->InsertaArista("Penon Viejo", "Guelatao", 2206);
	grafo->InsertaArista("Penon Viejo", "Acatitla", 1379);
	grafo->InsertaArista("Acatitla", "Penon Viejo", 1379);
	grafo->InsertaArista("Acatitla", "Santa Marta", 1100);
	grafo->InsertaArista("Santa Marta", "Acatitla", 1100);
	grafo->InsertaArista("Santa Marta", "Los Reyes", 1783);
	grafo->InsertaArista("Los Reyes", "Santa Marta", 1783);
	grafo->InsertaArista("Los Reyes", "La Paz", 1956);
	grafo->InsertaArista("La Paz", "Los Reyes", 1956);

	//LINEA B
		//Estaciones (Vértices)
	grafo->InsertaVertice("Buenavista");
	grafo->InsertaVertice("Lagunilla");
	grafo->InsertaVertice("Tepito");
	grafo->InsertaVertice("Ricardo Flores Magon");
	grafo->InsertaVertice("Romero Rubio");
	grafo->InsertaVertice("Deportivo Oceania");
	grafo->InsertaVertice("Bosque de Aragon");
	grafo->InsertaVertice("Villa de Aragon");
	grafo->InsertaVertice("Nezahualcoyotl");
	grafo->InsertaVertice("Impulsora");
	grafo->InsertaVertice("Rio de los Remedios");
	grafo->InsertaVertice("Muzquiz");
	grafo->InsertaVertice("Ecatepec");
	grafo->InsertaVertice("Olimpica");
	grafo->InsertaVertice("Plaza Aragon");
	grafo->InsertaVertice("Ciudad Azteca");
	//Aristas (Sin Transbordes)
	grafo->InsertaArista("Buenavista", "Guerrero", 521);
	grafo->InsertaArista("Lagunilla", "Garibaldi Lagunilla", 474);
	grafo->InsertaArista("Lagunilla", "Tepito", 611);
	grafo->InsertaArista("Tepito", "Lagunilla", 611);
	grafo->InsertaArista("Tepito", "Morelos", 498);
	grafo->InsertaArista("Ricardo Flores Magon", "San Lazaro", 907);
	grafo->InsertaArista("Ricardo Flores Magon", "Romero Rubio", 908);
	grafo->InsertaArista("Romero Rubio", "Ricardo Flores Magon", 908);
	grafo->InsertaArista("Romero Rubio", "Oceania", 809);
	grafo->InsertaArista("Deportivo Oceania", "Oceania", 863);
	grafo->InsertaArista("Deportivo Oceania", "Bosque de Aragon", 1165);
	grafo->InsertaArista("Bosque de Aragon", "Deportivo Oceania", 1165);
	grafo->InsertaArista("Bosque de Aragon", "Villa de Aragon", 784);
	grafo->InsertaArista("Villa de Aragon", "Bosque de Aragon", 784);
	grafo->InsertaArista("Villa de Aragon", "Nezahualcoyotl", 1335);
	grafo->InsertaArista("Nezahualcoyotl", "Villa de Aragon", 1335);
	grafo->InsertaArista("Nezahualcoyotl", "Impulsora", 1393);
	grafo->InsertaArista("Impulsora", "Nezahualcoyotl", 1393);
	grafo->InsertaArista("Impulsora", "Rio de los Remedios", 436);
	grafo->InsertaArista("Rio de los Remedios", "Impulsora", 436);
	grafo->InsertaArista("Rio de los Remedios", "Muzquiz", 1155);
	grafo->InsertaArista("Muzquiz", "Rio de los Remedios", 1155);
	grafo->InsertaArista("Muzquiz", "Ecatepec", 1485);
	grafo->InsertaArista("Ecatepec", "Muzquiz", 1485);
	grafo->InsertaArista("Ecatepec", "Olimpica", 596);
	grafo->InsertaArista("Olimpica", "Ecatepec", 596);
	grafo->InsertaArista("Olimpica", "Plaza Aragon", 709);
	grafo->InsertaArista("Plaza Aragon", "Olimpica", 709);
	grafo->InsertaArista("Plaza Aragon", "Ciudad Azteca", 574);
	grafo->InsertaArista("Ciudad Azteca", "Plaza Aragon", 574);

	//TRANSBORDES	
		//Aristas 
	//Tacubaya
	grafo->InsertaArista("Tacubaya", "Juanacatlan", 1158);
	grafo->InsertaArista("Tacubaya", "Observatorio", 1262);
	grafo->InsertaArista("Tacubaya", "Constituyentes", 1005);
	grafo->InsertaArista("Tacubaya", "San Pedro de los Pinos", 1084);
	grafo->InsertaArista("Tacubaya", "Patriotismo", 1133);
	//Balderas
	grafo->InsertaArista("Balderas", "Salto del Agua", 458);
	grafo->InsertaArista("Balderas", "Cuauhtemoc", 409);
	grafo->InsertaArista("Balderas", "Juarez", 659);
	grafo->InsertaArista("Balderas", "Ninos Heroes", 665);
	////Salto del Agua
	grafo->InsertaArista("Salto del Agua", "Isabel la Catolica", 445);
	grafo->InsertaArista("Salto del Agua", "Balderas", 458);
	grafo->InsertaArista("Salto del Agua", "San Juan de Letran", 292);
	grafo->InsertaArista("Salto del Agua", "Doctores", 564);
	//Pino Suarez
	grafo->InsertaArista("Pino Suarez", "Merced", 745);
	grafo->InsertaArista("Pino Suarez", "Isabel la Catolica", 382);
	grafo->InsertaArista("Pino Suarez", "Zocalo", 745);
	grafo->InsertaArista("Pino Suarez", "San Antonio Abad", 817);
	//Candelaria
	grafo->InsertaArista("Candelaria", "San Lazaro", 866);
	grafo->InsertaArista("Candelaria", "Merced", 698);
	grafo->InsertaArista("Candelaria", "Fray Servando", 633);
	grafo->InsertaArista("Candelaria", "Morelos", 1062);
	//San Lazaro
	grafo->InsertaArista("San Lazaro", "Moctezuma", 478);
	grafo->InsertaArista("San Lazaro", "Candelaria", 866);
	grafo->InsertaArista("San Lazaro", "Ricardo Flores Magon", 907);
	grafo->InsertaArista("San Lazaro", "Morelos", 1296);
	//Pantitlan 
	grafo->InsertaArista("Pantitlan", "Zaragoza", 1320);
	grafo->InsertaArista("Pantitlan", "Hangares", 1644);
	grafo->InsertaArista("Pantitlan", "Puebla", 1380);
	grafo->InsertaArista("Pantitlan", "Agricola Oriental", 1409);
	//Tacuba
	grafo->InsertaArista("Tacuba", "Panteones", 1416);
	grafo->InsertaArista("Tacuba", "Cuitlahuac", 637);
	grafo->InsertaArista("Tacuba", "Refineria", 1295);
	grafo->InsertaArista("Tacuba", "San Joaquin", 1433);
	//Hidalgo
	grafo->InsertaArista("Hidalgo", "Revolucion", 587);
	grafo->InsertaArista("Hidalgo", "Bellas Artes", 447);
	grafo->InsertaArista("Hidalgo", "Guerrero", 702);
	grafo->InsertaArista("Hidalgo", "Juarez", 251);
	//Bellas Artes
	grafo->InsertaArista("Bellas Artes", "Hidalgo", 447);
	grafo->InsertaArista("Bellas Artes", "Allende", 387);
	grafo->InsertaArista("Bellas Artes", "Garibaldi Lagunilla", 634);
	grafo->InsertaArista("Bellas Artes", "San Juan de Letran", 456);
	//Chabacano
	grafo->InsertaArista("Chabacano", "San Antonio Abad", 642);
	grafo->InsertaArista("Chabacano", "Viaducto", 774);
	grafo->InsertaArista("Chabacano", "Obrera", 1143);
	grafo->InsertaArista("Chabacano", "La Viga", 843);
	grafo->InsertaArista("Chabacano", "Jamaica", 1031);
	grafo->InsertaArista("Chabacano", "Lazaro Cardenas", 1000);
	//Ermita
	grafo->InsertaArista("Ermita", "Portales", 748);
	grafo->InsertaArista("Ermita", "General Anaya", 838);
	grafo->InsertaArista("Ermita", "Mexicaltzingo", 1805);
	grafo->InsertaArista("Ermita", "Eje Central", 895);
	//Deportivo 18 de Marzo
	grafo->InsertaArista("Deportivo 18 de Marzo", "Indios Verdes", 1166);
	grafo->InsertaArista("Deportivo 18 de Marzo", "Potrero", 966);
	grafo->InsertaArista("Deportivo 18 de Marzo", "Lindavista", 1075);
	grafo->InsertaArista("Deportivo 18 de Marzo", "La Villa", 570);
	//La Raza
	grafo->InsertaArista("La Raza", "Potrero", 1106);
	grafo->InsertaArista("La Raza", "Tlatelolco", 1445);
	grafo->InsertaArista("La Raza", "Autobuses del Norte", 975);
	grafo->InsertaArista("La Raza", "Misterios", 892);
	//Guerrero
	grafo->InsertaArista("Guerrero", "Tlatelolco", 1042);
	grafo->InsertaArista("Guerrero", "Hidalgo", 702);
	grafo->InsertaArista("Guerrero", "Garibaldi Lagunilla", 757);
	grafo->InsertaArista("Guerrero", "Buenavista", 521);
	//Centro Medico
	grafo->InsertaArista("Centro Medico", "Hospital General", 653);
	grafo->InsertaArista("Centro Medico", "Etiopia", 1119);
	grafo->InsertaArista("Centro Medico", "Lazaro Cardenas", 1059);
	grafo->InsertaArista("Centro Medico", "Chilpancingo", 1152);
	//Zapata
	grafo->InsertaArista("Zapata", "Division del Norte", 794);
	grafo->InsertaArista("Zapata", "Coyoacan", 1153);
	grafo->InsertaArista("Zapata", "Parque de los Venados", 563);
	grafo->InsertaArista("Zapata", "Hospital 20 de Noviembre", 450);
	//Martin Carrera
	grafo->InsertaArista("Martin Carrera", "Talisman", 1129);
	grafo->InsertaArista("Martin Carrera", "La Villa", 1141);
	//Consulado
	grafo->InsertaArista("Consulado", "Valle Gomez", 679);
	grafo->InsertaArista("Consulado", "Eduardo Molina", 815);
	grafo->InsertaArista("Consulado", "Canal del Norte", 884);
	grafo->InsertaArista("Consulado", "Bondojito", 645);
	//Morelos
	grafo->InsertaArista("Morelos", "Candelaria", 1062);
	grafo->InsertaArista("Morelos", "Canal del Norte", 910);
	grafo->InsertaArista("Morelos", "San Lazaro", 1296);
	grafo->InsertaArista("Morelos", "Tepito", 498);
	//Candelaria
	grafo->InsertaArista("Candelaria", "San Lazaro", 866);
	grafo->InsertaArista("Candelaria", "Merced", 698);
	grafo->InsertaArista("Candelaria", "Fray Servando", 633);
	grafo->InsertaArista("Candelaria", "Morelos", 1062);
	//Jamaica
	grafo->InsertaArista("Jamaica", "Santa Anita", 758);
	grafo->InsertaArista("Jamaica", "Fray Servando", 1033);
	grafo->InsertaArista("Jamaica", "Mixiuhca", 942);
	grafo->InsertaArista("Jamaica", "Chabacano", 1031);
	//Santa Anita
	grafo->InsertaArista("Santa Anita", "Jamaica", 758);
	grafo->InsertaArista("Santa Anita", "La Viga", 633);
	grafo->InsertaArista("Santa Anita", "Coyuya", 968);
	//Instituto del Petroleo
	grafo->InsertaArista("Instituto del Petroleo", "Vallejo", 755);
	grafo->InsertaArista("Instituto del Petroleo", "Lindavista", 1258);
	grafo->InsertaArista("Instituto del Petroleo", "Politecnico", 1188);
	grafo->InsertaArista("Instituto del Petroleo", "Autobuses del Norte", 1067);
	//Oceania
	grafo->InsertaArista("Oceania", "Aragon", 1219);
	grafo->InsertaArista("Oceania", "Terminal Aerea", 1174);
	grafo->InsertaArista("Oceania", "Deportivo Oceania", 863);
	grafo->InsertaArista("Oceania", "Romero Rubio", 809);
	//Mixcoac
	grafo->InsertaArista("Mixcoac", "Barranca del Muerto", 1476);
	grafo->InsertaArista("Mixcoac", "San Antonio", 788);
	grafo->InsertaArista("Mixcoac", "Insurgentes Sur", 651);
	//Garibaldi Lagunilla
	grafo->InsertaArista("Garibaldi Lagunilla", "Bellas Artes", 634);
	grafo->InsertaArista("Garibaldi Lagunilla", "Lagunilla", 474);
	grafo->InsertaArista("Garibaldi Lagunilla", "Guerrero", 757);
	//Atlalilco
	grafo->InsertaArista("Atlalilco", "Escuadrón 201", 1738);
	grafo->InsertaArista("Atlalilco", "Iztapalapa", 732);
	grafo->InsertaArista("Atlalilco", "Culhuacan", 1671);
	grafo->InsertaArista("Atlalilco", "Mexicaltzingo", 1922);

	

	while (opc != 8)
	{
		system("cls");
		cout << "===== RUTA MÁS RÁPIDA METRO CDMX =====" << endl;
		cout << "1) Insertar estación" << endl; // Insertar Vertice
		cout << "2) Insertar conexión entre estaciones" << endl; //Insertar Arista
		cout << "3) Obtener tamaño" << endl; // Tamaño del Grafo
		cout << "4) Mostrar lista de adyacencia" << endl; // Muestra las conexiones que tiene cada estación
		cout << "5) Eliminar estación" << endl; // Elimina Vertice
		cout << "6) Eliminar conexión entre estaciones" << endl; // Elimina Arista
		cout << "7) Ruta más corta" << endl; // Se aplica el algoritmo de Dijkstra
		cout << "8) Salir" << endl;

		cout << endl;
		cout << "Ingrese una opcion del menú: ";
		cin >> opc;

		system("cls");

		switch (opc)
		{
		case 1:
		{
			cout << "===== INSERTAR ESTACIÓN =====" << endl;
			string nombre;
			cin.ignore();
			cout << "Ingrese el nombre de la estación: ";
			getline(cin, nombre);

			grafo->InsertaVertice(nombre);

			break;
		}
		case 2:
		{
			cout << "===== INSERTAR CONEXIÓN ENTRE ESTACIONES =====" << endl;
			if (grafo->EstaVacio())
			{
				cin.ignore();
				cout << "\nEl grafo esta vacio . . . Presione enter para continuar" << endl;
				cin.get();
			}
			else
			{
				string ori, dest;
				int distancia;
				cin.ignore();
				cout << "Ingrese el nombre de la estación origen: ";
				getline(cin, ori);
				cin.ignore();
				cout << "Ingrese el nombre de la estación destino: ";
				getline(cin, dest);
				cin.ignore();
				cout << "Ingrese la distancia: ";
				cin >> distancia;

				grafo->InsertaArista(ori, dest, distancia);
			}

			break;
		}
		case 3:
		{
			cout << "===== OBTENER TAMAÑO =====" << endl;
			int tamano = grafo->ObtenerTamano();
			cin.ignore();
			cout << "El grafo tiene " << tamano << " estaciones" << endl;
			cout << "\nPresione enter para continuar . . ." << endl;
			cin.get();
			break;
		}
		case 4:
		{
			cout << "===== MOSTRAR LISTA DE ADYACENCIA =====" << endl;
			if (grafo->EstaVacio())
			{
				cin.ignore();
				cout << "\nEl grafo esta vacio . . . Presione enter para continuar" << endl;
				cin.get();
			}
			else
			{
				cin.ignore();
				grafo->MostrarListaAdyacencia();
				cout << "\nPresione enter para continuar . . ." << endl;
				cin.get();
			}

			break;
		}
		case 5:
		{
			cout << "===== ELIMINAR ESTACIÓN =====" << endl;
			if (grafo->EstaVacio())
			{
				cin.ignore();
				cout << "\nEl grafo esta vacio . . . Presione enter para continuar" << endl;
				cin.get();
			}
			else
			{
				string nombre;
				cin.ignore();
				cout << "Ingrese el nombre de la estación a eliminar: ";
				getline(cin, nombre);

				cin.ignore();
				grafo->EliminarVertice(nombre);
				cout << "\nPresione enter para continuar . . ." << endl;
				cin.get();
			}

			break;
		}
		case 6:
		{
			if (grafo->EstaVacio())
			{
				cin.ignore();
				cout << "\nEl grafo esta vacio . . . Presione enter para continuar" << endl;
				cin.get();
			}
			else
			{
				string ori, dest;
				cin.ignore();
				cout << "Ingrese el nombre de la estación origen: ";
				getline(cin, ori);
				cin.ignore();
				cout << "Ingrese el nombre de la estación destino: ";
				getline(cin, dest);

				cin.ignore();
				grafo->EliminarArista(ori, dest);
				cout << "\nPresione enter para continuar . . ." << endl;
				cin.get();
			}
			break;
		}
		case 7:
		{
			cout << "===== RUTA MÁS RÁPIDA =====" << endl;
			if (grafo->EstaVacio())
			{
				cin.ignore();
				cout << "\nEl grafo esta vacio . . . Presione enter para continuar";
				cin.get();
			}
			else
			{
				string ori;
				string dest;
				cin.ignore();
				cout << "Ingrese el nombre de la estación origen: ";
				getline(cin, ori);

				cin.ignore();
				cout << "Ingrese el nombre de la estación destino: ";
				getline(cin, dest);
				grafo->Dijkstra(ori, dest);
				cin.ignore();
				cout << "\nPresione enter para continuar . . ." << endl;
				cin.get();
			}

			break;
		}
		}
	}

}
