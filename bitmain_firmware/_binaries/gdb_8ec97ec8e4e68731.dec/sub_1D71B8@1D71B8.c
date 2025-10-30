_DWORD *__fastcall sub_1D71B8(_DWORD *a1, int *a2)
{
  int *v3; // r4
  int v6; // [sp+4h] [bp-10h]
  int v7; // [sp+8h] [bp-Ch]
  int v8; // [sp+Ch] [bp-8h]

  v3 = (int *)a2[77];
  if ( !v3 )
    v3 = sub_1D4C0C(a2);
  v6 = *v3;
  v7 = v3[1];
  v8 = v3[2];
  do
  {
    if ( !sub_E1948(v3, 1u) )
    {
      *a1 = 12;
      *v3 = v6;
      v3[1] = v7;
      v3[2] = v8;
      return a1;
    }
  }
  while ( !((int (*)(void))loc_E16AC)() );
  if ( !sub_1D4EC8(a2) )
  {
    *a1 = 10;
    return a1;
  }
  *(_QWORD *)a1 = 0x500000001LL;
  return a1;
}
