int __fastcall sub_1592C4(int a1, _BYTE *a2, int a3, int a4, int a5)
{
  char *v9; // r3
  int v10; // r2
  bool v11; // cc
  int result; // r0
  _BOOL4 v13; // r5
  _BOOL4 v14; // r3

  if ( sub_174544(a1) )
    return sub_25637C(a3);
  if ( sub_1744F0(a1) )
    return sub_256370(a3);
  sub_158E9C((char *)a1, a3, a4, a5);
  v9 = *(char **)(a1 + 24);
  v10 = *v9;
  if ( a2 && *a2 )
    goto LABEL_11;
  if ( a4 > 0 || !*((_DWORD *)v9 + 2) )
  {
    v11 = (v10 & 0xFFFFFFF7) > 7;
    if ( (v10 & 0xFFFFFFF7) != 7 )
      v11 = (unsigned __int8)(v10 - 1) > 1u;
    if ( !v11 || v10 == 18 )
LABEL_11:
      sub_25A6BC(&word_3E1F84, a3);
  }
  result = sub_158DD8(a1, a3, a4, 0);
  if ( a2 )
  {
    result = sub_25A6BC(a2, a3);
    v13 = a4 <= 0;
    if ( *(_DWORD *)(*(_DWORD *)(a1 + 24) + 8) )
      v14 = v13;
    else
      v14 = 0;
    if ( !v14 )
      JUMPOUT(0x158BAC);
  }
  return result;
}
