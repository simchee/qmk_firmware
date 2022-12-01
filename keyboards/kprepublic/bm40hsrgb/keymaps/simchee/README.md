# Simchee's BM40HSRGB

Simple Design for US ANSI international, German and Turkish letters are written using dead keys on Linux. Keyboard hasn't been tested on Windows. 

Followed [drashna](https://github.com/qmk/qmk_firmware/issues/3224#issuecomment-399769416)'s advice to decrase firmware size. 

# Flashing

```bash
qmk flash -kb kprepublic/bm40hsrgb -km simchee -bl dfu
```

# Layout
## QWERTZ

Changes from standard ANSI keyboard for better ergonomic: switch ctrl and GUI (Windows) keys, escape at left bottom, tab on left top. 

```
  .-----------------------------------------------------------------------------------------------.
  |  Tab  |   Q   |   W   |   E   |   R   |   T   |   Z   |   U   |   I   |   O   |   P   |       |
  |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
  |  Fn1  |   A   |   S   |   D   |   F   |   G   |   H   |   J   |   K   |   L   |   ;   |   /   |
  |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
  | LShift|   Y   |   X   |   C   |   V   |   B   |   N   |   M   |   ,   |   .   |  AUp  | Enter |
  |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
  |  Esc  |  GUI  | LCtrl | LAlt  | Lower |     Space     | BkSpc | Raise | ALeft | ADown | ARight|
  °-----------------------------------------------------------------------------------------------°
```

## Lower

Lower layout is mainly for numpad on the right side with navigation keys for lazy left handed navigation. Left side of Lower also provides media and RGB control.

```
  .-----------------------------------------------------------------------------------------------.
  |  TAB  |  PUp  |  Up   | PDow  | Home  |       |       |   7   |   8   |   9   |   /   | Bkspc |
  |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
  |  Fn1  |  Left |  Down | Right |  End  |       |       |   4   |   5   |   6   |   *   |       |
  |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
  | Shift |  Mute |  VUp  |  VDo  |  PP   |  Prev | Next  |   1   |   2   |   3   |   +   |   =   |
  |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
  |  ESC  |  RGB  | LCtrl | LAlt  | Lower |     Enter     |   ,   |   0   |   .   |   -   |       |
  °-----------------------------------------------------------------------------------------------°
```

## Raise

Raise is used for non-alphanumerical chars. 

```
  .-----------------------------------------------------------------------------------------------.
  |   ^   |   !   |   @   |       |   $   |   %   |   &   |   *   |   (   |    )  |   ?   |   ~   |
  |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
  |       |       |       |       |       |       |       |   ´   |  [({) |  ](}) |   '   |  /(|) |
  |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
  |       |       |       |       |       |       |       |   -   |   <   |   >   |  =(+) |   #   |
  |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
  |       |       |       |       | Lower |     Space     | Raise | AltGr |       |       |       |
  °-----------------------------------------------------------------------------------------------°
```

## Fn1

Fn1 provides function keys, as well as Vim-style navigation on the right side for when using the keyboard with both hands. 
Scroll lock is to activate compose key. 

```
  .-----------------------------------------------------------------------------------------------.
  |  F12  |  F1   |  F2   |  F3   |  F4   |  F5   |  F6   |  F7   |  F8   |  F9   |  F10  |  F11  |
  |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
  |  Fn1  |  Esc  |       |       |       |       | Home  | PDown |  PUp  |  End  |  Caps |ScrLock|
  |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
  | LShift|       |       |       |       |       | ALeft | ADown |  AUp  | ARight|       | MRight|
  |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
  |QC_MAKE|       |       |       | Lower |     Enter     |  Del  |       | Nrpad | PrScr |  Ins  |
  °-----------------------------------------------------------------------------------------------°
```

### Compose Key

 * € :: equal -> E / L / C
 * § :: s -> o
 * ¢ :: bar -> c
 * x/y :: x -> y
 * © :: o -> c
 * ÷ :: : -> -
 * ä :: " -> a
 * ç :: , -> c
 * ğ :: b / ( -> g
 * ş :: , -> s
 * ü :: " -> u
 * ö :: " -> o
 * ø :: / -> o
 * ß :: s -> s
 * µ :: / -> u
