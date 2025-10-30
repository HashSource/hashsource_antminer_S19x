int __fastcall sub_173CD4(int a1, int a2)
{
  int v3; // r0
  int v4; // r1

  if ( (__int16)a1 == (__int16)a2 )
  {
    v3 = a1 >> 16;
    v4 = a2 >> 16;
    if ( v3 == v4 )
      return 0;
    if ( v3 < v4 )
      return 1;
  }
  else if ( (__int16)a1 < (__int16)a2 )
  {
    return 1;
  }
  return -1;
}
