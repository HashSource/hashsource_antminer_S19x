void __fastcall sub_215E2C(const char *a1, int a2)
{
  void *v4; // r6
  const char *v5; // r0
  int i; // r5
  char *v7; // r0
  bool v8; // zf
  size_t v9; // r0
  char *v10; // r8
  const char *v11; // r11
  char *v12; // r8
  char *v13; // r5
  const char *v14; // r1
  char *v15; // r0
  size_t v16; // r2
  char *v17; // [sp+4h] [bp-8h]

  v4 = sub_9253C((int)nullsub_39, 0);
  sub_243C34(v4);
  sub_FA464();
  sub_21580C();
  if ( !a1 )
  {
    v5 = (const char *)sub_FA624(1);
    a1 = v5;
    for ( i = 0; ; ++i )
    {
      v7 = strpbrk(v5, asc_3E1F80);
      v8 = v7 == 0;
      v5 = v7 + 1;
      if ( v8 )
        break;
    }
    if ( i )
    {
      v9 = strlen(a1);
      v10 = (char *)sub_93028(i + 1 + v9);
      v17 = v10;
      v11 = a1;
      sub_9253C((int)sub_210BE8, (int)v10);
      while ( 1 )
      {
        v13 = strpbrk(a1, asc_3E1F80);
        v14 = v11;
        v15 = v10;
        v16 = v13 - v11;
        if ( !v13 )
          break;
        v12 = &v10[v13 - v11];
        v11 = v13;
        strncpy(v15, v14, v16);
        a1 = v13 + 1;
        *v12 = 92;
        v10 = v12 + 1;
      }
      a1 = v17;
      strcpy(v10, v11);
    }
  }
  sub_22EF24(a1, a2);
  dword_4896D8 = 1;
  sub_92620(v4);
}
