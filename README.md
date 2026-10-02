# CPU_8080

Emulador do processador **Intel 8080** escrito em **C++**. O projeto está em fase inicial: a estrutura de classes já existe, mas a maior parte da emulação ainda está por implementar.

## Estado atual

| Módulo | Situação |
| --- | --- |
| Registradores e `PC`/`SP` da CPU | Declarados e zerados no `reset()` |
| Flags (`Z`, `S`, `P`, `CY`, `AC`) | Declaradas, com `reset()` |
| Memória de 64 KB | `init()`, leitura e escrita com contagem de ciclos |
| Ciclo de busca e execução | `fetchOpcode`, `fetchWord` e laço `execute` com um único opcode (`LDA_IM`) |
| Carregamento de ROM (`ROM.hpp`) | Apenas declarado |
| Tela (`Screen`) | Framebuffer de 224×256 pixels; `update()` e `render()` ainda vazios |
| Disassembler | Arquivos criados, ainda vazios |
| `main.cpp` e `Makefile` | Ainda vazios, portanto o projeto ainda não gera executável |

## Estrutura

```text
CPU_8080/
├── includes/
│   ├── CPU/          Cpu.hpp, Flags.hpp, opcode.hpp, instructions.hpp, diassembler.hpp
│   ├── Memory/       memory.hpp
│   ├── ROM/          ROM.hpp
│   ├── Screen/       Screen.hpp
│   └── Utils/        Constants.hpp, Types.hpp
├── src/
│   ├── CPU/          cpu.cpp, flags.cpp, instruction.cpp, diassembler.cpp
│   ├── Memory/       memory.cpp
│   ├── Screen/       Screen.cpp
│   ├── Utils/        Constants.cpp
│   └── main.cpp
└── Makefile
```

## Detalhes de projeto

- **Tipos:** `Byte` (8 bits), `Word` (16 bits) e `Mem` (32 bits), definidos em `Utils/Types.hpp`.
- **Memória:** 64 KB (`0x10000`), com vetor de reset em `0x0000`.
- **Ciclos:** as operações de busca e de memória decrementam um contador de ciclos, e `Cpu::execute` roda enquanto ele for maior que zero.
- **Tela:** resolução de 224×256, a mesma dos jogos de arcade que rodavam no 8080, como o Space Invaders.

## Próximos passos

- [ ] Escrever o `Makefile` e o `main.cpp` (carregar ROM, rodar o laço da CPU)
- [ ] Corrigir os erros de compilação atuais (ver abaixo) e conferir o opcode de `LDA` (o código da instrução real é `0x3A`)
- [ ] Implementar o conjunto de instruções do 8080
- [ ] Implementar `ROM::load`
- [ ] Implementar o disassembler
- [ ] Desenhar a memória de vídeo na tela

## Pontos que precisam de correção antes de compilar

- `Flags.hpp` declara o construtor `Flags()` duas vezes.
- `Cpu` e `memory` se incluem mutuamente e guardam uma referência e um objeto um do outro, o que impede a construção.
- `Cpu` declara `fetchByte`, mas não o implementa; já `fetchOpcode` lê de `Memory.data` em vez da memória recebida como parâmetro.
- Em `Cpu::execute`, o `case` declara uma variável sem chaves.
- `memory.hpp` usa `Cpu` sem incluir o cabeçalho.
