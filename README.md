Project Blade (Work in Progress)

A modern turn-based RPG prototype built in Unreal Engine 5, blending classic JRPG initiative logic with the high-stakes "reactive" combat of Clair Obscur: Expedition 33.

⚔️ Project Vision

Project Blade aims to revitalize the traditional turn-based formula. Inspired by Final Fantasy X and Chrono Trigger, the game utilizes a strategic attribute-driven turn system, while mixing a "Live Reaction" layer, like Clair Obscur: Expedition 33, to keep players engaged during enemy turns—moving away from the "static" feeling of older RPGs.

🛠️ Technical Implementation (Phase 1: Foundation)

•	Dynamic Initiative System:

    o	Developed a Haste-driven turn order logic. Instead of scripted sequences, the combat "brain" evaluates character attributes to determine turn priority.
    o	Implemented a Randomized Tie-breaker system to handle equal Haste stats, ensuring unpredictable and fair tactical encounters.

•	Component-Based Attribute System:

    o	Introduced a comprehensive and scalable Stats System system within Unreal Engine 5, establishing the data structures for Strength, Accuracy, Stamina, Haste, and Wisdom. These are architected to influence both offensive output and turn frequency.

•	Reactive UI/UX Design:

    o	Built a context-aware Action Command UI (Attack, Magic, Tech, Items).
    o	The UI is designed to stay hidden during cinematic transitions and anchor to the active character's focus-frame, reducing screen clutter during the "Battlefield View."

•	Advanced Battle Cinematography:

    o	Developed a shifting camera system that transitions between a Mobius Final Fantasy back-of-party view and a focused over-the-shoulder "Active Turn" view. This reduces visual monotony and enhances player immersion.

💻 Tech Stack

•	Engine: Unreal Engine 5 (UE5)

•	Logic: Blueprints / Systems Design

•	Assets: Utilizing Epic’s Paragon assets for rapid high-fidelity prototyping.

•	Architecture: Component-based combat logic for easy expansion of character kits.

📅 Development Roadmap

•	[x] Core Attribute System & Haste Logic

•	[x] Basic Turn-Order Initiative

•	[x] Dynamic Camera Switching

•	[ ] Next Up: Implementing the action command (attack) and trying to introduce to the "Live Reaction" system (QTE for attacks).
