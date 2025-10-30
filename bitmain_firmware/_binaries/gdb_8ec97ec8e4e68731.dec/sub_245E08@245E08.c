int __fastcall sub_245E08(int a1, int a2, int a3, int a4)
{
  FILE *v6; // r7
  int v7; // r8
  char *v8; // r0
  int v9; // lr
  const char *v10; // r7
  FILE *v11; // r5
  size_t v12; // r0
  unsigned int *v13; // r3
  unsigned int v14; // r5
  FILE *v15; // r7
  const char *v16; // r9
  int v17; // r8
  char *v18; // r0
  unsigned int *v19; // r3
  unsigned int v20; // r5
  FILE *v21; // r7
  const char *v22; // r9
  int v23; // r8
  char *v24; // r0
  int v25; // r7
  __int64 v26; // r2
  unsigned int *v27; // r1
  unsigned int v28; // r5
  unsigned int v29; // r0
  FILE *v30; // r5
  char *v31; // r6
  __int64 v32; // r0
  int v33; // r4
  int v34; // r3
  char *v35; // r0
  char v37[2004]; // [sp+10h] [bp-7D4h] BYREF

  v6 = *(FILE **)(a1 + 4);
  v7 = *(_DWORD *)a2;
  v8 = sub_989F0(*(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 12), 8, a4);
  if ( *(_DWORD *)(a2 + 16) )
    v9 = 69;
  else
    v9 = 68;
  fprintf(v6, "tp T%x:%s:%c:%x:%x", v7, v8, v9, *(_DWORD *)(a2 + 20), *(_DWORD *)(a2 + 24));
  if ( *(_DWORD *)(a2 + 4) == 28 )
    fprintf(*(FILE **)(a1 + 4), ":F%x", *(_DWORD *)(a2 + 28));
  v10 = *(const char **)(a2 + 32);
  v11 = *(FILE **)(a1 + 4);
  if ( v10 )
  {
    v12 = strlen(*(const char **)(a2 + 32));
    fprintf(v11, ":X%x,%s", v12 >> 1, v10);
    v11 = *(FILE **)(a1 + 4);
  }
  fputc(10, v11);
  v13 = *(unsigned int **)(a2 + 36);
  if ( v13 && *v13 )
  {
    v14 = 0;
    do
    {
      v15 = *(FILE **)(a1 + 4);
      v16 = (const char *)v13[v14 + 2];
      v17 = *(_DWORD *)a2;
      ++v14;
      v18 = sub_989F0(*(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 12), 8, (int)v13);
      fprintf(v15, "tp A%x:%s:%s\n", v17, v18, v16);
      v13 = *(unsigned int **)(a2 + 36);
    }
    while ( v13 && v14 < *v13 );
  }
  v19 = *(unsigned int **)(a2 + 40);
  if ( v19 && *v19 )
  {
    v20 = 0;
    do
    {
      v21 = *(FILE **)(a1 + 4);
      v22 = (const char *)v19[v20 + 2];
      v23 = *(_DWORD *)a2;
      ++v20;
      v24 = sub_989F0(*(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 12), 8, (int)v19);
      fprintf(v21, "tp S%x:%s:%s\n", v23, v24, v22);
      v19 = *(unsigned int **)(a2 + 40);
    }
    while ( v19 && v20 < *v19 );
  }
  v25 = *(_DWORD *)a2;
  v26 = *(_QWORD *)(a2 + 8);
  if ( *(_DWORD *)(a2 + 44) )
  {
    sub_24B4D0(v25, 2000, v26, SHIDWORD(v26), "at", *(char **)(a2 + 44), (int)v37, 2000);
    fprintf(*(FILE **)(a1 + 4), "tp Z%s\n", v37);
    v25 = *(_DWORD *)a2;
    v26 = *(_QWORD *)(a2 + 8);
  }
  if ( *(_DWORD *)(a2 + 48) )
  {
    sub_24B4D0(v25, 2000, v26, SHIDWORD(v26), "cond", *(char **)(a2 + 48), (int)v37, 2000);
    fprintf(*(FILE **)(a1 + 4), "tp Z%s\n", v37);
    v25 = *(_DWORD *)a2;
    v26 = *(_QWORD *)(a2 + 8);
  }
  v27 = *(unsigned int **)(a2 + 52);
  if ( v27 && *v27 )
  {
    v28 = 0;
    while ( 1 )
    {
      v29 = v28 + 2;
      ++v28;
      sub_24B4D0(v25, v27[v29], v26, SHIDWORD(v26), "cmd", (char *)v27[v29], (int)v37, 2000);
      fprintf(*(FILE **)(a1 + 4), "tp Z%s\n", v37);
      v27 = *(unsigned int **)(a2 + 52);
      if ( !v27 )
        break;
      v25 = *(_DWORD *)a2;
      v26 = *(_QWORD *)(a2 + 8);
      if ( v28 >= *v27 )
        goto LABEL_30;
    }
    v25 = *(_DWORD *)a2;
    v26 = *(_QWORD *)(a2 + 8);
  }
LABEL_30:
  v30 = *(FILE **)(a1 + 4);
  v31 = sub_989F0(v26, SHIDWORD(v26), 8, SHIDWORD(v26));
  v32 = *(_QWORD *)(a2 + 64);
  v33 = *(_DWORD *)(a2 + 56);
  v35 = sub_989F0(v32, SHIDWORD(v32), 8, v34);
  return fprintf(v30, "tp V%x:%s:%x:%s\n", v25, v31, v33, v35);
}
