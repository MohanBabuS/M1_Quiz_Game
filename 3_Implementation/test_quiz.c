#include "unity.h"
#define PROJECT_NAME "Quiz_Game"
extern void test_quiz();
void setUp(void)
{
}
void tearDown(void)
{

}
int main(void)
{
    UnityBegin(NULL);
    RUN_TEST(test_quiz);
    return (UnityEnd());
}