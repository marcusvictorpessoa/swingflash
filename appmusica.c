#include <stdio.h>
#include <conio.c>
#include <conio.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>

void abertura();
void musica_inical();
void carrega();
void desenha();
void executa_programa();
void musica_final();
void instrucoes();
void abre_arquivos();

int main(){

     _setcursortype(_NOCURSOR);

    //arquivos que salvam o desempenho do usuario
    FILE* p1;
    FILE* p2;
    FILE* p3;

    abre_arquivos(p1,p2,p3);

    abertura();
    carrega();
    executa_programa(p1,p2,p3);
    gotoxy(23,25);

    return 0;
}

void toca_notasx(char x){
            if(x == 'c'){

                Beep(1046.50,500);

                }
             if(x == 'd'){

                Beep(1174.65,500);

             }
            if(x == 'e'){

                Beep(1318.51,500);

            }
            if(x == 'f'){

                Beep(1396.91,500);

            }
            if(x == 'g'){

                Beep(1567.98,500);

            }
            if(x == 'a'){

                Beep(1760,500);

            }
            if(x == 'b'){

                Beep(1975.53,500);

            }
            if(x == 'p'){

                Sleep(500);

            }

            if(x == 'C'){

                Beep(1046.50,1000);

                }
             if(x == 'D'){

                Beep(1174.65,1000);

             }
            if(x == 'E'){

                Beep(1318.51,1000);

            }
            if(x == 'F'){

                Beep(1396.91,1000);

            }
            if(x == 'G'){

                Beep(1567.98,1000);

            }
            if(x == 'A'){

                Beep(1760,1000);

            }
            if(x == 'B'){

                Beep(1975.53,1000);

            }
            if(x == 'P'){

                Sleep(1000);

            }

            //Sustenidos

            if(x == '1'){

                Beep(1108.73,500);

                }
             if(x == '2'){

                Beep(1244.50,500);

             }
            if(x == '3'){

                Beep(1479.97,500);

            }
            if(x == '4'){

                Beep(1661.21,500);

            }
            if(x == '5'){

                Beep(1864.65,500);

            }


            if(x == '6'){

                Beep(1108.73,1000);

                }
             if(x == '7'){

                Beep(1244.50,1000);

             }
            if(x == '8'){

                Beep(1479.97,1000);

            }
            if(x == '9'){

                Beep(1661.21,1000);

            }
            if(x == '0'){

                Beep(1864.65,1000);

            }
  }

void abertura(){

      //Este procedimento executa a abertura, desenhando na tela o nome do programa e tocando a musica inicial.
      clrscr();
      int i = 0;
      gotoxy(7,7);
      textcolor(GREEN + BLINK);
       cprintf("  ******  *   *   *  ***  **  *  ******");
      gotoxy(6,8);
      cprintf("  *        *   *   *   *   * * *  *    ");
      gotoxy(6,9);
      cprintf("   *****    * * * *    *   * * *  *  ****    ");
      gotoxy(6,10);
      cprintf("*       *   * * * *    *   * * *  *     * ");
      gotoxy(6,11);
      cprintf(" *******     *   *    ***  *  **  ******");
      textcolor(YELLOW);
      gotoxy(31,14);
      cprintf("****** *      *       ******  *   *");
      gotoxy(30,15);
      cprintf("*       *    *   *    *        *   *");
      gotoxy(30,16);
      cprintf("******  *    *****     *****   *****");
      gotoxy(30,17);
      cprintf("*       *    *   *  *       *  *   *");
      gotoxy(30,18);
      cprintf("*       **** *   *   *******   *   *");
       gotoxy(20,20);



            musica_inical();


}

