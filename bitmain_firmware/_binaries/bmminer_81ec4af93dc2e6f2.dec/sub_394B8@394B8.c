int sub_394B8()
{
  int v0; // r7
  int i; // r6
  int result; // r0
  int v3; // r10
  int v4; // r8
  int v5; // r4
  int v6; // r0
  int v7; // r2
  char *v8; // r3
  char *v9; // r0
  int v10; // t1
  int v11; // r0
  int v12; // r1
  int v13; // r3
  int v14; // r3
  int v15; // r3
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(s, "\n dump asic nonce number...\n");
    sub_3AF5C(4, s, 0, *(_DWORD *)"");
  }
  v0 = 0;
  for ( i = 0; i != 4; ++i )
  {
    result = sub_266F0(i);
    if ( result )
    {
      if ( (unsigned int)off_AFC24 > 4 )
      {
        snprintf(s, 0x800u, "Chain[%d]:\n", i);
        sub_3AF5C(4, s, 0, v15);
      }
      result = sub_26540();
      v3 = result;
      v4 = 0;
      if ( result > 0 )
      {
        v5 = 0;
        do
        {
          v6 = sub_26570();
          if ( v6 > 0 )
          {
            v7 = 0;
            v8 = (char *)&unk_B5304 + 4096 * (v5 + v0);
            v9 = (char *)&unk_B5304 + 4096 * (v5 + v0) + 4 * v6;
            do
            {
              v10 = *((_DWORD *)v8 + 1);
              v8 += 4;
              v7 += v10;
            }
            while ( v8 != v9 );
            v4 += v7;
          }
          else
          {
            v7 = 0;
          }
          if ( (unsigned int)off_AFC24 > 4 )
          {
            snprintf(s, 0x800u, "IC[%03d] = %-10d ", v5, v7);
            sub_3AF5C(4, s, 0, v14);
          }
          ++v5;
          v11 = sub_26550();
          result = sub_8C724(v5, v11);
          if ( !v12 && (unsigned int)off_AFC24 > 4 )
          {
            strcpy(s, "\n");
            result = sub_3AF5C(4, s, 0, 10);
          }
        }
        while ( v5 != v3 );
      }
      if ( (unsigned int)off_AFC24 > 4 )
      {
        snprintf(s, 0x800u, "Chain[%d] total nonce number = %d\n", i, v4);
        result = sub_3AF5C(4, s, 0, v13);
        if ( (unsigned int)off_AFC24 > 4 )
        {
          strcpy(s, "\n");
          result = sub_3AF5C(4, s, 0, 10);
        }
      }
    }
    v0 += 256;
  }
  return result;
}
