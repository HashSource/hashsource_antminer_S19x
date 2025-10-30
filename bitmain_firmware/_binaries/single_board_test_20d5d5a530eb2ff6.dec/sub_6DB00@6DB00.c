void sub_6DB00()
{
  int v0; // r7
  unsigned int v1; // r5
  int v2; // r6
  int v3; // lr
  int v4; // r0
  int *v5; // r1
  int v6; // r3
  unsigned int v7; // r1
  int v8; // r2
  int v9; // r5
  int v10; // r0
  int *v11; // r3
  int v12; // [sp+4h] [bp-808h] BYREF
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v0 = 0;
  v12 = 0;
  memset(dword_65DE48, 0, sizeof(dword_65DE48));
  sub_6E060(2, &v12);
  if ( v12 )
  {
    if ( v12 < 0 )
    {
      v12 = HIBYTE(v12);
      dword_65DF6C = 1;
      snprintf(s, 0x800u, "HASH_ON_PLUG T9 = 0x%x\n", v12);
      nullsub_8();
      v7 = v12;
      if ( v12 )
      {
        v8 = 0;
        v9 = dword_65DE48[0];
        v10 = 0;
        do
        {
          v11 = &dword_65DE48[18 * v9];
          if ( (v7 & 1) != 0 )
          {
            v11[1] = v10;
            if ( v10 == 1 )
            {
              v11[3] = 2;
              v11[4] = 10;
              v11[5] = 11;
              v11[2] = 3;
            }
            else if ( v10 )
            {
              if ( v10 == 2 )
              {
                v11[3] = 3;
                v11[4] = 12;
                v11[5] = 13;
                v11[2] = 3;
              }
            }
            else
            {
              v11[3] = 1;
              v11[4] = 8;
              v11[5] = 9;
              v11[2] = 3;
            }
            ++v9;
            v8 = 1;
          }
          v7 >>= 1;
          ++v10;
        }
        while ( v7 );
        if ( v8 )
          dword_65DE48[0] = v9;
      }
    }
    else
    {
      dword_65DF6C = 0;
      v12 = (unsigned __int16)v12;
      snprintf(s, 0x800u, "HASH_ON_PLUG V9 = 0x%x\n", (unsigned __int16)v12);
      nullsub_8();
      v1 = v12;
      if ( v12 )
      {
        v2 = dword_65DE48[0];
        v3 = 0;
        do
        {
          v4 = 9 * v2;
          v5 = &dword_65DE48[18 * v2];
          if ( (v1 & 1) != 0 )
          {
            v6 = v5[2];
            v3 = 1;
            ++v2;
            v5[1] = v0;
            v5[2] = v6 + 1;
            dword_65DE48[2 * v4 + 3 + v6] = v0;
          }
          v1 >>= 1;
          ++v0;
        }
        while ( v1 );
        if ( v3 )
          dword_65DE48[0] = v2;
      }
    }
  }
  else
  {
    strcpy(s, "Cannot Find Any Plug In!\r\n");
    nullsub_8();
  }
}