void musica_inical(){

    //Este procedimento executa a musica inicial.

    Beep(391.99,500);
    Beep(440,400);
    Beep(493.88,400);
    //mi
    Beep(1318.51,1000);
    Sleep(100);
    // re sutenido
    Beep(1244.50,1000);
    Sleep(100);
    Beep(1318.51,1000);
    Sleep(300);
    //sol
    Beep(783.99,100);
    //la
    Beep(880,100);
    //si
    Beep(987.76,100);
    //do
    Beep(1046.50,100);
    //re
    Beep(1174.65,100);

    Beep(1318.51,1000);
    Sleep(200);
    Beep(1244.50,900);

    //fa
    Beep(1396.91,100);

    Beep(1318.51,1000);
    Sleep(300);
        //sol
    Beep(783.99,100);
    //la
    Beep(880,100);
    //si
    Beep(987.76,100);
    //do
    Beep(1046.50,100);
    //do sutenido
    Beep(1108.73,100);

    Beep(1174.65,1000);
    Sleep(100);
    Beep(1108.73,1000);
    Sleep(100);
    Beep(1174.65,1000);
    Sleep(300);
    //sol
    Beep(783.99,100);
    //la
    Beep(880,100);
    //si
    Beep(987.76,100);
    //do
    Beep(1046.50,100);
    //re
    Beep(1174.65,100);

    Beep(1318.51,1000);
    Sleep(100);
    Beep(1174.65,1000);
    Sleep(100);
    Beep(1046.50,1000);


}

void carrega(){

    // Este procedimento executa uma transicao entre a abertura do programa e o menu principal.
      gotoxy(3,23);
      puts("Pressione qualquer tecla para continuar...");
    char g;
    g = getche();
    clrscr();
    if (g){
        system("cls");
    }
    int a = 0;
    while(a < 2){
        gotoxy(35,12);
        puts("Carregando....");
        Sleep(500);
        system("cls");
        gotoxy(35,12);
        puts("              ");
        Sleep(500);
        system("cls");
            a++;
        }
        gotoxy(1,1);

}

void desenha(int i){
    //Este procedimento desenha as bordas dos menus.
    clrscr();
    int x,y,z,w;
    x=y=z=w=0;
        while (i<80){
            setbuf(stdin,NULL);
            Sleep(10);
            if (x <= 23){
            gotoxy(1,x);
            textcolor(GREEN);
            puts("*");
            }
            if (y <= 80){
            textcolor(RED);
            gotoxy(y+1,1);
            puts("*");
            }
            if (z <=80){
            textcolor(YELLOW);
            gotoxy(80 -(z),24);
            puts("*");
            }
            if (w <=23){
            textcolor(BLUE);
            gotoxy(80,24-(w));
            puts("*");
            }
            textcolor(WHITE);
            i++;
            x++;
            y++;
            z++;
            w++;
        }
}

void listamusicas(){

    gotoxy(31,6);
    puts("LISTA DE MUSICAS");
    gotoxy(32,8);
    puts("1 - PARABENS PARA VOCE");
    gotoxy(32,10);
    puts("DIFICULDADE : FACIL");
    gotoxy(32,12);
    puts("2 - ATIREI O PAU NO GATO");
    gotoxy(32,14);
    puts("DIFICULDADE : MEDIO");
    gotoxy(32,16);
    puts("3 - CANCAO DE NINAR");
    gotoxy(32,18);
    puts("DIFICULDADE : DIFICIL");
    gotoxy(32,20);
    puts("0 - VOLTAR");
    gotoxy(32,22);
    puts("DIGITE O NUMERO DA OPCAO: ");

}

void abre_arquivos(FILE* p1,FILE* p2,FILE*p3){

    p1 = fopen("pfacil.txt","ab+");
    if(p1 != NULL){

    }else{
        puts("falha ao abrir arquivo.");
        exit(1);
    }
    fclose(p1);

    p2 = fopen("pmedio.txt","ab+");
    if(p2 != NULL){

    }else{
        puts("falha ao abrir arquivo.");
        exit(1);
    }
    fclose(p2);

     p3 = fopen("pdificil.txt","ab+");
    if(p3 != NULL){

    }else{
        puts("falha ao abrir arquivo.");
        exit(1);
        }
         fclose(p3);



}

