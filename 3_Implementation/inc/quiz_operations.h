/**
 * @file quiz_operations.h
 * @author Mohan Babu S (mohanbabu.s.2018.ece@ritchennai.edu.in)
 * @brief Header file for quiz game
 * @version 0.1
 * @date 2022-03-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef _QUIZ_OPERATIONS_H_
#define _QUIZ_OPERATIONS_H_

/**
 * @brief SHOW SCREEN RECORD OF QUIZ GAME
 * @return TEXT FILE GENERATED WITH SECURED HIGH SCORE
 */
void show_record();

/**
 * @brief DOING FILE OPERATIONS FOR TEXT FILE
 * @return RESET SCORE FROM 0
 */
void reset_score();

/**
 * @brief GIVES INSTRUCTION OF THE QUIZ GAME
 */
void help();

/**
 * @brief GIVES SCORE INFORMATIONS
 * @param[in] operand1
 * @param[in] operand2
 * @return INTEGER VALUE OF THE OPERAND1 AND OPERAND2
 */
void edit_score(float operand1, char operand2);

#endif /* #define _QUIZ_GAME_H_ */