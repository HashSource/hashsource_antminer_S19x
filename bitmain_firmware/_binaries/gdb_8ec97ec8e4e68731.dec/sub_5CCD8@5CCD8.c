int __fastcall sub_5CCD8(int a1, int a2, int a3)
{
  int v5; // r4
  int result; // r0
  _DWORD *v7; // r0

  v5 = sub_17FB94();
  result = sub_60344("-inferior-tty-show", a3, a2);
  if ( !result )
    sub_946E0("-inferior-tty-show: Usage: No args");
  if ( v5 )
  {
    v7 = (_DWORD *)sub_242FDC(result);
    return sub_2575E8(*v7, "inferior_tty_terminal", v5);
  }
  return result;
}
