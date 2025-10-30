int __fastcall sub_248BE4(int a1)
{
  const char **v1; // r6
  const char **v2; // r9
  const char *v3; // r1
  const char *v4; // t1
  const char *v5; // r5
  int v6; // r8
  int v7; // r7
  int v8; // r11
  unsigned int v9; // r4
  void *v10; // r0
  int v11; // lr
  int v12; // r3
  int *v13; // r12
  int *v14; // lr
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r0
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r1
  int v25; // r0
  const char **v26; // [sp+14h] [bp-8h] BYREF

  if ( a1 )
  {
    v26 = 0;
    sub_25B0DC(&v26, a1);
    v1 = v26;
    v2 = &v1[sub_31E100(v26)];
    while ( v2 != v1 )
    {
      while ( 1 )
      {
        v4 = *v1++;
        v3 = v4;
        if ( *v4 == 36 )
          break;
        sub_946B0("Name \"%s\" not prefixed with '$', ignoring", v3);
LABEL_5:
        if ( v2 == v1 )
          goto LABEL_16;
      }
      v5 = v3 + 1;
      v6 = dword_48A910;
      if ( !dword_48A910 || (v7 = *(_DWORD *)dword_48A910) == 0 )
      {
LABEL_17:
        sub_946B0("No trace variable named \"$%s\", not deleting", v5);
        goto LABEL_5;
      }
      v8 = dword_48A910;
      v9 = 0;
      while ( strcmp(v5, *(const char **)(v8 + 8)) )
      {
        ++v9;
        v8 += 40;
        if ( v7 == v9 )
          goto LABEL_17;
      }
      sub_1BA720(v6 + 40 * v9 + 8);
      v10 = *(void **)(v6 + 40 * v9 + 8);
      if ( v10 )
        free(v10);
      v11 = dword_48A910;
      if ( *(_DWORD *)dword_48A910 <= v9 )
      {
        sub_94700(
          (int)"tracepoint.c",
          321,
          "%s: Assertion `%s' failed.",
          "void VEC_tsv_s_unordered_remove(VEC_tsv_s*, unsigned int, const char*, unsigned int)",
          "unordered_remove");
        v25 = sub_31DAD0(v26);
        sub_338FFC(v25);
      }
      v12 = *(_DWORD *)dword_48A910 - 1;
      *(_DWORD *)dword_48A910 = v12;
      v13 = (int *)(v11 + 40 * v9 + 8);
      v14 = (int *)(v11 + 40 * v12 + 8);
      v15 = *v14;
      v16 = v14[1];
      v17 = v14[2];
      v18 = v14[3];
      v14 += 4;
      *v13 = v15;
      v13[1] = v16;
      v13[2] = v17;
      v13[3] = v18;
      v13 += 4;
      v19 = *v14;
      v20 = v14[1];
      v21 = v14[2];
      v22 = v14[3];
      v14 += 4;
      *v13 = v19;
      v13[1] = v20;
      v13[2] = v21;
      v13[3] = v22;
      v13 += 4;
      v23 = v14[1];
      *v13 = *v14;
      v13[1] = v23;
    }
LABEL_16:
    sub_243C34();
    return sub_31DAD0(v26);
  }
  else
  {
    if ( sub_25A3E4("Delete all trace state variables? ") )
    {
      if ( dword_48A910 )
        free((void *)dword_48A910);
      dword_48A910 = 0;
    }
    sub_243C34();
    return sub_1BA720(0);
  }
}
