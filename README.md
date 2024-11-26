# **Movilidad-Ágil**
Proyecto de Investigación Formativa de Sistemas Digitales



## I. **Resumen**

Se ha llevado a cabo una investigación exhaustiva sobre el Internet de las Cosas (IoT) en proyectos de seguimiento de autobuses en universidades de todo el mundo. Esto permitió recopilar información sobre metodologías, tecnologías y enfoques empleados en casos similares. Además, se desarrollaron esquemas de árbol de problemas y soluciones para organizar las ideas, identificar desafíos potenciales y anticipar obstáculos. Estas herramientas facilitaron la proyección de estrategias efectivas, garantizando una planificación sólida y bien fundamentada para el desarrollo del proyecto.



## II. **Objetivos**

### **Objetivo General:**
Desarrollar un sistema eficiente de seguimiento de la ubicación del Polibus, además de la obtención de información crucial para el transporte y la seguridad con el fin de estimar con precisión la hora de llegada del autobús al City Campus, facilitando así el traslado oportuno de los estudiantes y personal hacia el Campus Principal y viceversa, apoyando con datos útiles para reaccionar eficazmente a variedad de dificultades.

### **Objetivos Específicos:**
1.	Prototipar el dispositivo que ubicara al Polibus 
2.	Implementar un sistema de seguimiento en tiempo real 
3.	Optimizar la gestión de la flota de autobuses 



## III.	**Planteamiento del Problema**

El transporte en el Politécnico Grancolombiano consiste en un grupo de buses que trasladan estudiantes y profesores entre el Campus Principal y el CityCampus, con un recorrido promedio de 20 minutos y una frecuencia de salida de 10 minutos. Sin embargo, surgen problemas cuando estos tiempos no se cumplen debido a factores como:  

- **Problemas en la vía:** accidentes, congestión en horas pico o fallas mecánicas.  
- **Falta de buses en un campus:** causando demoras en la espera.  
- **Desorganización en las salidas:** lo que lleva a buses con pocos pasajeros y otros estudiantes quedándose atrás.  

Una situación recurrente es que los estudiantes pierden el bus por desconocer los horarios exactos, lo que provoca esperas mínimas de 10 minutos, afectando su llegada a actividades académicas. Compartir información en tiempo real sobre las salidas y llegadas de los buses beneficiaría tanto a estudiantes como a profesores. El análisis detallado mediante el Árbol de Problemas y el Árbol de Objetivos permite identificar soluciones y planificar mejoras para optimizar este servicio.

