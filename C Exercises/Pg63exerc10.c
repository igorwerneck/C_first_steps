#include <stdio.h>

int main()
{
    int matricula;
    float nota1, nota2, nota3, mediapond;

    printf("Digite a matricula do(a) aluno(a):\n");
    scanf("%d", &matricula);
    printf("Digite as tres notas do(a) aluno(a):\n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    while (matricula>0)
    {
        if (nota1>nota2 && nota1>nota3)
        {
            mediapond=(nota1*4+nota2*3+nota3*3)/10;
            if (mediapond>=60)
            {
                printf("Aluno APROVADO. Media: %.2f\n", mediapond);
                printf("Digite a matricula do(a) aluno(a):\n");
                scanf("%d", &matricula);
                printf("Digite as tres notas do(a) aluno(a):\n");
                scanf("%f %f %f", &nota1, &nota2, &nota3);

            }
            else
            {
                printf("Aluno REPROVADO. Media: %.2f\n", mediapond);
                printf("Digite a matricula do(a) aluno(a):\n");
                scanf("%d", &matricula);
                printf("Digite as tres notas do(a) aluno(a):\n");
                scanf("%f %f %f", &nota1, &nota2, &nota3);

            }


        }
        if (nota2>nota1 && nota2>nota3)
        {
            mediapond=(nota1*3+nota2*4+nota3*3)/10;
            if (mediapond>=60)
            {
                printf("Aluno APROVADO. Media: %.2f\n", mediapond);
                printf("Digite a matricula do(a) aluno(a):\n");
                scanf("%d", &matricula);
                printf("Digite as tres notas do(a) aluno(a):\n");
                scanf("%f %f %f", &nota1, &nota2, &nota3);

            }
            else
            {
                printf("Aluno REPROVADO. Media: %.2f\n", mediapond);
                printf("Digite a matricula do(a) aluno(a):\n");
                scanf("%d", &matricula);
                printf("Digite as tres notas do(a) aluno(a):\n");
                scanf("%f %f %f", &nota1, &nota2, &nota3);

            }


        }
        if (nota3>nota1 && nota3>nota2)
        {
            mediapond=(nota1*3+nota2*3+nota3*4)/10;
            if (mediapond>=60)
            {
                printf("Aluno APROVADO. Media: %.2f\n", mediapond);
                printf("Digite a matricula do(a) aluno(a):\n");
                scanf("%d", &matricula);
                printf("Digite as tres notas do(a) aluno(a):\n");
                scanf("%f %f %f", &nota1, &nota2, &nota3);

            }
            else
            {
                printf("Aluno REPROVADO. Media: %.2f\n", mediapond);
                printf("Digite a matricula do(a) aluno(a):\n");
                scanf("%d", &matricula);
                printf("Digite as tres notas do(a) aluno(a):\n");
                scanf("%f %f %f", &nota1, &nota2, &nota3);

            }


        }
        if (nota1==nota2 && nota2==nota3)
        {
            mediapond=(nota1*3+nota2*3+nota3*3)/9;
            if (mediapond>=60)
            {
                printf("Aluno APROVADO. Media: %.2f\n", mediapond);
                printf("Digite a matricula do(a) aluno(a):\n");
                scanf("%d", &matricula);
                printf("Digite as tres notas do(a) aluno(a):\n");
                scanf("%f %f %f", &nota1, &nota2, &nota3);

            }
            else
            {
                printf("Aluno REPROVADO. Media: %.2f\n", mediapond);
                printf("Digite a matricula do(a) aluno(a):\n");
                scanf("%d", &matricula);
                printf("Digite as tres notas do(a) aluno(a):\n");
                scanf("%f %f %f", &nota1, &nota2, &nota3);

            }
        }

    }
    return 0;
}
