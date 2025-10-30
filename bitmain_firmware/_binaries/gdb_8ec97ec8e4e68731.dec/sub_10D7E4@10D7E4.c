int __fastcall sub_10D7E4(int a1, int a2)
{
  _DWORD *v2; // r12
  _DWORD *v3; // r3

  v2 = (_DWORD *)dword_4872C0;
  if ( !dword_4872C0 )
    return (int)v2;
  while ( 1 )
  {
    v3 = (_DWORD *)v2[10];
    if ( v3 )
      break;
LABEL_8:
    v2 = (_DWORD *)*v2;
    if ( !v2 )
      return (int)v2;
  }
  while ( v3[1] != a1 || v3[2] != a2 )
  {
    v3 = (_DWORD *)*v3;
    if ( !v3 )
      goto LABEL_8;
  }
  return 1;
}
