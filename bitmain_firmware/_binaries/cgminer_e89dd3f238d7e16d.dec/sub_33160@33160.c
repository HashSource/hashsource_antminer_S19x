int __fastcall sub_33160(_BYTE *a1)
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
  if ( !dword_86E0C )
  {
    if ( !dword_90DE0 )
    {
      strcpy(v6, "BENCHFILE Invalid benchfile NULL");
      sub_1DB6C(3, v6, 1);
      sub_4B2A0(1);
    }
    dword_86E0C = fopen64(dword_90DE0, "r");
    if ( !dword_86E0C )
    {
      snprintf(v6, 0x800u, "BENCHFILE Failed to open benchfile '%s'", (const char *)dword_90DE0);
      sub_1DB6C(3, v6, 1);
      sub_4B2A0(1);
    }
    dword_86E10 = 0;
    if ( !fgets(v10, 1024, (FILE *)dword_86E0C) )
    {
      snprintf(v6, 0x800u, "BENCHFILE Failed to read benchfile '%s'", (const char *)dword_90DE0);
      sub_1DB6C(3, v6, 1);
      sub_4B2A0(1);
    }
    v15 = 1;
    dword_86E14 = 0;
  }
  if ( v15 == 1 || fgets(v10, 1024, (FILE *)dword_86E0C) )
  {
    do
    {
      ++dword_86E10;
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
              dword_86E10,
              i,
              5);
            sub_1DB6C(3, v6, 1);
            sub_4B2A0(1);
          }
          v12 = v7[i] - v7[i - 1];
          if ( *((_DWORD *)&unk_85A60 + 2 * i - 2) && v12 != *((_DWORD *)&unk_85A60 + 2 * i - 2) )
          {
            snprintf(
              v6,
              0x800u,
              "BENCHFILE Invalid input file line %d field %d (%s) length is %d but should be %d",
              dword_86E10,
              i,
              *((const char **)&unk_85A60 + 2 * i - 1),
              v12,
              *((_DWORD *)&unk_85A60 + 2 * i - 2));
            sub_1DB6C(3, v6, 1);
            sub_4B2A0(1);
          }
          v2 = (_BYTE *)v7[i];
          v7[i] = v2 + 1;
          *v2 = 0;
        }
        v12 = strlen(s);
        if ( v12 < dword_85A80 )
        {
          snprintf(
            v6,
            0x800u,
            "BENCHFILE Invalid input file line %d field %d (%s) length is %d but should be least %d",
            dword_86E10,
            5,
            off_85A84,
            v12,
            dword_85A80);
          sub_1DB6C(3, v6, 1);
          sub_4B2A0(1);
        }
        sprintf((char *)v9, "0000000%c", *(unsigned __int8 *)v7[0]);
        v13 = strlen((const char *)v9);
        for ( i = dword_85A70 - 8; i >= 0; i -= 8 )
        {
          sprintf((char *)&v9[v13], "%.8s", (const char *)(v7[2] + i));
          v13 += 8;
        }
        for ( i = dword_85A68 - 8; i >= 0; i -= 8 )
        {
          sprintf((char *)&v9[v13], "%.8s", (const char *)(v7[1] + i));
          v13 += 8;
        }
        v11 = atol(s);
        sprintf((char *)&v9[v13], "%08lx", v11);
        v13 += 8;
        strcpy((char *)&v9[v13], (const char *)v7[3]);
        v13 += dword_85A78;
        memset(a1, 0, 0x1C0u);
        sub_1FF0C(a1, v9, v13 >> 1);
        sub_30BB8((int)a1);
        ++dword_86E14;
        return 1;
      }
    }
    while ( fgets(v10, 1024, (FILE *)dword_86E0C) );
    if ( !dword_86E14 )
    {
      snprintf(v6, 0x800u, "BENCHFILE No work in benchfile '%s'", (const char *)dword_90DE0);
      sub_1DB6C(3, v6, 1);
      sub_4B2A0(1);
    }
  }
  else if ( !dword_86E14 )
  {
    snprintf(v6, 0x800u, "BENCHFILE No work in benchfile '%s'", (const char *)dword_90DE0);
    sub_1DB6C(3, v6, 1);
    sub_4B2A0(1);
  }
  fclose((FILE *)dword_86E0C);
  dword_86E0C = 0;
  return sub_33160(a1);
}
