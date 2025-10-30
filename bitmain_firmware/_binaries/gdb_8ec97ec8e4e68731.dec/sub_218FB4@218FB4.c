int __fastcall sub_218FB4(int a1)
{
  int v2; // r7
  _DWORD *v3; // r0
  _BYTE *v4; // r5
  const char **v5; // r4
  const char *v6; // r6
  const char *v7; // r11
  const char *v8; // t1
  const char *v9; // r0
  int v10; // r7
  void *v11; // r4
  _DWORD *v12; // r8
  int v13; // r0
  int v14; // r0
  int v15; // r10
  int v16; // r0
  const char *v17; // r2
  int v18; // r3
  int v19; // r4
  int v20; // r7
  const char *v21; // r0
  const char *v22; // r2
  int v23; // t1
  int v24; // r3
  bool v25; // cc
  const char ***v26; // r6
  unsigned int v27; // r3
  bool v28; // cc
  int v29; // r3
  int v30; // r0
  const char *v32; // r0
  int v33; // r0
  const char *v34; // [sp+0h] [bp-2Ch]
  const char **v35; // [sp+14h] [bp-18h] BYREF
  _BYTE v36[16]; // [sp+18h] [bp-14h] BYREF

  v2 = 0;
  v3 = (_DWORD *)sub_242F8C(a1);
  v4 = (_BYTE *)*v3;
  sub_243C34(v3);
  v35 = 0;
  sub_25B0DC(&v35, a1);
  v5 = v35;
  if ( v35 )
  {
    v6 = *v35;
    if ( *v35 )
    {
      v7 = 0;
      while ( !strcmp(v6, "-objfile") )
      {
        v7 = v5[1];
        if ( !v7 )
          sub_946E0("Missing objfile name");
        v8 = v5[2];
        v5 += 2;
        v6 = v8;
        v2 += 2;
        if ( !v8 )
          goto LABEL_10;
      }
      if ( !strcmp(v6, "--") )
      {
        ++v2;
      }
      else if ( *v6 == 45 )
      {
        v32 = (const char *)sub_219790(&v35, v2);
        sub_946E0("Unknown option: %s", v32);
      }
    }
    else
    {
      v7 = *v35;
      v2 = (int)*v35;
    }
  }
  else
  {
    v7 = 0;
    v2 = 0;
  }
LABEL_10:
  sub_25689C(v36);
  if ( v35 )
  {
    v9 = v35[v2];
    v10 = v2;
    if ( v9 )
    {
      if ( v35[v10 + 1] )
        sub_946E0("Junk at end of command");
      v11 = (void *)sub_29B910(v9);
      if ( !sub_2568D4(v36, v11, "w") )
        sub_258B04(v11);
      v4 = v36;
      if ( v11 )
        free(v11);
    }
  }
  v12 = *(_DWORD **)(dword_487D2C + 36);
  if ( v12 )
  {
    v13 = -1431655765;
    v34 = "char* gdb_argv::operator[](int)";
    do
    {
      while ( 1 )
      {
        sub_258BD4(v13);
        if ( !v7 )
          break;
        v14 = sub_1B87A8((int)v12);
        v13 = sub_21A6F4(v14, v7);
        if ( v13 )
          break;
LABEL_45:
        v12 = (_DWORD *)*v12;
        if ( !v12 )
          goto LABEL_46;
      }
      v15 = sub_1B7250((int)v12);
      v16 = sub_1B87A8((int)v12);
      sub_25A418(v4, "\nObject file %s:\n\n", v16);
      v18 = v12[10];
      if ( *(_DWORD *)(v18 + 84) )
      {
        v19 = *(_DWORD *)(v18 + 80);
        if ( !*(_DWORD *)v19 )
          goto LABEL_47;
        v20 = 0;
        do
        {
          v24 = *(__int16 *)(v19 + 22);
          v25 = v24 < 0;
          if ( v24 < 0 )
          {
            v26 = 0;
          }
          else
          {
            v26 = (const char ***)v12[42];
            v24 *= 3;
          }
          if ( !v25 )
            v26 += v24;
          v27 = *(_BYTE *)(v19 + 32) & 0xF;
          v28 = v27 > 0xA;
          if ( v27 > 0xA )
            v27 = 63;
          else
            v17 = v34;
          if ( !v28 )
            v27 = (unsigned __int8)v17[v27 + 32];
          sub_25A418(v4, "[%2d] %c ", v20, v27, v34);
          v29 = *(__int16 *)(v19 + 22);
          if ( v29 == -1 )
          {
            sub_94700((int)"symmisc.c", 241, "Section index is uninitialized");
            sub_256514(v36);
            v33 = sub_31DAD0(v35);
            sub_338FFC(v33);
          }
          v30 = sub_25AC8C(v15, *(_DWORD *)(v19 + 8) + *(_DWORD *)(v12[36] + 4 * v29));
          sub_25A6BC(v30, v4);
          sub_25A418(v4, " %s", *(const char **)v19);
          if ( v26 )
          {
            if ( *v26 )
              sub_25A418(v4, " section %s", **v26);
            else
              sub_25A418(v4, " spurious section %ld", -1431655765 * (((int)v26 - v12[42]) >> 2));
          }
          if ( sub_21B790(v19) )
          {
            v21 = (const char *)sub_21B790(v19);
            sub_25A418(v4, "  %s", v21);
          }
          v22 = *(const char **)(v19 + 28);
          if ( v22 )
            sub_25A418(v4, "  %s", v22);
          sub_25A6BC(&word_356638, v4);
          v23 = *(_DWORD *)(v19 + 48);
          v19 += 48;
          ++v20;
        }
        while ( v23 );
        if ( v20 != *(_DWORD *)(v12[10] + 84) )
LABEL_47:
          sub_946B0("internal error:  minimal symbol count %d != %d");
        v13 = sub_25A418(v4, (const char *)&word_356638);
        goto LABEL_45;
      }
      v13 = sub_25A418(v4, "No minimal symbols found.\n");
      v12 = (_DWORD *)*v12;
    }
    while ( v12 );
  }
LABEL_46:
  sub_256514(v36);
  return sub_31DAD0(v35);
}
