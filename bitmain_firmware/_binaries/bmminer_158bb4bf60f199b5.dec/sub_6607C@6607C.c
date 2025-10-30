void sub_6607C()
{
  unsigned int v0; // r0
  int v1; // r12
  int v2; // r1
  int v3; // lr
  int v4; // r3
  int *v5; // r2
  int v6; // r5
  unsigned int v7; // r2
  int v8; // r0
  int *v9; // r3
  int v10; // [sp+4h] [bp-808h] BYREF
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  v10 = 0;
  memset(dword_1B0D38, 0, sizeof(dword_1B0D38));
  sub_6688C(2, &v10);
  if ( !v10 )
  {
    strcpy(s, "Cannot Find Any Plug In!\r\n");
    sub_47AB4(0, s, 0);
    return;
  }
  if ( v10 < 0 )
  {
    v10 = HIBYTE(v10);
    dword_1B0E5C = 1;
    snprintf(s, 0x800u, "HASH_ON_PLUG T9 = 0x%x\n", v10);
    sub_47AB4(2, s, 0);
    v7 = v10;
    if ( !v10 )
      return;
    v1 = dword_1B0D38[0];
    v2 = 0;
    v8 = 0;
    do
    {
      v9 = &dword_1B0D38[18 * v1];
      if ( (v7 & 1) != 0 )
      {
        v9[1] = v8;
        if ( v8 == 1 )
        {
          v9[3] = 2;
          v9[4] = 10;
          v9[5] = 11;
          v9[2] = 3;
        }
        else if ( v8 )
        {
          if ( v8 == 2 )
          {
            v9[3] = 3;
            v9[4] = 12;
            v9[5] = 13;
            v9[2] = 3;
          }
        }
        else
        {
          v9[3] = 1;
          v9[4] = 8;
          v9[5] = 9;
          v9[2] = 3;
        }
        ++v1;
        v2 = 1;
      }
      v7 >>= 1;
      ++v8;
    }
    while ( v7 );
  }
  else
  {
    dword_1B0E5C = 0;
    v10 = (unsigned __int16)v10;
    snprintf(s, 0x800u, "HASH_ON_PLUG V9 = 0x%x\n", (unsigned __int16)v10);
    sub_47AB4(2, s, 0);
    v0 = v10;
    if ( !v10 )
      return;
    v1 = dword_1B0D38[0];
    v2 = 0;
    v3 = 0;
    do
    {
      v4 = 9 * v1;
      v5 = &dword_1B0D38[18 * v1];
      if ( (v0 & 1) != 0 )
      {
        v6 = v5[2];
        v2 = 1;
        ++v1;
        v5[1] = v3;
        v5[2] = v6 + 1;
        dword_1B0D38[2 * v4 + 3 + v6] = v3;
      }
      v0 >>= 1;
      ++v3;
    }
    while ( v0 );
  }
  if ( v2 )
    dword_1B0D38[0] = v1;
}
