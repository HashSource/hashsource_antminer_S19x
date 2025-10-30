void __fastcall sub_267EA8(int a1, _BYTE **a2, unsigned int a3, int a4, int a5)
{
  int v8; // r0
  char *v9; // r0

  v8 = sub_170040(a1);
  if ( **a2 == 7 )
  {
    sub_267E04(a5, v8, a3, a4);
  }
  else if ( *(_DWORD *)(a5 + 72) )
  {
    sub_1C73DC(a5, v8, a3, a4, dword_46D448);
  }
  else if ( *(_DWORD *)(a5 + 20) )
  {
    v9 = sub_25AC8C(v8, a3);
    sub_25A6BC(v9, a4);
  }
}
