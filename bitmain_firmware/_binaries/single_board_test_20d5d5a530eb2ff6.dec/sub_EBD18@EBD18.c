int __fastcall sub_EBD18(int a1, int a2, int a3)
{
  int v3; // r4
  int v5; // r5
  _DWORD *v6; // r0

  if ( !a1 )
    return -1;
  if ( a3 < 0 )
    v3 = 0;
  else
    v3 = a3 + 1;
  v5 = *(_DWORD *)(a1 + 16);
  while ( 1 )
  {
    if ( v3 >= sub_10C010(v5, a2, a3) )
      return -1;
    v6 = (_DWORD *)sub_10C01C(v5, v3);
    if ( !sub_EC59C(a2, *v6) )
      break;
    ++v3;
  }
  return v3;
}
