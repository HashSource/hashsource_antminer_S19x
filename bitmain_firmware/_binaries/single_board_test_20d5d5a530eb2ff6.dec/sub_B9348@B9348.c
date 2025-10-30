bool __fastcall sub_B9348(int *a1, int a2, int a3, _DWORD *a4, int a5)
{
  _DWORD *v10; // r8
  int v11; // r4

  if ( *(_DWORD *)(a3 + 4) + *(_DWORD *)(a2 + 4) > 2 * a4[7] )
    return 0;
  sub_130BC0(a5);
  v10 = (_DWORD *)sub_130CCC(a5);
  if ( !v10 )
    goto LABEL_6;
  if ( a2 == a3 )
  {
    if ( !sub_BAABC() )
      goto LABEL_6;
  }
  else if ( !sub_B9F40() )
  {
LABEL_6:
    sub_130C74(a5);
    return 0;
  }
  v11 = sub_B8E64(a1, v10, a4);
  sub_130C74(a5);
  return v11 != 0;
}
