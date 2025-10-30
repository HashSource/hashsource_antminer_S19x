int __fastcall sub_C5C24(_DWORD *a1, unsigned __int8 *a2, int a3, int a4)
{
  int v4; // r6
  int v6; // r1
  int v9; // r3
  int v10; // r3
  int result; // r0
  int v12; // r0

  if ( !a1 )
    return 0;
  v4 = a1[3];
  if ( !v4 )
    return 0;
  v6 = a1[4];
  v9 = a3;
  if ( !v6 )
  {
    v12 = sub_C63F4(a1[3]);
    v9 = a3;
    v6 = v12;
    a1[4] = v12;
    if ( !v12 )
      return 0;
    v4 = a1[3];
  }
  if ( !sub_C88C0(v4, v6, a2, v9, a4) )
    return 0;
  v10 = **(_DWORD **)a1[3] << 30;
  if ( (**(_DWORD **)a1[3] & 2) == 0 )
    v10 = *a2;
  result = 1;
  if ( (**(_DWORD **)a1[3] & 2) == 0 )
    a1[7] = v10 & 0xFFFFFFFE;
  return result;
}
