unsigned int sub_312D8()
{
  int v0; // lr
  _DWORD *v1; // r3
  unsigned int result; // r0
  int v3; // t1
  _DWORD *v4; // r12
  unsigned int v5; // r2
  unsigned int v6; // r1
  unsigned int v7; // t1

  v0 = dword_A0D68;
  if ( dword_9C294 == 2 )
  {
    result = *(unsigned __int16 *)(dword_A0D68 + 12979);
    if ( result < 0x32 )
      return 50;
  }
  else
  {
    v1 = &unk_1371C4;
    result = 50;
    do
    {
      v3 = *(_DWORD *)(v0 + 4);
      v0 += 4;
      v4 = v1 + 78;
      if ( v3 == 1 )
      {
        v5 = 0;
        do
        {
          v7 = v1[1];
          ++v1;
          v6 = v7;
          if ( v5 < v7 )
            v5 = v6;
        }
        while ( v1 != v4 );
        if ( result < v5 )
          result = v5;
      }
      v1 = v4;
    }
    while ( v4 != (_DWORD *)&unk_138544 );
  }
  return result;
}
