#include <iostream>
using namespace std;

// Function to ask a question and return 1 if correct, 0 if wrong
int askQuestion(string question, char correctAnswer) {
    char userAnswer;
    cout << question;
    cout << "Enter your answer (A-D): ";
    cin >> userAnswer;

    if (userAnswer == correctAnswer) {
        cout << "Correct!\n\n";
        return 1;
    } else {
        cout << "Wrong! The correct answer is " << correctAnswer << ".\n\n";
        return 0;
    }
}

int main() {
    int score = 0;

    cout << "Welcome to the Smart Living Quiz! \n";
    cout << "Answer each question by typing A, B, C, or D.\n\n";

   score += askQuestion(
        "1. What is a smart city?\n"
        "A) A city with free Wi-Fi\n"
        "B) A city using technology for efficiency and sustainability\n"
        "C) A city with skyscrapers\n"
        "D) A city with many shopping malls\n",

        'B');

    score += askQuestion(
        "2. What reduces energy use in buildings?\n"
        "A) Neon lights\n"
        "B) Green roofs\n"
        "C) Diesel generators\n"
        "D) Concrete walls\n",

        'B');

    score += askQuestion(
        "3. Which energy source is renewable?\n"
        "A) Coal\n"
        "B) Natural gas\n"
        "C) Solar\n"
        "D) Diesel\n",

        'C');

    score += askQuestion(
        "3. Which energy source is renewable?\n"
        "A) Coal\n"
        "B) Natural gas\n"
        "C) Solar\n"
        "D) Diesel\n",

        'C');

        score += askQuestion(
        "3. Which energy source is renewable?\n"
        "A) Coal\n"
        "B) Natural gas\n"
        "C) Solar\n"
        "D) Diesel\n",

        'C');


    score += askQuestion(
        "3. IoT stands for:\n"
        "A) Internet of Trash\n"
        "B) Internal output\n"
        "C) Internet of Things\n"
        "D) Input of Technology\n",

        'C');

    score += askQuestion(
        "4. Most eco-friendly transport?\n"
        "A) Car\n"
        "B) Electric train\n"
        "C) Motorcycle\n"
        "D) Airplane\n",

        'B');

    score += askQuestion(
        "5. Renewable energy source?\n"
        "A) Coal\n"
        "B) Natural gas\n"
        "C) Solar\n"
        "D) Diesel\n",

        'C');

    score += askQuestion(
        "6. Smart grids help:\n"
        "A) Deliver faster internet\n"
        "B) Reduce traffic\n"
        "C) Improve electricity efficiency\n"
        "D) Monitor road safety\n",

        'C');

    score += askQuestion(
        "7. Benefit of green buildings?\n"
        "A) More colorful\n"
        "B) Lower construction cost\n"
        "C) Reduced energy use\n"
        "D) Require more electricity\n",

        'C');

    score += askQuestion(
        "8. EVs reduce:\n"
        "A) Noise pollution\n"
        "B) Carbon emissions\n"
        "C) Fuel costs\n"
        "D) All of the above\n",

        'D');

    score += askQuestion(
        "9. Energy-saving home device?\n"
        "A) Smart thermostat\n"
        "B) Microwave\n"
        "C) Vacuum cleaner\n"
        "D) Television\n",

        'A');

    score += askQuestion(
        "10. What is urban farming?\n"
        "A) Farming in rural areas\n"
        "B) Farming in cities using modern tech\n"
        "C) Growing flowers indoors\n"
        "D) Farming for decoration\n",

        'B');

    score += askQuestion(
        "11. Feature of smart bins?\n"
        "A) Smells better\n"
        "B) Internet connectivity\n"
        "C) Bigger in size\n"
        "D) Recycles automatically\n",

        'B');

    score += askQuestion(
        "12. Carbon footprint means:\n"
        "A) Footwear made from carbon\n"
        "B) Carbon-based products\n"
        "C) Amount of CO2 emissions by an individual\n"
        "D) Marks on a carbon surface\n",

        'C');

    score += askQuestion(
        "13. Why LED bulbs?\n"
        "A) Are cheaper\n"
        "B) Are brighter\n"
        "C) Consume less energy\n"
        "D) Flicker less\n",

        'C');

    score += askQuestion(
        "14. Public transport is sustainable because it:\n"
        "A) Uses diesel\n"
        "B) Moves large numbers of people\n"
        "C) Costs more\n"
        "D) Encourages private car use\n",

        'B');

    score += askQuestion(
        "15. Smart irrigation helps in:\n"
        "A) Flood control\n"
        "B) Growing trees\n"
        "C) Water conservation\n"
        "D) River cleaning\n",

        'C');

    score += askQuestion(
        "16. Smart city planning example:\n"
        "A) More factories\n"
        "B) Parking spaces only\n"
        "C) Bike-sharing systems\n"
        "D) Larger roads\n",

        'C');

    score += askQuestion(
        "17. Solar panels convert:\n"
        "A) Heat into air\n"
        "B) Wind into electricity\n"
        "C) Sunlight into electricity\n"
        "D) Electricity into light\n",

        'C');

    score += askQuestion(
        "18. Not a renewable source:\n"
        "A) Wind\n"
        "B) Biomass\n"
        "C) Oil\n"
        "D) Hydro\n",

        'C');

    score += askQuestion(
        "19. Known smart city:\n"
        "A) Las Vegas\n"
        "B) Barcelona\n"
        "C) Cairo\n"
        "D) Delhi\n",

        'B');

    score += askQuestion(
        "20. Reduce carbon footprint by:\n"
        "A) Flying more often\n"
        "B) Using plastic bags\n"
        "C) Carpooling or biking\n"
        "D) Leaving devices on standby\n",

        'C');

    cout << " Quiz Completed! \n";
    cout << "Your final score: " << score << " out of 20.\n";

    if (score >= 16) {
        cout << " Excellent! You're a Smart Living Expert!\n";
    } else if (score >= 10) {
        cout << "Good job! Keep learning about sustainability.\n";
    } else {
        cout << "Keep going! A greener future starts with awareness.\n";
    }

    return 0;
}

