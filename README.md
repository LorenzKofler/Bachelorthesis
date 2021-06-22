# Lorenz's Bachelorarbeit: Mechanismen für Containersicherheit unter Linux

## Kurzfassung
Container sind eine leichtgewichtige Alternative zu virtuellen Maschinen und
werden dadurch immer beliebter. Um Container zu ermöglichen, sind unter Linux
verschiedenste Mechanismen verfügbar. Einerseits sind Mechanismen vorhanden,
welche die vom Container benötigten Systemressourcen isolieren, und
andererseits Mechanismen, welche den Host vor unerlaubten Zugriffen aus dem Container
beschützen. Das Ziel dieser Bachelorarbeit ist es, den Stand der Technik der
vorhandenen Mechanismen zur Isolation von Containern aufzuzeigen. Ebenso werden
die eventuell vorhandenen Probleme geschildert.

Um die Forschungsfragen zu beantworten, werden zuerst die zur Isolation von
Containern verwendeten Linux Kernel Features und anschließend die dazu
verwendeten Linux Security Modules behandelt. Die Funktionalität der
Mechanismen wird mithilfe von Beispielen demonstriert.

Es zeigt sich, dass alle nötigen Mechanismen für eine erfolgreiche Isolation
von Containern vorhanden sind. Die Verwendung von Linux Security Modules ist
ein besonders wichtiger Mechanismus, um Hosts vor einem Container zu
beschützen. Jedoch weisen vorhanden Linux Security Modules Mängel bei
Verwendung mit Containern auf. Aktuelle Forschungen fokussieren sich auf die
vorhanden Mängel und versuchen diese zu beheben.


## Abstract
Containers are more lightweight than virtual machines and therefore gaining
popularity. Under Linux there are several mechanisms available to make
containers possible. On one hand there are mechanisms needed to isolate the
necessary system resources and on the other hand there are mechanisms needed to
protect the host from attacks out of the container. 

The goal of this thesis is to show the current state-of-the-art of mechanisms
to successfully isolate containers. To answer the research questions the
necessary Linux Kernel Features are explained first. The second part is the
explanation of the necessary Linux Security Modules. Additionally, the
functionality of the mechanism is demonstrated with examples.

The result of this thesis shows that all necessary mechanisms, to successfully
isolate containers, are available. The use of Linux Security Modules is a very
important mechanism to protect the host from containers. However, existing
Linux Security Modules are not best suited for this use case. Current
development and research is focused on improving usability of Linux Security
Modules with containers.

## Build using the Makefile
```
make build
```
