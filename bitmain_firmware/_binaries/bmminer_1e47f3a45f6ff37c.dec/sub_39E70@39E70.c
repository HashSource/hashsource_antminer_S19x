int sub_39E70()
{
  int i; // r8
  int result; // r0
  int v2; // r7
  int j; // r4
  int v4; // r0
  int v5; // r1
  int v6; // r5
  int v7; // r5
  int v8; // r0
  int v9; // r3
  int v10; // r3
  int v11; // r3
  int v12; // r3
  int v13; // [sp+0h] [bp-80Ch]
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( (unsigned int)dword_B308C > 4 )
  {
    strcpy(s, "\n dump domain nonce number...\n");
    sub_3B6AC(4, s, 0, *(_DWORD *)".\n");
  }
  for ( i = 0; i != 4; ++i )
  {
    result = sub_26C0C(i);
    if ( result )
    {
      if ( (unsigned int)dword_B308C > 4 )
      {
        snprintf(s, 0x800u, "Chain[%d]:\n", i);
        sub_3B6AC(4, s, 0, v12);
      }
      v2 = 0;
      for ( j = 0; ; ++j )
      {
        v6 = sub_26A34();
        v7 = sub_26AA4() * v6;
        result = i;
        if ( j >= v7 )
          break;
        v8 = sub_39D80(i, j);
        v2 += v8;
        if ( (unsigned int)dword_B308C > 4 )
        {
          snprintf(s, 0x800u, "D[%02d]:%-10d ", j, v8);
          sub_3B6AC(4, s, 0, v9);
        }
        v4 = sub_26AA4();
        sub_8FA94(j + 1, v4);
        if ( !v5 )
        {
          if ( (unsigned int)dword_B308C > 4 )
          {
            v10 = j + 3;
            v13 = v2;
            if ( j >= 0 )
              v10 = j;
            v2 = 0;
            snprintf(s, 0x800u, "D_BIG[%02d]:%-10d\n", v10 >> 2, v13);
            sub_3B6AC(4, s, 0, v11);
          }
          else
          {
            v2 = 0;
          }
        }
      }
      if ( (unsigned int)dword_B308C > 4 )
      {
        strcpy(s, "\n");
        result = sub_3B6AC(4, s, 0, 10);
      }
    }
  }
  return result;
}