void listamusicas_modoavaliativo(FILE* p1,FILE* p2,FILE*p3,int tf,int tm,int td){

    gotoxy(31,6);
    puts("LISTA DE MUSICAS");
    gotoxy(64,6);
    puts("DESEMPENHO");
    gotoxy(32,8);
    puts("1 - PARABENS PARA VOCE");
    gotoxy(32,10);
    puts("DIFICULDADE : FACIL");
    p1 = fopen("pfacil.txt","rb+");
    if(p1 != NULL){
        fread(&tf, sizeof(tf),1, p1);
        gotoxy(64,8);
        printf("%i",tf);
        gotoxy(67,8);
        puts("%");

    }else{
        puts("falha ao abrir arquivo.");
        exit(1);
    }
    fclose(p1);
    gotoxy(32,12);
    puts("2 - ATIREI O PAU NO GATO");
    gotoxy(32,14);
    puts("DIFICULDADE : MEDIO");
    p2 = fopen("pmedio.txt","rb+");
    if(p2 != NULL){
        fread(&tm, sizeof(tm),1, p2);
        gotoxy(64,12);
        printf("%i",tm);
        gotoxy(67,12);
        puts("%");

    }else{
        puts("falha ao abrir arquivo.");
        exit(1);
    }
    fclose(p2);
    gotoxy(32,16);
    puts("3 - CANCAO DE NINAR");
    gotoxy(32,18);
    puts("DIFICULDADE : DIFICIL");
     p3 = fopen("pdificil.txt","rb+");
    if(p3 != NULL){
        fread(&td, sizeof(td),1, p3);
        gotoxy(64,16);
        printf("%i",td);
        gotoxy(67,16);
        puts("%");

    }else{
        puts("falha ao abrir arquivo.");
        exit(1);
        }
        fclose(p3);
    gotoxy(32,20);
    puts("0 - VOLTAR");
    gotoxy(32,22);
    puts("DIGITE O NUMERO DA OPCAO: ");

}

void preparacao(){
        gotoxy(32,10);
        puts("Pressione qualquer tecla para comecar...");
        getche();
        clrscr();
        gotoxy(32,10);
        puts("A musica ira tocar em...");
        Sleep(1000);
        clrscr();
        puts("3.");
        Sleep(1000);
        clrscr();
        puts("2..");
        Sleep(1000);
        clrscr();
        puts("1...");
        Sleep(1000);
        clrscr();
        gotoxy(10,21);
        puts("ESTAS SERAO AS NOTAS DA MUSICA QUE VOCE IRA TOCAR!");
        gotoxy(10,22);
        puts("AGUARDE A MUSICA TERMINAR.");

}

void preparacao_2(){

        clrscr();
        gotoxy(30,10);
        puts("Pressione qualquer tecla para jogar...");
        getche();
        clrscr();
        gotoxy(2,10);
        puts("Agora e a sua vez, as  cifras aparecerao na tela e voce tera que tocar!");
        Sleep(3000);
        clrscr();
        gotoxy(32,10);
        puts("O jogo ira comecar em...");
        Sleep(1000);
        clrscr();
        puts("3.");
        Sleep(1000);
        clrscr();
        puts("2..");
        Sleep(1000);
        clrscr();
        puts("1...");
        Sleep(1000);
        clrscr();

}

void mensagem_nota(char n){

    gotoxy(16,20);
    printf("APERTE ESTA TECLA -> %c",n);
    gotoxy(16,21);
    printf("SE A NOTA FOR MAIUSCULA, SEGURE A TECLA -Shift- E");
    gotoxy(16,22);
    printf("LOGO EM SEGUIDA APERTE A TECLA.");
    gotoxy(16,23);
    puts("SE A NOTA FOR UM P OU UM p ELA E UMA PAUSA, E");
    gotoxy(16,24);
    puts("SE ELA FOR UM NUMERO, A NOTA E UMA NOTA SUSTENIDA.");
    gotoxy(37,12);

}

void mensagem_final(){

    clrscr();
    gotoxy(25,12);
    puts("Pressione qualquer tecla para continuar...");
    gotoxy(25,13);
    getche();

}

void mensagem_rendimento_usuario(int t,int r, int h){

    t = (100 * r )/ h;
    gotoxy(25,10);
    printf("Voce acertou %i notas de %i notas!", r, h);
    gotoxy(25,11);
    printf("Voce acertou %i porcento", t);
    gotoxy(25,12);
    puts("pressione qualquer tecla para continuar...");
    gotoxy(25,13);
    getche();


}

void mensagem_salvar(){
    clrscr();
    gotoxy(25,10);
    puts("Deseja salvar progresso?");
    gotoxy(25,11);
    puts("1 - Sim        0 - Nao");
    gotoxy(25,12);
    puts("Digite sua escolha: ");
    gotoxy(25,13);
}

