int sub_39B50()
{
  int v0; // r10
  int result; // r0
  int v2; // r8
  int v3; // r11
  int *v4; // r6
  int v5; // r7
  int v6; // r5
  int v7; // r0
  int *v8; // r3
  int v9; // r4
  int v10; // t1
  int v11; // r0
  int v12; // r1
  int v13; // r3
  int v14; // r3
  int v15; // r3
  int *v16; // [sp+8h] [bp-80Ch]
  char s[2052]; // [sp+10h] [bp-804h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy(s, "\n dump asic nonce number...\n");
    sub_3B6AC(4, s, 0, *(_DWORD *)"");
  }
  v0 = 0;
  v16 = (int *)&unk_B8078;
  do
  {
    result = sub_26C0C(v0);
    if ( result )
    {
      if ( (unsigned int)dword_B308C > 4 )
      {
        snprintf(s, 0x800u, "Chain[%d]:\n", v0);
        sub_3B6AC(4, s, 0, v14);
      }
      result = sub_26A44();
      v2 = 0;
      v3 = result;
      if ( result > 0 )
      {
        v4 = v16;
        v5 = v0 << 18;
        v6 = 0;
        do
        {
          v7 = sub_26A74();
          if ( v7 <= 0 )
          {
            v9 = 0;
          }
          else
          {
            v8 = v4;
            v9 = 0;
            do
            {
              v10 = v8[1];
              ++v8;
              v9 += v10;
            }
            while ( v8 != &dword_B706C[v7 + 1027 + v5] );
          }
          if ( (unsigned int)dword_B308C > 4 )
          {
            snprintf(s, 0x800u, "IC[%03d] = %-10d ", v6, v9);
            sub_3B6AC(4, s, 0, v13);
          }
          v11 = sub_26A54();
          ++v6;
          v2 += v9;
          result = sub_8FA94(v6, v11);
          if ( !v12 && (unsigned int)dword_B308C > 4 )
          {
            strcpy(s, "\n");
            result = sub_3B6AC(4, s, 0, 10);
          }
          v4 += 1024;
          v5 += 1024;
        }
        while ( v6 != v3 );
      }
      if ( (unsigned int)dword_B308C > 4 )
      {
        snprintf(s, 0x800u, "Chain[%d] total nonce number = %d\n", v0, v2);
        result = sub_3B6AC(4, s, 0, v15);
        if ( (unsigned int)dword_B308C > 4 )
        {
          strcpy(s, "\n");
          result = sub_3B6AC(4, s, 0, 10);
        }
      }
    }
    ++v0;
    v16 += 0x40000;
  }
  while ( v0 != 4 );
  return result;
}
