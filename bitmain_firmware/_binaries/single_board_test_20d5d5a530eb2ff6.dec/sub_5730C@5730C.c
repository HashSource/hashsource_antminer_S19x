int __fastcall sub_5730C(_WORD *a1, char *a2, _BYTE *a3, int a4, int a5, int a6, int a7)
{
  int v11; // r11

  if ( a6 >= 0 )
    v11 = 1;
  else
    v11 = 1 - a6;
  sub_57270(a1, a7, a6, 1);
  if ( a7 )
    return sub_4C25C((int)a1, a2, a3, a4, a5, v11);
  else
    return sub_49E00(a1, a2, a3, a4, a5, v11);
}