void executa_programa (FILE* p1,FILE* p2,FILE* p3){
    //variaveis que recebem o total de notas acertadas pelo usuario
    int rd = 0,rf = 0,rm = 0;
    //variaves que controlam os loops das musicas
    int i = 0, j = 0;
    //variaveis que recebem a porcentagem de acerto do usuario
    int td = 0,tm = 0,tf = 0;
    //variaveis que controlam o fluxo do programa
    int x,z;
    char y;
    char a;
    int h;
    //variavel que recebe a escolha para salvar ou nao o desempenho do usuario
    char opcao;
    //variaveis que recebem as notas das musicas e as notas digitadas pelo usuario
    char nd, ndu, nf, nfu, nm, nmu;
    //variaveis que leem o desempenho do arquivo
    int lf = 0, lm = 0, ld = 0;

    y='0';
    x=0;
    z=0;

    //musicas
    char mfacil[30] ="ccDCFEPccDCGFFPaaCAFEDP55AFGFF";
    char mmedia[45] = "GpfedefGGGagFFFgfEEEdcAAAbaGGGefgpefgfedcpgpc";
    char mdificil[53] = "eeGeeGegCbaagdeFdegFdfbagbCccCafGecfgaegccCafgecfgfec";

    //loop do programa
    while(y != 4){

        if (z==0){
        clrscr();
        gotoxy(1,24);
        desenha(x);
        z=1;
        }

        //menu principal

        gotoxy(31,10);
        puts(" 1-PRATICA_SWING");
        gotoxy(33,12);
        puts("2-AVALIA_SWING");
        gotoxy(31,14);
        puts("3-INSTRUCOES_SWING");
        gotoxy(36,16);
        puts("4-SAIR");
        setbuf(stdin,NULL);
        gotoxy(28,18);
        puts("DIGITE O NUMERO DA OPCAO: ");
        gotoxy(1,24);
        y= getch();

        //modo pratico
        if (y =='1'){
          while(1){
            clrscr();
            while(y!='0'){
            // criar menu de musicas
                gotoxy(1,24);
                desenha(x);
                listamusicas();
                gotoxy(32,18);
                a = getche();
                clrscr();

                //musica 1

                if (a == '1'){

                    preparacao();

                    while(i < 30){
                            nf = mfacil[i];
                            gotoxy(10+i,12);
                            printf("%c", nf);
                            toca_notasx(nf);
                            i++;
                    }
                    i = 0;

                    preparacao_2();

                    while(i < 30){
                        nf = mfacil[i];
                            gotoxy(33,10);
                            puts("TOQUE ESTA NOTA:");
                            gotoxy(37,11);
                            printf("%c", nf);

                                mensagem_nota(nf);

                            nfu = getche();
                            toca_notasx(nfu);
                            clrscr();
                            i++;

                    }
                            i = 0;
                        mensagem_final();

                }

                //musica 2

                else if (a == '2'){

                    preparacao();

                    while(i < 45){
                            nm = mmedia[i];
                            gotoxy(10+i,12);
                            printf("%c", nm);
                            toca_notasx(nm);
                            i++;
                    }
                    i = 0;

                    preparacao_2();

                    while(i < 45){
                        nm = mmedia[i];
                            gotoxy(33,10);
                            puts("TOQUE ESTA NOTA:");
                            gotoxy(37,11);
                            printf("%c", nm);

                                mensagem_nota(nm);

                            nmu = getche();
                            toca_notasx(nmu);
                            clrscr();
                            i++;

                    }
                        i = 0;
                    mensagem_final();

                }

                //musica 3

                else if (a == '3'){

                    preparacao();

                    while(i < 53){
                            nd = mdificil[i];
                            gotoxy(10+i,12);
                            printf("%c", nd);
                            toca_notasx(nd);
                            i++;
                    }
                    i = 0;

                    preparacao_2();

                    while(i < 53){
                        nd = mdificil[i];
                            gotoxy(33,10);
                            puts("TOQUE ESTA NOTA:");
                            gotoxy(37,11);
                            printf("%c", nd);

                                mensagem_nota(nd);

                            ndu = getche();
                            toca_notasx(ndu);
                            clrscr();
                            i++;

                    }
                        i = 0;
                            mensagem_final();

                }else if (a =='0'){
                    break;
                }
                else{
                    gotoxy(32,15);
                    puts("Opcao invalida! Digite novamente.");
                    Sleep(2000);

                }
            }
                clrscr();
                break;

            }
        z=0;

        }
        //modo avaliativo
       else if (y =='2'){
            clrscr();
            while(y!='0'){
            // criar menu de musicas
            gotoxy(1,24);
            desenha(x);
            listamusicas_modoavaliativo(p1,p2,p3,lf,lm,ld);
                gotoxy(32,18);
                a = getche();
                clrscr();

                //musica 1

                if (a == '1'){

                    rf = 0;

                    preparacao();

                    while(j < 30){
                            nf = mfacil[j];
                            gotoxy(10+j,12);
                            printf("%c", nf);
                            toca_notasx(nf);
                            j++;
                    }
                    j = 0;

                    preparacao_2();

                    while(j < 30){
                        nf = mfacil[j];
                            gotoxy(33,10);
                            puts("TOQUE ESTA NOTA:");
                            gotoxy(37,11);
                            printf("%c", nf);

                               mensagem_nota(nf);

                            nfu = getche();
                            toca_notasx(nfu);
                            clrscr();
                            j++;
                            if (nf == nfu){
                                rf = rf + 1;
                            }


                    }
                    j = 0;
                    h = 30;
                       mensagem_rendimento_usuario(tf,rf,h);

                       //calcula  o desempenho do usuario
                       tf = (100 * rf)/30;


                     //salva o progresso do usuario.

                            mensagem_salvar();

                            opcao = getche();
                            if (opcao == '1'){
                                p1 = fopen("pfacil.txt","wb+");
                                if(p1 != NULL){
                                fwrite(&tf, sizeof(tf),1, p1);
                                }else{
                                    puts("falha ao abrir arquivo.");
                                    exit(1);
                                }
                                fclose(p1);
                            }
                                tf = 0;

                             fflush(stdin);
                }

                //musica 2

                else if (a == '2'){

                    rm = 0;

                    preparacao();

                    while(j < 45){
                            nm = mmedia[j];
                            gotoxy(10+j,12);
                            printf("%c", nm);
                            toca_notasx(nm);
                            j++;
                    }
                    j = 0;
                    preparacao_2();
                    while(j < 45){
                        nm = mmedia[j];
                            gotoxy(33,10);
                            puts("TOQUE ESTA NOTA:");
                            gotoxy(37,11);
                            printf("%c", nm);

                                mensagem_nota(nm);

                            nmu = getche();
                            toca_notasx(nmu);
                            clrscr();
                            j++;
                            if (nm == nmu){
                                rm = rm + 1;
                            }


                    }
                    j = 0;
                    h = 45;
                            mensagem_rendimento_usuario(tm,rm,h);

                        //calcula  o desempenho do usuario
                       tm = (100 * rm)/45;

                         //salva o progresso.

                            mensagem_salvar();

                            opcao = getche();
                            if (opcao =='1'){
                                p2 = fopen("pmedio.txt","wb+");
                                if(p2 != NULL){
                                fwrite(&tm, sizeof(tm),1, p2);

                                }else{
                                    puts("falha ao abrir arquivo.");
                                    exit(1);
                                }
                                fclose(p2);

                            }
                            tm = 0;
                             fflush(stdin);


                }

                //musica 3

                else if (a == '3'){

                    rd = 0;

                    preparacao();
                    while(j < 53){
                            nd = mdificil[j];
                            gotoxy(10+j,12);
                            printf("%c", nd);
                            toca_notasx(nd);
                            j++;
                    }
                    j = 0;

                    preparacao_2();

                    while(j < 53){
                        nd = mdificil[j];
                            gotoxy(33,10);
                            puts("TOQUE ESTA NOTA:");
                            gotoxy(37,11);
                            printf("%c", nd);

                                mensagem_nota(nd);

                            ndu = getche();
                            toca_notasx(ndu);
                            clrscr();
                            j++;
                            if (nd == ndu){
                                rd = rd + 1;
                            }


                    }
                    j = 0;
                    h = 53;
                            mensagem_rendimento_usuario(td,rd,h);

                        //calcula  o desempenho do usuario
                        td = (100 * rd)/53;

                            //salva o progresso.
                             mensagem_salvar();
                            opcao = getche();
                            if (opcao =='1'){
                                p3 = fopen("pdificil.txt","wb+");
                                if(p3 != NULL){
                                fwrite(&td, sizeof(td),1, p3);

                                }else{
                                    puts("falha ao abrir arquivo.");
                                    exit(1);
                                }
                                fclose(p3);

                            }

                            td = 0;
                            fflush(stdin);



                }else if (a =='0'){
                    break;
                }
                else{
                    gotoxy(27,15);
                    puts("Opcao invalida! Digite novamente.");
                    Sleep(3000);

                }
                 clrscr();
                break;

            }
        z=0;

        }
       //instrucoes
       else if (y=='3'){
            clrscr();
          while(y!='0' ){
            desenha(x);
            instrucoes();

            getche();
            y = '0';
            }
            y = '0';
            z=0;
        }
        else if (y == '4'){
            musica_final();
            break;
        }


}
}

