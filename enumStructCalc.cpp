#include <cstdio>

enum class Operation
{
  Add,
  Subtract,
  Multiply,
  Divide
};
struct Calculator
{
  Operation operation;
  Calculator(Operation op)
  {
    operation = op;
    switch (op)
    {
    case Operation::Add:
      printf("Add\n");
      break;
    case Operation::Subtract:
      printf("Subtract\n");
      break;
    case Operation::Divide:
      printf("Divide\n");
      break;
    case Operation::Multiply:
      printf("Multiply\n");
      break;
      printf("%d", op);
    }
  }
  Calculator() { operation = Operation::Add; }
  int calculate(int a, int b)
  {
    switch (operation)
    {
    case Operation::Add:
      return a + b;
      break;
    case Operation::Subtract:
      return a - b;
      break;
    case Operation::Multiply:
      return a * b;
      break;
    case Operation::Divide:
      if (b == 0)
        return 0;
      return a / b;
    }
  }
};

int main()
{
  Operation op;
  op = Operation::Add;

  struct Calculator calc
  {
    op
  };

  printf("result: %d\n", calc.calculate(1, 1));
  puts("Divide");
  calc.operation = Operation::Divide;
  printf("result: %d\n", calc.calculate(56, 2));
  puts("Multiply");
  calc.operation = Operation::Multiply;
  printf("result: %d\n", calc.calculate(3, 65));
  puts("Subtract");
  calc.operation = Operation::Subtract;
  printf("result: %d\n", calc.calculate(3, 9));

  struct Calculator calc2
  {
  };
  printf("calc2 result: %d", calc2.calculate(3, 6));
}