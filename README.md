# C++ Casino Royale

A modular, console-based casino suite built in C++. This project demonstrates effective multi-file organization, using a central "index" controller to manage distinct game modules.

## 🏗️ Project Architecture

The application is structured into specialized files to maintain a clean and scalable codebase:

* **`Casino.cpp`**: The primary entry point and menu controller that handles the main loop.
* **Bridge Headers**: 
    * `Files.h`: Consolidates game file references.
    * `Header.h`: Handles global declarations and connections between modules.
* **Game Modules**:
    * `BlackJack.h`: Complete logic for the Blackjack card game.
    * `Dice.h`: Logic for the dice-rolling mechanics.
    * `Number Guesser.h`: Logic for the number prediction game.

## 🎲 Featured Games

* **Blackjack**: A strategic card game where players aim for 21.
* **Number Guessing**: A high-stakes probability game.
* **Dice**: Fast-paced gambling based on classic dice rolls.

## 🛠️ How It Works

The program uses a persistent loop within `Casino.cpp` to keep the session active:
1.  **Menu Selection**: Enter a number to launch a specific game module.
2.  **Modular Execution**: The controller calls the logic defined in the specific `.h` files.
3.  **Persistence**: After a game ends, the user returns to the main menu until the **Terminate Key** is pressed.

## 🚀 Installation & Compilation

1.  **Clone the Repository**:
    ```bash
    git clone [https://github.com/AnthonyWernsing/CPP-Casino.git](https://github.com/AnthonyWernsing/CPP-Casino.git)
    ```
2.  **Compile with G++**:
    ```bash
    g++ Casino.cpp -o Casino
    ```
3.  **Run the Application**:
    ```bash
    ./Casino
    ```

## 🗺️ Roadmap

* **User Authentication**: Implementing a database to securely store login credentials and player bankrolls.
* **Data Persistence**: Saving game states to ensure progress isn't lost between sessions.
* **Input Hardening**: Enhancing validation to prevent crashes from non-numeric or invalid menu inputs.
* **Scientific Notation**: Adding support for large-scale currency values as the casino scales.

## 📸 Screenshots

![Main Menu](https://i.gyazo.com/d44bc0eb830bbb88f9c10b4274b21711.png)
![Blackjack](https://i.gyazo.com/0d29ec939a78dc8d40507f8e926a47cd.png)
![Number Guesser](https://i.gyazo.com/097b9df052643a6f0523525684a71465.png)
![Dice](https://i.gyazo.com/0729b20a86984998efcaec8580870cf6.png)
![Terminate](https://i.gyazo.com/0620918598b11c96eb0d88c98fe7a8d8.png).
