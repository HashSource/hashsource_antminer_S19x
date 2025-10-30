void sub_2F354()
{
  int i; // r8
  unsigned int v1; // r12
  int v2; // r6
  char *v3; // r4
  int v4; // r3
  char *v5; // r0
  int v6; // r2
  int v7; // t1
  unsigned int v8; // r5
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( (unsigned int)dword_9E31C > 4 )
  {
    strcpy(s, "\n dump asic nonce number...\n");
    sub_47AB4(4, s, 0);
  }
  for ( i = 0; i != 16; ++i )
  {
    if ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) )
    {
      v1 = dword_9E31C;
      if ( (unsigned int)dword_9E31C > 4 )
      {
        snprintf(s, 0x800u, "Chain[%d]:\n", i);
        sub_47AB4(4, s, 0);
        v1 = dword_9E31C;
      }
      v2 = 0;
      v3 = (char *)&unk_139A08 + 29952 * i;
      v4 = 0;
      do
      {
        v5 = v3 + 384;
        v6 = 0;
        do
        {
          v7 = *((_DWORD *)v3 + 1);
          v3 += 4;
          v6 += v7;
        }
        while ( v3 != v5 );
        v2 += v6;
        v8 = v4 + 1;
        if ( v1 > 4 )
        {
          snprintf(s, 0x800u, "IC[%03d] = %-10d ", v4, v6);
          sub_47AB4(4, s, 0);
          v1 = dword_9E31C;
          if ( v8 == 6 * (v8 / 6) && (unsigned int)dword_9E31C > 4 )
          {
            strcpy(s, "\n");
            sub_47AB4(4, s, v8 % 6);
            v1 = dword_9E31C;
          }
        }
        v4 = v8;
      }
      while ( v8 != 78 );
      if ( v1 > 4 )
      {
        snprintf(s, 0x800u, "Chain[%d] total nonce number = %d\n", i, v2);
        sub_47AB4(4, s, 0);
        if ( (unsigned int)dword_9E31C > 4 )
        {
          strcpy(s, "\n");
          sub_47AB4(4, s, 0);
        }
      }
    }
  }
}
