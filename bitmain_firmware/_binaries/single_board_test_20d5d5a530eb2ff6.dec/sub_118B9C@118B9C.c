int __fastcall sub_118B9C(int *a1, __int16 a2, _DWORD *a3)
{
  int *v3; // r0
  int *v4; // r5
  _DWORD *v5; // r4
  int v7; // r0

  v3 = sub_118844(a1, a2, a3);
  if ( !v3 )
    return 0;
  v4 = v3;
  v5 = (_DWORD *)v3[1];
  if ( !v5 )
    return 0;
  if ( *v5 == 1 )
  {
    if ( v5[1] )
      return 0;
  }
  else if ( *v5 )
  {
    if ( v5[1] )
    {
LABEL_8:
      *v5 = 0;
      return 1;
    }
  }
  else if ( v5[1] )
  {
    return 1;
  }
  v7 = sub_B23B0();
  v5[1] = v7;
  if ( v7 )
  {
    v5 = (_DWORD *)v4[1];
    goto LABEL_8;
  }
  return 0;
}
