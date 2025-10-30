int __fastcall sub_10E0BC(_DWORD *a1, int a2, int a3)
{
  signed int v3; // r4
  int v6; // r7
  int *v7; // r0

  if ( !a1 )
    return -1;
  v3 = (a3 + 1) & ~((a3 + 1) >> 31);
  v6 = sub_10C010((int)a1);
  if ( v6 <= v3 )
    return -1;
  while ( 1 )
  {
    v7 = (int *)sub_10C01C(a1, v3);
    if ( !sub_EB338(*v7, a2) )
      break;
    if ( ++v3 == v6 )
      return -1;
  }
  return v3;
}
