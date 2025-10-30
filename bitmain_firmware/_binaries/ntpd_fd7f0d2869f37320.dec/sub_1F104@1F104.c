char *__fastcall sub_1F104(char *result, int a2, int a3)
{
  int v3; // r7
  int v4; // r8
  char *v5; // r9
  size_t v6; // r5
  char *v7; // r11
  bool v8; // zf
  void *v9; // r3
  size_t i; // r4
  const void *v11; // r1
  _BYTE *v12; // lr
  int v13; // r4
  char *v14; // r3
  int v15; // r1
  char *v17; // [sp+4h] [bp-18h]

  if ( a3 )
    v3 = 0;
  v17 = result;
  if ( !a3 )
  {
    result = (_BYTE *)(&dword_0 + 1);
    dword_BA6A0 = 1;
    if ( dword_BA6BC )
    {
      v12 = (_BYTE *)dword_BA498;
      v13 = dword_BA6C0;
      result = (char *)++dword_BA498;
      *v12 = 44;
      dword_BA6C0 = v13 + 1;
      if ( a2 )
      {
        v14 = v17;
        result = &v17[8 * a2];
        do
        {
          v15 = *((_DWORD *)v14 + 1);
          v14 += 8;
          a3 += v15;
        }
        while ( v14 != result );
      }
      else
      {
        a3 = 0;
      }
      if ( (unsigned int)(v13 + 2 + a3) <= 0x47 )
      {
        v12[1] = 32;
        v3 = 3;
        dword_BA6C0 = v13 + 2;
        dword_BA498 = (int)(v12 + 2);
      }
      else
      {
        result = v12 + 3;
        v12[1] = 13;
        v3 = 3;
        dword_BA498 = (int)(v12 + 3);
        dword_BA6C0 = 0;
        v12[2] = 10;
      }
    }
    else
    {
      v3 = 3;
    }
  }
  if ( a2 )
  {
    v4 = 0;
    v5 = v17;
    do
    {
      v6 = *((_DWORD *)v5 + 1);
      v7 = *(char **)&v17[8 * v4];
      v8 = v7 == 0;
      if ( v7 )
        v8 = v6 == 0;
      if ( !v8 )
      {
        v9 = (void *)dword_BA498;
        for ( i = dword_BA6C4 - dword_BA498; v6 + v3 > dword_BA6C4 - dword_BA498; i = dword_BA6C4 - dword_BA498 )
        {
          v11 = v7;
          if ( i >= v6 )
            i = v6;
          v6 -= i;
          v7 += i;
          dword_BA498 = (int)memcpy(v9, v11, i) + i;
          dword_BA6C0 += i;
          sub_1EDD4(32);
          v9 = (void *)dword_BA498;
        }
        result = (char *)memcpy(v9, v7, v6);
        dword_BA6BC = 1;
        dword_BA498 = (int)&result[v6];
        dword_BA6C0 += v6;
      }
      ++v4;
      v5 += 8;
    }
    while ( v4 != a2 );
  }
  return result;
}
