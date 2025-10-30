void *__fastcall sub_6DCDC(_DWORD *a1, int a2, int a3)
{
  unsigned int v3; // r12
  void *v4; // r5
  unsigned int v6; // r3
  unsigned int v7; // r12
  unsigned int v10; // r7
  void *v11; // r0

  v3 = a1[2];
  v4 = (void *)a1[4];
  if ( a2 + a1[3] <= v3 )
    return v4;
  v6 = 2 * v3;
  v7 = v3 + a2;
  if ( v6 < v7 )
    v10 = v7;
  else
    v10 = v6;
  v11 = sub_6D500((void *)(4 * v10));
  if ( !v11 )
    return 0;
  a1[2] = v10;
  a1[4] = v11;
  if ( !a3 )
    return v4;
  memcpy(v11, v4, 4 * a1[3]);
  sub_6D518(v4);
  return (void *)a1[4];
}
