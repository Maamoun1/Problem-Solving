# 🏛️ SOLID Principles: Software Design Excellence

## 🚀 Overview
This repository is a deep dive into the **SOLID Principles**, the foundation of clean and professional software architecture. Each principle is implemented with **real-world examples** in **C#**, demonstrating how to write code that is easy to maintain, extend, and test.

---

## 🏗️ The Five Pillars of SOLID

## 1. Single Responsibility Principle (SRP)
* **Concept:** A class should have one, and only one, reason to change.
* **Implementation:** Refactoring bloated classes into smaller, focused services (e.g., separating Data Persistence from Email Notification logic).

## 2. Open/Closed Principle (OCP)
* **Concept:** Software entities should be open for extension but closed for modification.
* **Implementation:** Utilizing **Interfaces** and **Abstract classes** to add new features (like new Payment Methods) without altering existing, tested code.

## 3. Liskov Substitution Principle (LSP)
* **Concept:** Objects of a superclass should be replaceable with objects of its subclasses without breaking the application.
* **Implementation:** Ensuring proper inheritance hierarchies where derived classes truly fulfill the "is-a" relationship (e.g., avoiding the classic Square-Rectangle trap).

## 4. Interface Segregation Principle (ISP)
* **Concept:** Clients should not be forced to depend on methods they do not use.
* **Implementation:** Breaking down large, "fat" interfaces into smaller, specific ones (e.g., `IPrint` vs `IScan` vs `IFax`) to keep the system decoupled.

## 5. Dependency Inversion Principle (DIP)
* **Concept:** Depend on abstractions, not on concretions.
* **Implementation:** Extensive use of **Dependency Injection (DI)** to decouple high-level modules from low-level modules, making the system highly testable.

---

## 🛠️ Why these principles matter?
* **Maintainability:** Easier to fix bugs without affecting other parts of the system.
* **Scalability:** Adding new features becomes a matter of adding new code, not changing old code.
* **Testability:** Decoupled code allows for efficient Unit Testing and Mocking.

---

## 📂 Folder Structure
* Each sub-folder contains a **Before** (Violating the principle) and **After** (Applying the principle) scenario to showcase the improvement in code quality.

---

### 💡 Final Thought
Applying **SOLID** is what transforms a "Coder" into a "Software Architect". These implementations are the building blocks I use daily while developing robust backend systems with **.NET Core**.