## **Árbol de Problemas**:
![](https://github.com/JDteufel/Movilidad-Agil/blob/main/Mapa%20conceptual.png)

## **Árbol de Soluciones**:
![](https://github.com/JDteufel/Movilidad-Agil/blob/main/Tablero%20en%20blanco.png)


## IV.	**Justificación**

El desarrollo de este proyecto es fundamental para mejorar la gestión del transporte universitario del Politecnico Grancolombiano. Al automatizar la detección de las horas de llegada y salida de los buses, se optimizarán los tiempos de espera y se reducirá el número de trayectos innecesarios, lo que supone una disminución de costos operativos. Además, brindará a los estudiantes y profesores información en tiempo real, ayudando a mejorar la puntualidad y eficiencia en su desplazamiento entre los campus.



## V.	**Metodología**

**Obtención de información**: Al iniciar y con el objetivo de obtener una base sólida de información se utilizaron las bases de datos de Google Scholar por su amplitud de información junto con la utilización de recursos provistos por la universidad, por medio de Scopus, Scielo y SpringerLink que hacen parte de la biblioteca virtual CREA. Adicionalmente en el marco teórico se añaden más referencias que explican temas importantes en el ámbito del proyecto, definiciones y descripciones en mayor medida.

**Diseño del prototipo**: En esta fase, se definirá el diagrama esquemático del sistema, que incluirá la integración de la placa Arduino con los sensores GPS y módulos de comunicación. Se realizarán cálculos y diagramas para asegurar la correcta funcionalidad del prototipo en el entorno de transporte de la universidad. 

**Implementación**: Se procederá a la construcción del prototipo físico. Los componentes se ensamblarán sobre el diseño de Arduino UNO y se programarán para que puedan detectar la posición en tiempo real de los buses universitarios y enviar esa información a una base de datos centralizada o directamente a los dispositivos móviles de los usuarios.

**Codificación**: Durante 5 semanas se crearon diversos retos basados en IoT, estos son programas utilizando protocolos I2C, WebSockets y MQTT. Se crean con el objetivo de tener una guía para posteriormente ser aplicados dentro del proyecto. El objetivo final incluirá la inclusión de estos 3 protocolos dentro del código y el diseño físico.

**Pruebas y simulaciones**: Se realizarán pruebas de funcionamiento tanto en entornos simulados como en las rutas reales del Politécnico. Estas pruebas buscarán garantizar la precisión de los datos recogidos por los sensores y evaluar la respuesta en tiempo real del sistema. Además, se medirán parámetros como la cobertura de señal, tiempos de latencia y consumo energético del sistema. 



## VI.	**MARCO TEÓRICO**

**GPS**: Según Jablonski (2002), el Sistema de Posicionamiento Global (GPS por sus siglas en inglés) es un sistema de navegación basado en un conjunto de satélites que calculan la posición de un usuario en base al tiempo y la distancia individual entre sí y el mismo. Este proceso se mide con 4 satélites por usuario para mejorar la precisión.

**ESP32**: Se dice en Babiuch, M. Foltýnek, P. Smutný, P. (2020) que el ESP32 es un microcontrolador con WiFi 802.11 integrado, cuenta con una cantidad de pines que varía entre los 17 y 36, 4MB de memoria flash, 520KB de SRAM. Hace parte básica de las IoT y puede ser programado y configurado desde un ambiente diseñado para Arduino. 

**DHT11**: Se menciona en Srivastava, D. Kesarwani, A. Dubey, S. (2008) que es un módulo combinado para la medición de humedad y temperatura. Cuenta con 4pines que permiten el paso de información por vías diferentes, garantizando más fiabilidad de los datos recibidos y el manejo de comunicación serial enviando datos en pulsos con tiempos de aproximadamente 4ms entre ellos. 

**MQTT**: Se explica en Dinculeană, D. Cheng, X. (2019) que el Transporte Telemétrico de Cola de Mensajes (MQTT por sus siglas en inglés) es un protocolo de comunicación ampliamente utilizado en el ámbito de las IoT. Funciona por un modelo de publicación y suscripción que permite reducir la cantidad de recursos utilizados para el transporte de la información, haciéndolo eficiente en ambientes con anchos de banda bajos. El protocolo fue diseñado para servir de forma asincrónica, donde el método de publicación y suscripción funciona de manera que el servidor organiza los temas en forma de árbol, enviando a cada cliente la información del tema al que esté suscrito.

**Node JS**: En el libro hecho por Catelon, M. Harter, M. Holowaychuk, T. Rajlich, N. Schlueter, I. (2014) se menciona que Node fue creado, como su nombre insinúa, en JavaScript y se definió como una plataforma para crear aplicaciones de red de manera escalable y fácil, provee una plataforma de eventos asincrónica para servidores diseñado para aplicaciones en tiempo real que dependen de un manejo intensivo de datos.



## VII. **DISEÑO**

### **Análisis previos**:
- **Reqiusitos**: 
- **Limitaciones**:

### **Esquemáticos**:
![](https://github.com/JDteufel/Movilidad-Agil/blob/main/imagenes/esp32 sim800l gps.png)

### **Cálculos**:
Para garantizar el correcto funcionamiento del gps y la estimación de llegada de una sede a otra se deben tener en cuenta los siguientes puntos:

- **Precisión del dispositivo GPS**: El modulo gps neo-6m cuenta con una Taza de Actualización de 5 Hz y una precisión de posicionamiento equivalente a 2.5 MCEP (Mean Circular Error Probable, estándar que mide la dispersión de datos gps); en otras palabras cuenta con un promedio de error de 2.5 metros.

- **Tiempo de actualización de datos**: Los datos de velocidad y posición obtenidos por el modulo GPS son actualizados cada 7 seg. Por otro lado el envío de un sms al celular de la persona que solicita la información puede tardar poco más de un minuto.

- **Estimación de tiempo de llegada**: Teniendo en cuenta que para conocer el tiempo de llegada estimado se utilizaría la fórmula t = d/v , donde d = 2000m (2km) y v se actualiza cada 7 segundos tomando el dato obtenido por el gps.



## VIII.	**REFERENCIAS BIBLIOGRÁFICAS**

- Badawy, E. Elhakim, A. Abdulhameed, A. Zualkernan, I. (2016). An IoT based School bus Tracking and Monitoring System. American University of Sharjah, Sharjah, Emiratos Árabes Unidos. https://library.iated.org/view/BADAWY2016ANI

- Dhanasekar, N. Valavan, C. Soundarya, S. (2019). IoT based Intelligent Bus Monitoring System. A.V.C College of Engineering, Mayiladuthurai, India. https://www.academia.edu/download/61525777/iot-based-intelligent-bus-monitoring-system-IJERTCONV7IS1109020191215-11913-viwh0.pdf

- Kamal, M. Atif, M. Mujahid, H. Shanableh, T. Al-Ali, A. Nabulsi, A. (2019). IoT Based Smart City Bus Stops. American University of Sharjah, Sharjah, Emiratos Árabes Unidos. https://www.mdpi.com/1999-5903/11/11/227

- Karthikeyan, U. Usha, G. (2023). A secured IoT-based intelligent transport system (IoT-ITS) framework. SRM Institute of Science and Technology, Chennai, India. https://link-springer-com.loginbiblio.poligran.edu.co/article/10.1007/s00500-023-08410-7

- Roy, R. Kalotra, A. (2022). Vehicle Tracking System using Technological support for Effective Management in Public Transportation. University School of Business, Chandigarh University, Chandigarh, India. https://ijritcc.org/index.php/ijritcc/article/view/5515

- Jablonski, D. (2002). Reference Data for Engineers chapter 37 Radio Navigation Systems. Newnes, Boston, Estados Unidos de América. https://www.sciencedirect.com/science/article/abs/pii/B978075067291750039X 

- Babiuch, M. Foltýnek, P. Smutný, P. (2020). Using the ESP32 Microcontroller for Data Processing. Technical University of Ostrava, Ostrava, República Checa. https://ieeexplore.ieee.org/abstract/document/8765944 

- Srivastava, D. Kesarwani, A. Dubey, S. (2008). Measurement of Temperature and Humidity by using Arduino Tool and DHT11. JSS Academy of Technical Education, Noida, India. https://www.academia.edu/download/58144752/IRJET-V5I12167.pdf 

- Dinculeană, D. Cheng, X. (2019). Vulnerabilities and Limitations of MQTT Protocol Used between IoT Devices. Middlesex University, Londres, Inglaterra. https://www.mdpi.com/2076-3417/9/5/848 

- Catelon, M. Harter, M. Holowaychuk, T. Rajlich, N. Schlueter, I. (2014). Nodejs in Action. Manning Publications Co, Nueva York, Estados Unidos de América. http://dl.ketabesabz.com/ebooks3/up/node-js-in-action_[www.ketabesabz.com].pdf

- U-blox AG. (2011).  NEO-6 u-blox 6 GPS Modules Data Sheet [Folleto]. https://www.sigmaelectronica.net/wp-content/uploads/2021/11/GY-NEO-6M-V2-pdf.pdf

