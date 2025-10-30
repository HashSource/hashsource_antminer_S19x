int __fastcall sub_246238(int a1, int a2)
{
  int v3; // r2
  size_t v5; // r0
  int v6; // r2
  int v7; // r2
  int v8; // r2
  int v9; // r2
  int v10; // r2
  int v11; // r2
  __int64 v12; // r0
  int v13; // r3
  __int64 v14; // r0
  int v15; // r3
  int v16; // r6
  size_t v17; // r0
  const char *v18; // r4
  size_t v19; // r0
  FILE *v21; // r6
  char *v22; // r0
  FILE *v23; // r6
  char *v24; // r0
  _DWORD savedregs[6]; // [sp+0h] [bp-14h] BYREF

  if ( *(_DWORD *)(a2 + 8) )
    v3 = 49;
  else
    v3 = 48;
  fprintf(*(FILE **)(a1 + 4), "status %c;%s", v3, off_46DCF8[*(_DWORD *)(a2 + 12)]);
  if ( (*(_DWORD *)(a2 + 12) & 0xFFFFFFFB) == 2 )
  {
    v5 = strlen(*(const char **)(a2 + 20));
    sub_99420(*(_DWORD *)(a2 + 20), savedregs, v5);
    fprintf(*(FILE **)(a1 + 4), ":%s", (const char *)savedregs);
  }
  fprintf(*(FILE **)(a1 + 4), ":%x", *(_DWORD *)(a2 + 16));
  v6 = *(_DWORD *)(a2 + 24);
  if ( v6 >= 0 )
    fprintf(*(FILE **)(a1 + 4), ";tframes:%x", v6);
  v7 = *(_DWORD *)(a2 + 28);
  if ( v7 >= 0 )
    fprintf(*(FILE **)(a1 + 4), ";tcreated:%x", v7);
  v8 = *(_DWORD *)(a2 + 36);
  if ( v8 >= 0 )
    fprintf(*(FILE **)(a1 + 4), ";tfree:%x", v8);
  v9 = *(_DWORD *)(a2 + 32);
  if ( v9 >= 0 )
    fprintf(*(FILE **)(a1 + 4), ";tsize:%x", v9);
  v10 = *(_DWORD *)(a2 + 40);
  if ( v10 )
  {
    fprintf(*(FILE **)(a1 + 4), ";disconn:%x", v10);
    v11 = *(_DWORD *)(a2 + 44);
    if ( !v11 )
    {
LABEL_16:
      v12 = *(_QWORD *)(a2 + 56);
      v13 = v12 | HIDWORD(v12);
      if ( !v12 )
        goto LABEL_17;
LABEL_25:
      v21 = *(FILE **)(a1 + 4);
      v22 = sub_989F0(v12, SHIDWORD(v12), 8, v13);
      fprintf(v21, ";starttime:%s", v22);
      v14 = *(_QWORD *)(a2 + 64);
      v15 = v14 | HIDWORD(v14);
      if ( !v14 )
        goto LABEL_18;
      goto LABEL_26;
    }
  }
  else
  {
    v11 = *(_DWORD *)(a2 + 44);
    if ( !v11 )
      goto LABEL_16;
  }
  fprintf(*(FILE **)(a1 + 4), ";circular:%x", v11);
  v12 = *(_QWORD *)(a2 + 56);
  v13 = v12 | HIDWORD(v12);
  if ( v12 )
    goto LABEL_25;
LABEL_17:
  v14 = *(_QWORD *)(a2 + 64);
  v15 = v14 | HIDWORD(v14);
  if ( !v14 )
    goto LABEL_18;
LABEL_26:
  v23 = *(FILE **)(a1 + 4);
  v24 = sub_989F0(v14, SHIDWORD(v14), 8, v15);
  fprintf(v23, ";stoptime:%s", v24);
LABEL_18:
  v16 = *(_DWORD *)(a2 + 52);
  if ( v16 )
  {
    v17 = strlen(*(const char **)(a2 + 52));
    sub_99420(v16, savedregs, v17);
    fprintf(*(FILE **)(a1 + 4), ";notes:%s", (const char *)savedregs);
  }
  v18 = *(const char **)(a2 + 48);
  if ( v18 )
  {
    v19 = strlen(v18);
    sub_99420((int)v18, savedregs, v19);
    fprintf(*(FILE **)(a1 + 4), ";username:%s", (const char *)savedregs);
  }
  return fputc(10, *(FILE **)(a1 + 4));
}
