int __fastcall sub_341F4(_BYTE *a1)
{
  char *v1; // r0
  _BYTE *v2; // r2
  char v6[44]; // [sp+18h] [bp-102Ch] BYREF
  _DWORD v7[4]; // [sp+818h] [bp-82Ch]
  char *s; // [sp+828h] [bp-81Ch]
  unsigned __int8 v9[8]; // [sp+82Ch] [bp-818h] BYREF
  char v10[8]; // [sp+C2Ch] [bp-418h] BYREF
  int v11; // [sp+102Ch] [bp-18h]
  signed int v12; // [sp+1030h] [bp-14h]
  signed int v13; // [sp+1034h] [bp-10h]
  int i; // [sp+1038h] [bp-Ch]
  char v15; // [sp+103Fh] [bp-5h]

  v15 = 0;
  if ( !dword_87FA4 )
  {
    if ( !dword_91F78 )
    {
      strcpy(v6, "BENCHFILE Invalid benchfile NULL");
      sub_1E4EC(3, v6, 1);
      sub_4BFB0(1);
    }
    dword_87FA4 = fopen64(dword_91F78, "r");
    if ( !dword_87FA4 )
    {
      snprintf(v6, 0x800u, "BENCHFILE Failed to open benchfile '%s'", (const char *)dword_91F78);
      sub_1E4EC(3, v6, 1);
      sub_4BFB0(1);
    }
    dword_87FA8 = 0;
    if ( !fgets(v10, 1024, (FILE *)dword_87FA4) )
    {
      snprintf(v6, 0x800u, "BENCHFILE Failed to read benchfile '%s'", (const char *)dword_91F78);
      sub_1E4EC(3, v6, 1);
      sub_4BFB0(1);
    }
    v15 = 1;
    dword_87FAC = 0;
  }
  if ( v15 == 1 || fgets(v10, 1024, (FILE *)dword_87FA4) )
  {
    do
    {
      ++dword_87FA8;
      if ( v10[0] && v10[0] != 35 && v10[0] != 47 )
      {
        v7[0] = v10;
        for ( i = 1; i <= 4; ++i )
        {
          v1 = strchr((const char *)v7[i - 1], 44);
          v7[i] = v1;
          if ( !v7[i] )
          {
            snprintf(
              v6,
              0x800u,
              "BENCHFILE Invalid input file line %d - field count is %d but should be %d",
              dword_87FA8,
              i,
              5);
            sub_1E4EC(3, v6, 1);
            sub_4BFB0(1);
          }
          v12 = v7[i] - v7[i - 1];
          if ( *((_DWORD *)&unk_86BF8 + 2 * i - 2) && *((_DWORD *)&unk_86BF8 + 2 * i - 2) != v12 )
          {
            snprintf(
              v6,
              0x800u,
              "BENCHFILE Invalid input file line %d field %d (%s) length is %d but should be %d",
              dword_87FA8,
              i,
              *((const char **)&unk_86BF8 + 2 * i - 1),
              v12,
              *((_DWORD *)&unk_86BF8 + 2 * i - 2));
            sub_1E4EC(3, v6, 1);
            sub_4BFB0(1);
          }
          v2 = (_BYTE *)v7[i];
          v7[i] = v2 + 1;
          *v2 = 0;
        }
        v12 = strlen(s);
        if ( dword_86C18 > v12 )
        {
          snprintf(
            v6,
            0x800u,
            "BENCHFILE Invalid input file line %d field %d (%s) length is %d but should be least %d",
            dword_87FA8,
            5,
            off_86C1C,
            v12,
            dword_86C18);
          sub_1E4EC(3, v6, 1);
          sub_4BFB0(1);
        }
        sprintf((char *)v9, "0000000%c", *(unsigned __int8 *)v7[0]);
        v13 = strlen((const char *)v9);
        for ( i = dword_86C08 - 8; i >= 0; i -= 8 )
        {
          sprintf((char *)&v9[v13], "%.8s", (const char *)(v7[2] + i));
          v13 += 8;
        }
        for ( i = dword_86C00 - 8; i >= 0; i -= 8 )
        {
          sprintf((char *)&v9[v13], "%.8s", (const char *)(v7[1] + i));
          v13 += 8;
        }
        v11 = atol(s);
        sprintf((char *)&v9[v13], "%08lx", v11);
        v13 += 8;
        strcpy((char *)&v9[v13], (const char *)v7[3]);
        v13 += dword_86C10;
        memset(a1, 0, 0x1C0u);
        sub_207E8(a1, v9, v13 >> 1);
        sub_31CF4((int)a1);
        ++dword_87FAC;
        return 1;
      }
    }
    while ( fgets(v10, 1024, (FILE *)dword_87FA4) );
    if ( !dword_87FAC )
    {
      snprintf(v6, 0x800u, "BENCHFILE No work in benchfile '%s'", (const char *)dword_91F78);
      sub_1E4EC(3, v6, 1);
      sub_4BFB0(1);
    }
  }
  else if ( !dword_87FAC )
  {
    snprintf(v6, 0x800u, "BENCHFILE No work in benchfile '%s'", (const char *)dword_91F78);
    sub_1E4EC(3, v6, 1);
    sub_4BFB0(1);
  }
  fclose((FILE *)dword_87FA4);
  dword_87FA4 = 0;
  return sub_341F4(a1);
}
