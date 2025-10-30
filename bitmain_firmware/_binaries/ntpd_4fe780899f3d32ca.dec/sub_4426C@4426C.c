void __fastcall sub_4426C(int a1, int a2)
{
  int **v2; // r5
  int *v3; // r4
  int v5; // r0
  int *v6; // r1
  int *v7; // r3
  int v8; // r2
  bool v9; // zf
  const char *v10; // r2

  v2 = *(int ***)(a2 + 84);
  v3 = *v2;
  if ( !*v2 )
    return;
  if ( v3[2] != a2 )
  {
    if ( v2[7] == (int *)-1 )
    {
      v5 = v3[34];
      if ( v5 == -1 )
        goto LABEL_5;
    }
    else
    {
      sub_18E64((int)(v2 + 2));
      v5 = v3[34];
      v2[7] = (int *)-1;
      if ( v5 == -1 )
        goto LABEL_5;
    }
    close(v5);
  }
LABEL_5:
  v9 = v3[1]-- == 1;
  if ( v9 )
  {
    v6 = &dword_BCD5C;
    v7 = (int *)dword_BCD5C;
    while ( v7 )
    {
      v8 = *v7;
      v9 = v3 == v7;
      if ( v3 != v7 )
        v6 = v7;
      v7 = (int *)*v7;
      if ( v9 )
        *v6 = v8;
    }
    free((void *)v3[5]);
    free((void *)v3[6]);
    free(v3);
  }
  *v2 = 0;
  if ( (ntp_syslogmask & 0x100) != 0 )
  {
    v10 = (const char *)sub_6A3FC(a2 + 16);
    sub_64E00(5, "%s: shutdown", v10);
  }
}
