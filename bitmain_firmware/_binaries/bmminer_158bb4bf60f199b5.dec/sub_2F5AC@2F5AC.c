void sub_2F5AC()
{
  int v0; // r6
  int i; // r10
  unsigned int v2; // lr
  int v3; // r5
  int v4; // r4
  int v5; // r2
  int v6; // r8
  _DWORD *v7; // r12
  _DWORD *v8; // r3
  int v9; // t1
  char v10; // r8
  int v11; // r3
  char s[2052]; // [sp+18h] [bp-804h] BYREF

  if ( (unsigned int)dword_9E31C > 4 )
  {
    strcpy(s, "\n dump domain nonce number...\n");
    sub_47AB4(4, s, 0);
  }
  v0 = 0;
  for ( i = 0; i != 16; ++i )
  {
    if ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) )
    {
      v2 = dword_9E31C;
      if ( (unsigned int)dword_9E31C > 4 )
      {
        snprintf(s, 0x800u, "Chain[%d]:\n", i);
        sub_47AB4(4, s, 0);
        v2 = dword_9E31C;
      }
      v3 = 0;
      v4 = 0;
      do
      {
        if ( 6 * ((unsigned int)v4 >> 2) <= 0xFFFFFFF9 )
        {
          v6 = 6;
          v5 = 0;
          v7 = &dword_13864C[576 * ((unsigned int)v4 >> 2) + 1263 + 24 * (v4 & 3) + v0];
          do
          {
            v8 = v7;
            do
            {
              v9 = v8[1];
              ++v8;
              v5 += v9;
            }
            while ( v7 + 24 != v8 );
            --v6;
            v7 += 96;
          }
          while ( v6 );
          v3 += v5;
        }
        else
        {
          v5 = 0;
        }
        if ( v2 > 4 )
        {
          v10 = v4 + 1;
          snprintf(s, 0x800u, "D[%02d]:%-10d ", v4, v5);
          sub_47AB4(4, s, 0);
          v2 = dword_9E31C;
          if ( (((_BYTE)v4 + 1) & 3) != 0 )
          {
            ++v4;
          }
          else if ( (unsigned int)dword_9E31C > 4 )
          {
            v11 = v4++ >> 2;
            snprintf(s, 0x800u, "D_BIG[%02d]:%-10d\n", v11, v3);
            v3 = v10 & 3;
            sub_47AB4(4, s, v3);
            v2 = dword_9E31C;
          }
          else
          {
            ++v4;
            v3 = v10 & 3;
          }
        }
        else if ( (++v4 & 3) == 0 )
        {
          v3 = 0;
        }
      }
      while ( v4 != 52 );
      if ( v2 > 4 )
      {
        strcpy(s, "\n");
        sub_47AB4(4, s, 0);
      }
    }
    v0 += 7488;
  }
}
