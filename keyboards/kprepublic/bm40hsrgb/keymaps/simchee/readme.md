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
  |  Tab  |   Q   |   W   |   E   |   R   |   T   |   Z   |   U   |   I   |   O   |   P   |   /   |
  |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
  | Numpad|   A   |   S   |   D   |   F   |   G   |   H   |   J   |   K   |   L   |   ;   |   '   |
  |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
  | LShift|   Y   |   X   |   C   |   V   |   B   |   N   |   M   |   ,   |   .   |  AUp  | =(+)  |
  |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
  |  Esc  |  GUI  | LCtrl | LAlt  |Low/Ent|     Space     | BkSpc | Raise | ALeft | ADown | ARight|
  °-----------------------------------------------------------------------------------------------°
```

## Lower

Lower provides Vim-style navigation on the right side for when using the keyboard with both hands, as well as media control keys. 
Other control keys are also included in this layer, including, scroll, caps lock, insert. Scroll lock is to activate compose key.

```
  .-----------------------------------------------------------------------------------------------.
  |  Tab  |  Mute |  VUp  |   PP  |       |       |       |       |       |       |       | Caps  |
  |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
  | Numpad|  Prev |  VDo  |  Next |  Esc  |       | ALeft | ADown |  AUp  | ARight|       |ScrLock|
  |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
  |       |  GUI  | Shift |  Alt  |  Ctrl |       |  Home | PDown |  PUp  |  End  |       | MRight|
  |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
  |QC_MAKE|  RGB  |       |       | Lower |     Enter     |  Del  |       | Nrpad | PrScr |  Ins  |
  °-----------------------------------------------------------------------------------------------°
```

## Raise

Raise is used for non-alphanumerical chars. 

```
  .-----------------------------------------------------------------------------------------------.
  |   ^   |   !   |   @   |   $   |       |       |       |   &   |   (   |    )  | `(~)  | /(|)  |
  |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
  |       |       |       |       |       |       |       |   *   |  [({) |  ](}) |       |   #   |
  |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
  | Shift |       |       |       |       |       |       |   -   |   <   |   >   |   %   |       |
  |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
  |       |       |       |       |       |     Space     | BkSpc | Raise |       |       |       |
  °-----------------------------------------------------------------------------------------------°
```

### Compose Key

<table>
	<tr>
		<th>Char</th>
		<th>First Key</th>
		<th>Second Key</th>
	</tr>
	<tr> <td> € </td> <td> equal </td><td> E / L / C </td></tr>
	<tr> <td> § </td> <td> s </td><td> o </td></tr>
	<tr> <td> ¢ </td> <td> bar </td><td> c </td></tr>
	<tr> <td> i/n </td> <td> i </td><td> n </td></tr>
	<tr> <td> © </td> <td> o </td><td> c </td></tr>
	<tr> <td> ÷ </td> <td> : </td><td> - </td></tr>
	<tr> <td> ä </td> <td> " </td><td> a </td></tr>
	<tr> <td> ç </td> <td> , </td><td> c </td></tr>
	<tr> <td> ğ </td> <td> {b; (}</td><td> g </td></tr>
	<tr> <td> ş </td> <td> , </td><td> s </td></tr>
	<tr> <td> ü </td> <td> " </td><td> u </td></tr>
	<tr> <td> ö </td> <td> " </td><td> o </td></tr>
	<tr> <td> ø </td> <td> / </td><td> o </td></tr>
	<tr> <td> ß </td> <td> s </td><td> s </td></tr>
	<tr> <td> µ </td> <td> / </td><td> u </td></tr>
</table>

## Numpad

Numpad also provides function keys. Lower key toggles instead of switching momentarily. 

```
  .-----------------------------------------------------------------------------------------------.
  |  TAB  |  F7   |  F8   |  F9   |       |       |       |   7   |   8   |   9   |   /   | Bkspc |
  |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
  | Numpad|  F4   |  F5   |  F6   |       |       |       |   4   |   5   |   6   |   *   |   =   |
  |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
  | Shift |  F1   |  F2   |  F3   |       |       |       |   1   |   2   |   3   |   +   | Enter |
  |-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+-------+
  |  ESC  |  F11  |  F11  |  F12  |TG(LOW)|   Space       |   ,   |   0   |   .   |   -   | Delete|
  °-----------------------------------------------------------------------------------------------°
```

