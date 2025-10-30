unsigned int __fastcall sub_3298E8(int a1, int a2)
{
  int v2; // r2
  unsigned int v4; // r4
  _DWORD *v5; // r12
  int v6; // r3
  int v7; // lr
  int v8; // r5
  int v9; // t1
  _BOOL4 v10; // r2
  unsigned int v11; // r3
  bool v12; // zf

  if ( (*(_BYTE *)(a1 + 8) & 0x70) == 0 )
  {
    v2 = *(_DWORD *)a1;
    if ( *(int *)a1 <= 10 && !*(_DWORD *)(a1 + 4) )
    {
      if ( (*(_BYTE *)(a1 + 8) & 0x80) == 0 )
        goto LABEL_6;
      v12 = *(unsigned __int16 *)(a1 + 10) == 0;
      if ( !*(_WORD *)(a1 + 10) )
        v12 = v2 == 1;
      if ( v12 )
      {
LABEL_6:
        v4 = *(unsigned __int16 *)(a1 + 10) / 0xAu;
        if ( v2 <= 3 )
          goto LABEL_12;
        v5 = dword_438D00;
        v6 = a1 + 10;
        v7 = 3;
        do
        {
          v8 = v5[2];
          v7 += 3;
          v9 = *(unsigned __int16 *)(v6 + 2);
          v6 += 2;
          v5 += 3;
          v4 += v8 * v9;
        }
        while ( v2 > v7 );
        if ( v4 <= 0x19999999 )
        {
LABEL_12:
          v10 = v4 == 429496729;
          v11 = *(unsigned __int16 *)(a1 + 10) % 0xAu;
          if ( v11 <= 5 )
            v10 = 0;
          if ( !v10 )
            return 10 * v4 + v11;
        }
      }
    }
  }
  sub_3313E4(a2);
  return 0;
}
