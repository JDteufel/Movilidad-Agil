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

###**Árbol de Problemas**:
![](https://github.com/JDteufel/Movilidad-Agil/blob/main/Mapa%20conceptual.png)

###**Árbol de Soluciones**:
![](https://github.com/JDteufel/Movilidad-Agil/blob/main/Tablero%20en%20blanco.png)


## IV.	**Justificación**

El desarrollo de este proyecto es fundamental para mejorar la gestión del transporte universitario. Al automatizar la detección de las horas de llegada y salida de los buses, se optimizarán los tiempos de espera y se reducirá el número de trayectos innecesarios, lo que supone una disminución de costos operativos. Además, brindará a los estudiantes y profesores información en tiempo real, ayudando a mejorar la puntualidad y eficiencia en su desplazamiento entre los campus.



## V.	**Metodología**

**Obtención de información**: Al iniciar y con el objetivo de obtener una base sólida de información se utilizaron las bases de datos de Google Scholar por su amplitud de información junto con la utilización de recursos provistos por la universidad, por medio de Scopus, Scielo y SpringerLink que hacen parte de la biblioteca virtual CREA. Adicionalmente en el marco teórico se añaden más referencias que explican temas importantes en el ámbito del proyecto, definiciones y descripciones en mayor medida.

**Diseño del prototipo**: En esta fase, se definirá el diagrama esquemático del sistema, que incluirá la integración de la placa Arduino con los sensores GPS y módulos de comunicación. Se realizarán cálculos y diagramas para asegurar la correcta funcionalidad del prototipo en el entorno de transporte de la universidad. 

**Implementación**: Se procederá a la construcción del prototipo físico. Los componentes se ensamblarán sobre el diseño de Arduino UNO y se programarán para que puedan detectar la posición en tiempo real de los buses universitarios y enviar esa información a una base de datos centralizada o directamente a los dispositivos móviles de los usuarios.

**Codificación**: Durante 5 semanas se crearon diversos retos basados en IoT, estos son programas utilizando protocolos I2C, WebSockets y MQTT. Se crean con el objetivo de tener una guía para posteriormente ser aplicados dentro del proyecto. El objetivo final incluirá la inclusión de estos 3 protocolos dentro del código y el diseño físico.

**Pruebas y simulaciones**: Se realizarán pruebas de funcionamiento tanto en entornos simulados como en las rutas reales del Politécnico. Estas pruebas buscarán garantizar la precisión de los datos recogidos por los sensores y evaluar la respuesta en tiempo real del sistema. Además, se medirán parámetros como la cobertura de señal, tiempos de latencia y consumo energético del sistema. 
