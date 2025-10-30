int __fastcall sub_2EA28(_BYTE *a1)
{
  char *v2; // r4
  bool v3; // r4
  int v4; // r5
  FILE *v6; // r2
  char *v7; // r0
  char **v8; // r9
  int v9; // r11
  char *v10; // r0
  int v11; // r1
  int v12; // r12
  char *v13; // lr
  int v14; // r11
  char *v15; // r12
  _BOOL4 v16; // r2
  size_t v17; // r0
  size_t v18; // r10
  char *v19; // r9
  const char *v20; // r5
  const char *v21; // r6
  const char *v22; // r2
  char *v23; // r9
  const char *v24; // r5
  const char *v25; // r6
  const char *v26; // r2
  int v27; // r0
  const char *nptr; // [sp+14h] [bp-C20h]
  char *v29; // [sp+1Ch] [bp-C18h] BYREF
  int v30; // [sp+20h] [bp-C14h]
  int v31; // [sp+24h] [bp-C10h]
  char *src; // [sp+28h] [bp-C0Ch]
  char *v33; // [sp+2Ch] [bp-C08h]
  char s[1024]; // [sp+30h] [bp-C04h] BYREF
  char v35[2052]; // [sp+430h] [bp-804h] BYREF

  if ( !dword_69000 )
  {
    if ( !dword_766C0 )
    {
      strcpy(v35, "BENCHFILE Invalid benchfile NULL");
      sub_20F58(3, v35, 1);
      sub_2E6B0(1, 1);
    }
    v6 = (FILE *)fopen64(dword_766C0, "r");
    dword_69000 = (int)v6;
    if ( v6 )
    {
      dword_69004 = 0;
      if ( !fgets(s, 1024, v6) )
      {
        snprintf(v35, 0x800u, "BENCHFILE Failed to read benchfile '%s'", dword_766C0);
        goto LABEL_13;
      }
      dword_69008 = 0;
      while ( 1 )
      {
LABEL_3:
        v3 = s[0] != 35;
        if ( !s[0] )
          v3 = 0;
        v4 = dword_69004 + 1;
        v2 = (char *)(s[0] != 47 && v3);
        ++dword_69004;
        if ( v2 )
          break;
        if ( !fgets(s, 1024, (FILE *)dword_69000) )
          goto LABEL_10;
      }
      v7 = s;
      v8 = &v29;
      v9 = 0;
      v29 = s;
      do
      {
        v10 = strchr(v7, 44);
        v8[1] = v10;
        v11 = v9 + 1;
        if ( !v10 )
        {
          snprintf(
            v35,
            0x800u,
            "BENCHFILE Invalid input file line %d - field count is %d but should be %d",
            v4,
            v9 + 1,
            5);
          goto LABEL_13;
        }
        v12 = (int)*v8++;
        v13 = (char *)dword_4EABC[2 * v9];
        v14 = 8 * v9;
        v15 = &v10[-v12];
        v16 = v13 != v15;
        if ( !v13 )
          v16 = 0;
        if ( v16 )
        {
          snprintf(
            v35,
            0x800u,
            "BENCHFILE Invalid input file line %d field %d (%s) length is %d but should be %d",
            v4,
            v11,
            *(const char **)&aJsonEscape[v14 + 160],
            v15,
            v13);
          goto LABEL_13;
        }
        *v10 = 0;
        v7 = v10 + 1;
        v9 = v11;
        *v8 = v7;
      }
      while ( v11 != 4 );
      nptr = v33;
      v17 = strlen(v33);
      if ( v17 > 9 )
      {
        sprintf(v35, "0000000%c", (unsigned __int8)*v29);
        v18 = strlen(v35);
        v19 = &v35[v18];
        v20 = (const char *)(v31 + 56);
        v21 = (const char *)(v31 - 8);
        do
        {
          v22 = v20;
          v20 -= 8;
          sprintf(v19, "%.8s", v22);
          v19 += 8;
        }
        while ( v21 != v20 );
        v23 = &v35[v18 + 64];
        v24 = (const char *)(v30 + 56);
        v25 = (const char *)(v30 - 8);
        do
        {
          v26 = v24;
          v24 -= 8;
          sprintf(v23, "%.8s", v26);
          v23 += 8;
        }
        while ( v25 != v24 );
        v27 = strtol(nptr, 0, 10);
        sprintf(&v35[v18 + 128], "%08lx", v27);
        strcpy(&v35[v18 + 136], src);
        memset(a1, 0, 0x1C0u);
        sub_22CD8(a1, (unsigned __int8 *)v35, (int)(v18 + 144) >> 1);
        sub_2B3A4((int)a1);
        ++dword_69008;
        return (int)v2;
      }
      snprintf(
        v35,
        0x800u,
        "BENCHFILE Invalid input file line %d field %d (%s) length is %d but should be least %d",
        v4,
        5,
        "NonceTime",
        v17,
        10);
    }
    else
    {
      snprintf(v35, 0x800u, "BENCHFILE Failed to open benchfile '%s'", dword_766C0);
    }
LABEL_13:
    sub_20F58(3, v35, 1);
    sub_2E6B0(1, 1);
  }
  v2 = fgets(s, 1024, (FILE *)dword_69000);
  if ( v2 )
    goto LABEL_3;
LABEL_10:
  if ( !dword_69008 )
  {
    snprintf(v35, 0x800u, "BENCHFILE No work in benchfile '%s'", dword_766C0);
    goto LABEL_13;
  }
  fclose((FILE *)dword_69000);
  dword_69000 = (int)v2;
  return sub_2EA28(a1);
}
