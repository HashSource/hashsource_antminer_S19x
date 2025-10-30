int sub_53F6C()
{
  void *v1; // r0
  unsigned int *v2; // r0
  int v3; // r0
  int v4; // r0
  char v6[2051]; // [sp+4h] [bp-818h] BYREF
  char v7; // [sp+807h] [bp-15h] BYREF
  int v8; // [sp+808h] [bp-14h]
  int v9; // [sp+80Ch] [bp-10h]
  int v10; // [sp+810h] [bp-Ch]
  int i; // [sp+814h] [bp-8h]

  if ( dword_535DA0 )
    return 0;
  if ( sub_54800() )
  {
    strcpy(v6, "fpga init failed\n");
    sub_3B6AC(0, v6, 0, (int)v6);
    return -1;
  }
  else if ( sub_56944() )
  {
    strcpy(v6, "gpio init failed\n");
    sub_3B6AC(0, v6, 0, (int)v6);
    return -2;
  }
  else
  {
    v1 = memset(dword_535DA4, 0, sizeof(dword_535DA4));
    v10 = sub_590EC(v1);
    for ( i = 0; i < v10; ++i )
    {
      v9 = sub_58FB4(i);
      if ( v9 >= 0 )
      {
        sub_56DB8(v9);
        sub_57258(v9, 0);
        v8 = sub_59050(i);
        if ( v8 >= 0 )
        {
          sub_56DB8(v8);
          sub_57258(v8, 1);
          v7 = 0;
          sub_57458(v9, &v7);
          if ( v7 == 1 )
          {
            dword_535DA4[18 * dword_535DA4[0] + 1] = i;
            dword_535DA4[18 * dword_535DA4[0] + 3 + dword_535DA4[18 * dword_535DA4[0] + 2]++] = i;
            ++dword_535DA4[0];
          }
          else
          {
            snprintf(v6, 0x800u, "no board pluged in socket %d\n", v9);
            sub_3B6AC(1, v6, 0, (int)v6);
          }
        }
        else
        {
          snprintf(v6, 0x800u, "fail to get reset for chain %d\n", i);
          sub_3B6AC(1, v6, 0, (int)v6);
        }
      }
      else
      {
        snprintf(v6, 0x800u, "fail to get socket for chain %d\n", i);
        sub_3B6AC(1, v6, 0, (int)v6);
      }
    }
    v2 = sub_53ED4(dword_535DA4);
    dword_535DA0 = 1;
    v3 = sub_5657C(v2);
    v4 = sub_5531C(v3);
    sub_579A0(v4);
    return 0;
  }
}
