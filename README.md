Instalação do compilador g++
============================

## Ubuntu

### Como instalar

`sudo apt-get install g++`

### Como desinstalar

`sudo apt-get remove g++`

Simple as that :)

## Windows

### Como instalar

1. Clique [aqui](https://osdn.net/projects/mingw/downloads/68260/mingw-get-setup.exe/) para iniciar o download (deve começar automaticamente);
2. Execute o arquivo "mingw-get-setup", que foi baixado;
3. Confira suas preferências na janela aberta, **se mudar o diretório de instalação, salve-o para depois**. 
Clique em "Continue". Aguarde o download (pode levar alguns minutos); 
4. Depois de finalizado o download, clique novamentem em "Continue";
5. Na próxima janela, marque a opção "mingw32-gcc-g++-bin" como na imagem:

<img src="https://user-images.githubusercontent.com/31678236/95663416-79c36780-0b15-11eb-9808-6719d7cf4b20.png" width="850px"/>

6. No canto superior esquerdo, clique em "Installation" e logo após em "Apply Changes":

<img src="https://user-images.githubusercontent.com/31678236/95663496-0ec66080-0b16-11eb-95bb-6334b8cedfa3.png" width="850px"/>

7. Na janela aberta, clique em "Apply" e aguarde o download (pode levar alguns minutos);
8. Quando disponível, clique em "Close" e feche as janelas de instalação;
9. No menu iniciar, procure por "Editar as variáveis de ambiente do sistema":

<img src="https://user-images.githubusercontent.com/31678236/95663664-8ba60a00-0b17-11eb-8d89-b87343f8e831.png" width="850px"/>

10. Na janela aberta, clique em "Variáveis de Ambiente...";
11. Clique na variável "PATH" e logo após em "Editar":

<img src="https://user-images.githubusercontent.com/31678236/95663801-7aa9c880-0b18-11eb-9adb-e2d738ea5deb.png" width="850px"/>

12. Clique em "Novo" e cole o caminho o seguinte caminho: `C:\MinGW\bin` <br> 
**Atenção: se você mudou o diretório de instalação no passo 3, cole o caminho modificado**.

<img src="https://user-images.githubusercontent.com/31678236/95663962-0112da00-0b1a-11eb-98e5-889ed82e38ac.png" width="650px"/>

13. Dê "Ok" em todas as janelas.

Pronto! Teste usando `g++ -v` no seu prompt de comando, deve mostrar uma mensagem como esta:

<img src="https://user-images.githubusercontent.com/31678236/95664031-8d250180-0b1a-11eb-982f-abda2baba48a.png" width="750px"/>

## Como desinstalar
Basta apagar o diretório de instalação. Por padrão está em: `C:\MinGW`

**Dica: Use Ubuntu :)**

