/* Copyright 2015-2016 Jack Humbert
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef KEYMAP_SPANISH_H
#define KEYMAP_SPANISH_H

#include "keymap.h"

// Alt gr
#define ALGR(kc) RALT(kc)  //Alt derecho
#define NO_ALGR KC_RALT

// Normal characters
#define ES_OVRR KC_GRV  //º
#define ES_APOS	KC_MINS  //apostrofe
#define ES_IEXL	KC_EQL  //abrir exclamacion

#define ES_GRV	KC_LBRC  //acento abierto
#define ES_PLUS	KC_RBRC  //suma

#define ES_NTIL	KC_SCLN 	//enye
#define ES_ACUT	KC_QUOT  //acento
#define ES_CCED	KC_NUHS  //cedilla

#define ES_LESS	KC_NUBS  //menor que
#define ES_MINS	KC_SLSH  //guion

// Shifted characters
#define ES_ASML	LSFT(ES_OVRR)  	//ª
#define EZ_EXL	LSFT(KC_1)		//cerrar exclamacion
#define ES_QUOT	LSFT(KC_2)		//comillas
#define ES_OVDT	LSFT(KC_3)		//punto ele geminada
#define ES_AMPR	LSFT(KC_6)		//ampersand
#define ES_SLSH LSFT(KC_7)		//barra
#define ES_LPRN LSFT(KC_8)		//abrir parentesis
#define ES_RPRN LSFT(KC_9)		//cerrar parentesis
#define ES_EQL	LSFT(KC_0)		//igual
#define ES_QUES	LSFT(ES_APOS)	//cerrar interrogante
#define ES_IQUE	LSFT(ES_IEXL)	//abrir interrogante

#define ES_CIRC	LSFT(ES_GRV)	//chevron
#define ES_ASTR	LSFT(ES_PLUS)	//asterisco

//#define ES_UMLT	LSFT(ES_GRV)	//creo que este venia mal
#define ES_UMLT	LSFT(ES_ACUT)	//dieresis

#define ES_GRTR	LSFT(ES_LESS)	//mayor que
#define ES_SCLN	LSFT(KC_COMM)	//punto y coma
#define ES_COLN	LSFT(KC_DOT)	//dos puntos
#define ES_UNDS	LSFT(ES_MINS)	//guion bajo

// Alt Gr-ed characters
#define ES_BSLS	ALGR(ES_OVRR)
#define ES_PIPE	ALGR(KC_1)  //linea vertical
#define ES_AT 	ALGR(KC_2)  //arroba
#define ES_HASH	ALGR(KC_3)  //almohadilla
#define ES_TILD	ALGR(ES_NTIL)  //vigulilla
#define ES_EURO	ALGR(KC_5)		//euro
#define ES_NOT	ALGR(KC_6)  //negacion

#define ES_LBRC	ALGR(ES_GRV)  //abrir corchetes
#define ES_RBRC ALGR(ES_PLUS)  //cerrar corchetes

#define ES_LCBR	ALGR(ES_ACUT) //abrir llaves
#define ES_RCBR	ALGR(ES_CCED) //cerrar llaves

#endif
