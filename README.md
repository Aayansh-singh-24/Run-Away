

# 🕹️ Run-Away — A Two Player SFML Game

**Run-Away** is a simple two-player chase game built using **SFML (Simple and Fast Multimedia Library)** and **C++**.  
Two players move around a maze — one red and one yellow — trying to avoid collision before the timer runs out.

<img width="1091" height="831" alt="Screenshot 2025-11-03 223731" src="https://github.com/user-attachments/assets/1b5e4e46-e027-4220-b811-aa89b76e54c7" />

<img width="1075" height="826" alt="Screenshot 2025-11-03 223744" src="https://github.com/user-attachments/assets/f5f15925-484a-4d82-ab4e-c3e281c4f340" />

---

## 🚀 Features
- 🎮 Two-player real-time controls
- 🧱 Maze system using textured walls
- ⏱️ Countdown timer
- 💥 Game over condition (collision or timer end)
- 🧩 Designed for **SFML 2.6+**

---

## 🧰 Requirements

Before running the game, make sure you have:

- **Visual Studio 2022**
  - With **Desktop Development with C++** installed.
- **SFML 2.6.x**
  - Download from [SFML official site](https://www.sfml-dev.org/download.php)

---

## ⚙️ Setup Instructions (Visual Studio 2022)

1. **Download SFML**
   - Get the version for **Visual Studio 2022 (MSVC 17)**.
   - Extract it to a permanent location, e.g.  
     ```
    C:\Users\Acer\Downloads\SFML-2.6.2-windows-vc17-64-bit
     ```

2. **Open Project**
   - Create a new C++ **Empty Project** in Visual Studio 2022.
   - Add your `main.cpp` file to the project.

3. **Project Configuration**
   - Right-click the project → **Properties**
   - Under **All Configurations**:
     - **C/C++ → General → Additional Include Directories:**
       ```
       C:\SFML-2.6.1\include
       ```
     - **Linker → General → Additional Library Directories:**
       ```
       C:\SFML-2.6.1\lib
       ```

4. **Link Libraries**
   - **Linker → Input → Additional Dependencies**
     - For **Debug**:
       ```
       sfml-graphics-s-d.lib
       sfml-window-s-d.lib
       sfml-system-s-d.lib
       ```
     - For **Release**:
       ```
       sfml-graphics-s.lib
       sfml-window-s.lib
       sfml-system-s.lib
       ```
   - Under **C/C++ → Preprocessor → Preprocessor Definitions** add:
     ```
     SFML_STATIC
     ```

5. **Resources**
   - Place these files in the same folder as your `.exe`:
     ```
     tex.png
     Daily bubble.ttf
     ```
   - These are used for textures and fonts.

6. **Build & Run**
   - Press **Ctrl + F5** to build and run the game.
   - You should see the game window appear with two players and maze walls.

---

## 🎮 Controls

| Player | Move Up | Move Down | Move Left | Move Right |
|:-------|:--------:|:----------:|:----------:|:------------:|
| **Player 1 (Red)** | `W` | `S` | `A` | `D` |
| **Player 2 (Yellow)** | `↑` | `↓` | `←` | `→` |

---

## 🧱 Game Rules
- **Avoid Collision:** If both players collide → 💀 *Game Over*

- **Timer:** The game runs for 90 seconds. When the timer runs out → ⏰ *Game Over*
- **Boundaries:** Players can’t move outside the window or pass through walls.

---

## 📁 File Structure
