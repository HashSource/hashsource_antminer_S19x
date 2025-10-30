_DWORD *__fastcall sub_149930(_DWORD *a1)
{
  void *v2; // r6
  unsigned int v3; // r0
  int v4; // r1
  unsigned int v5; // r5

  v2 = a1 + 6;
  a1[1] = 1;
  a1[4] = 1065353216;
  *a1 = a1 + 6;
  a1[2] = 0;
  a1[3] = 0;
  a1[5] = 0;
  a1[6] = 0;
  v3 = sub_33D390(a1 + 4);
  v5 = v3;
  if ( a1[1] < v3 )
  {
    if ( v3 == 1 )
      a1[6] = 0;
    else
      v2 = sub_1243D8(v3, v4);
    *a1 = v2;
    a1[1] = v5;
  }
  return a1;
}
