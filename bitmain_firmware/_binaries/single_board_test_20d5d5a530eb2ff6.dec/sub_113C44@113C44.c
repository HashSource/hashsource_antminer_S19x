int __fastcall sub_113C44(int *a1, int a2, int a3)
{
  _DWORD *v3; // r6
  signed int v4; // r4
  int v6; // r7
  int *v7; // r0

  if ( !a1 )
    return -1;
  v3 = (_DWORD *)*a1;
  if ( a3 < 0 )
    v4 = 0;
  else
    v4 = a3 + 1;
  v6 = sub_10C010(*a1);
  if ( v4 >= v6 )
    return -1;
  while ( 1 )
  {
    v7 = (int *)sub_10C01C(v3, v4);
    if ( !sub_EB338(*v7, a2) )
      break;
    if ( ++v4 == v6 )
      return -1;
  }
  return v4;
}
