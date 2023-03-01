#include <iostream>;


int main(){

    std::string questions[] = {
                                "1. Who is the current NBA MVP?",
                                "2. How many time Kobe Bryant won the NBA Championship?",
                                "3. Who holds the record for the most NBA championships?",                            
                                };

    std::string options[][3] = {
                                {"A. LeBron James", "B. Stephan Curry", "C. Nikola Jokic"},
                                {"A.5", "B.6","C.7"},
                                {"A.Kobe Bryant", "B.Michael Jordan","C.Bill Russell"},                        
                                };

    char answer[] = {'C','A','C'};


    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score;

    for (int i = 0; i < size; i++){
        //std::cout <<"------------------------------"<<"\n";
        std::cout << questions[i] <<"\n";
    
        for (int j = 0; j < (sizeof(options[i])/sizeof(options[i][0])); j++)
        {
            //std::cout <<"------------------------------"<<"\n";
            std::cout << options[i][j] <<"\n";

        }

        std::cin >> guess;

        if (guess == answer[i])
        {
            std::cout <<"CORRECT!\n";
            score++;
        }else{
            std::cout <<"WRONG!\n";  
            std::cout <<"Answer: "<<answer[i] <<"\n";
        }
        std::cout <<"------------------------------"<<"\n";
    } 
    
    std::cout <<"Your score is "<<score<<", the total score is "<<size<<".";



    return 0;
}