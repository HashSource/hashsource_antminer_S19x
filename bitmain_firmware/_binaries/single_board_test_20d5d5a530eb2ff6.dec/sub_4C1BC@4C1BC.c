int __fastcall sub_4C1BC(_DWORD *a1, char *a2, int a3)
{
  char *v6; // r1
  unsigned int v7; // r6
  bool v8; // cc
  int result; // r0
  char *v10; // r1
  int v11; // r3
  char *v12; // r2

  memset(a1, 0, 0x4014u);
  a1[4098] = 0x10000;
  if ( a3 <= 3 )
    return 0;
  v6 = &a2[a3];
  if ( a3 > 0x10000 )
    a2 = v6 - 0x10000;
  v7 = (unsigned int)(v6 - 4);
  v8 = a2 > v6 - 4;
  result = v6 - a2;
  v10 = v6 - 0x10000;
  a1[4096] = a2;
  a1[4100] = result;
  a1[4099] = 2;
  if ( !v8 )
  {
    do
    {
      v11 = *(_DWORD *)a2;
      v12 = (char *)(a2 - v10);
      a2 += 3;
      a1[(unsigned int)(-1640531535 * v11) >> 20] = v12;
    }
    while ( (unsigned int)a2 <= v7 );
    return a1[4100];
  }
  return result;
}
