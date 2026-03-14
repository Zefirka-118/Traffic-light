# Arduino Traffic Light 

Simulación de un semáforo utilizando **Arduino Uno** y **tres LEDs** (rojo, amarillo y verde).
El circuito fue realizado en **Tinkercad** y el código está escrito en **Arduino / C++**.

---

##  ¿Cómo funciona?

El programa controla tres LEDs conectados a pines digitales del Arduino.
Cada LED representa una luz de un semáforo.

El Arduino ejecuta un ciclo continuo donde enciende y apaga los LEDs con tiempos definidos usando la función `delay()`.

La secuencia es:

```
Rojo → Amarillo → Verde → Amarillo → repetir
```

Esto simula el comportamiento básico de un semáforo real.

---

##  Conexión del circuito

Cada LED está conectado a un pin digital del Arduino mediante una resistencia para limitar la corriente.

| LED      | Pin Arduino |
| -------- | ----------- |
| Rojo     | 8           |
| Amarillo | 9           |
| Verde    | 10          |

La conexión sigue este flujo:

```
Pin digital → resistencia → LED → GND
```

Las resistencias (220Ω) evitan que el LED reciba demasiada corriente y se queme.

---

##  Secuencia del semáforo

| Estado      | Tiempo     |
| ----------- | ---------- |
| 🔴 Rojo     | 5 segundos |
| 🟡 Amarillo | 2 segundos |
| 🟢 Verde    | 5 segundos |
| 🟡 Amarillo | 2 segundos |

Después de completar el ciclo, el programa vuelve a empezar automáticamente.

Esto ocurre porque el código se ejecuta dentro de la función `loop()` de Arduino.

---

##  Simulación en Tinkercad

Puedes ver el circuito funcionando aquí:

https://www.tinkercad.com/things/afPwWFpLSvc-dazzling-stantia/editel?returnTo=https%3A%2F%2Fwww.tinkercad.com%2Fdashboard

---

## Circuito

La imagen del circuito se encuentra en la carpeta:

```
assets/
```

---

##  Código

El código está en el archivo:

```
semaforo.ino
```

Este programa utiliza:

* `pinMode()` para definir los pines como salida
* `digitalWrite()` para encender o apagar LEDs
* `delay()` para controlar los tiempos del semáforo

---

##  Propósito

Este proyecto es un ejemplo básico para aprender:

* Control de **salidas digitales**
* Uso de **LEDs con resistencias**
* Lógica secuencial en **Arduino**
* Simulación de circuitos en **Tinkercad**

---

## Autor

Zefrik (prepa)