void musica_final(){
    Beep(880,300);
    Beep(783.99,300);
    Beep(704,500);
}

void instrucoes(){

    gotoxy(15,10);
    puts("Bem vindo ao swing flash!");
    gotoxy(15,11);
    puts("Ensinaremos voce a tocar musicas em tres dificuldades.");
    gotoxy(15,12);
    puts("O programa permite jogar no modo livre e ser avaliado.");
    gotoxy(15,14);
    puts("Pressione qualquer tecla para continuar a explicacao...");
    gotoxy(15,15);
    getche();
    clrscr();
    gotoxy(15,10);
    puts("O que e musica ?");
    gotoxy(15,11);
    puts("Uma definicao basica de musica - e um conjunto");
    gotoxy(15,12);
    puts("de notas ou acordes que formam uma melodia e");
    gotoxy(15,13);
    puts("manipula o som e o organiza no tempo.");
    gotoxy(15,15);
    puts("Pressione qualquer tecla para continuar a explicacao.");
    gotoxy(15,16);
    getche();
    clrscr();
    gotoxy(15,10);
    puts("Cada nota tem uma cifra!");
    gotoxy(15,11);
    puts("Exemplo: A cifra da nota Do -> c ou C.");
    gotoxy(15,12);
    puts("Cifra e um sistema de notacao musical usado para indicar,");
    gotoxy(15,13);
    puts("por meio de simbolos graficos ou letras,");
    gotoxy(15,14);
    puts("os acordes ou a sequencia de notas");
    gotoxy(15,15);
    puts("a serem executados por um instrumento musical.");
    gotoxy(15,17);
    puts("Pressione qualquer tecla para continuar a explicacao...");
    gotoxy(15,18);
    getche();
    clrscr();
    gotoxy(15,10);
    puts("TABELA DAS NOTAS COM SUAS CIFRAS");
    gotoxy(15,11);
    puts("Do -> c ou C || Do Sutenido -> c# ou C#");
    gotoxy(15,12);
    puts("Re -> d ou D || Re Sustenido -> d# ou D#");
    gotoxy(15,13);
    puts("Mi -> e ou E");
    gotoxy(15,14);
    puts("Fa -> f ou F || Fa Sustenido -> f# ou F#");
    gotoxy(15,15);
    puts("Sol -> g ou G || Sol sustenido -> g# ou G#");
    gotoxy(15,16);
    puts("La -> a ou A || La Sustenido -> a# ou A#");
    gotoxy(15,17);
    puts("Si -> b ou B || Si Sustenido -> b# ou B#");
    gotoxy(15,19);
    puts("pressione qualquer tecla para continuar...");
    gotoxy(15,20);
    getche();
    clrscr();
    gotoxy(15,10);
    puts("As cifras minusculas duram meio segundo,");
    gotoxy(15,11);
    puts("e as cifras maiusculas duram um segundo.");
    gotoxy(15,12);
    puts("As notas sustenidas serao representadas");
    gotoxy(15,13);
    puts("por numeros no SWING FLASH.");
    gotoxy(15,14);
    puts("Exemplo: A cifra c# -> 1 e a d# -> 2 e etc...");
    gotoxy(15,15);
    puts("As pausas de silencio serao representadas por P ou p,");
    gotoxy(15,16);
    puts("onde P vale 1 segundo e p meio segundo");
    gotoxy(15,18);
    puts("pressione qualquer tecla para continuar...");
    gotoxy(15,19);
    getche();
    clrscr();
    gotoxy(15,10);
    puts("O jogo e simples, as cifras das notas irao aparecer na tela e");
    gotoxy(15,11);
    puts("voce deve apertar o botao do teclado correspondente");
    gotoxy(15,12);
    puts("a cifra que aparecer na tela.");
    gotoxy(15,14);
    puts("Pressione qualquer tecla para continuar...");
    gotoxy(15,15);
    getche();
    clrscr();
    gotoxy(15,10);
    puts("AGORA VOCE JA PODE JOGAR!");
    gotoxy(15,12);
    puts("Pressione qualquer tecla para voltar...");

}

