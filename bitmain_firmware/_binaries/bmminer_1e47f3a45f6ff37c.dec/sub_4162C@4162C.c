char *sub_4162C()
{
  int v0; // r1
  int v1; // r2
  int v2; // r3
  char *result; // r0
  unsigned int v4; // r3
  char *v5; // r6
  unsigned int v6; // r7
  _DWORD *v7; // r5
  unsigned int v8; // r4
  int v9; // t1
  char v10[296]; // [sp+4h] [bp-128h] BYREF

  sub_54464(v10);
  result = sub_40728(v10, v0, v1, v2);
  v4 = *(_DWORD *)v10;
  if ( *(_DWORD *)v10 )
  {
    v5 = v10;
    v6 = 0;
    do
    {
      if ( *((_DWORD *)v5 + 2) )
      {
        v7 = v5 + 8;
        v8 = 0;
        do
        {
          v9 = v7[1];
          ++v7;
          result = (char *)sub_26B64(v9, 1);
          ++v8;
        }
        while ( v8 < *((_DWORD *)v5 + 2) );
        v4 = *(_DWORD *)v10;
      }
      ++v6;
      v5 += 72;
    }
    while ( v6 < v4 );
  }
  return result;
}
