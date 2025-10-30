int __fastcall sub_19948(unsigned int *a1, unsigned int *a2)
{
  bool v2; // zf
  unsigned int v3; // lr
  unsigned int v4; // r2
  unsigned int v5; // r0

  v2 = a1 == 0;
  if ( a1 )
    v2 = a2 == 0;
  if ( v2 )
    sub_10C38();
  v3 = a1[1];
  if ( v3 > 0x3B9AC9FF || (v4 = a2[1], v4 > 0x3B9AC9FF) )
    sub_10C38();
  v5 = *a1;
  if ( v5 < *a2 )
    return -1;
  if ( v5 > *a2 )
    return 1;
  if ( v3 < v4 )
    return -1;
  else
    return v3 > v4;
}
