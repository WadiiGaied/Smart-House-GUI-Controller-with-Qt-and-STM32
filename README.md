

# Smart House

## Description

Smart House est un projet visant à contrôler la climatisation et l'éclairage d'une maison intelligente. Il affiche également la température et l'humidité via une interface utilisateur développée avec Qt.

## Matériel Utilisé

- Carte STM32Discovery
- Capteur DHT11 (pour mesurer la température et l'humidité)
- LED (pour l'éclairage)
- Moteur (pour la climatisation)

## Fonctionnalités

- **Contrôle de la climatisation** : Régule la température de la pièce en activant ou désactivant le moteur de climatisation.
- **Contrôle de l'éclairage** : Allume ou éteint les LED.
- **Affichage des mesures environnementales** : Affiche en temps réel la température et l'humidité sur une interface Qt.

## Prérequis

- [STM32CubeIDE](https://www.st.com/en/development-tools/stm32cubeide.html) pour développer et flasher le firmware sur la carte STM32Discovery.
- [Qt](https://www.qt.io/download) pour le développement de l'interface utilisateur.
- Bibliothèque de capteur DHT11 pour STM32.
- Bibliothèque de contrôle du moteur et des LED pour STM32.
