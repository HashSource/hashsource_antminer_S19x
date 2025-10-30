int __fastcall sub_305D4(int a1, int a2, int a3, int a4)
{
  const char *v7; // r5
  int v8; // r4
  int result; // r0
  int v10; // r3
  int v11; // r4
  int v12; // r2
  int v13; // r6
  const char *v14; // r10
  int *v15; // r9
  int *v16; // r8
  _DWORD *v17; // r7
  int v18; // r4
  int v19; // r3
  int v20; // r0
  int v21; // r2

  v7 = *(const char **)(sub_273FA0(a4, "version") + 4);
  v8 = sub_273FA0(a4, "main-lm");
  result = strcmp(v7, "1.0");
  if ( result )
  {
    sub_273CF8(a1, "SVR4 Library list has unsupported version \"%s\"", v7);
    v11 = v10;
    v13 = v12;
    v14 = *(const char **)(sub_273FA0(v10, "name") + 4);
    v15 = *(int **)(sub_273FA0(v11, "lm") + 4);
    v16 = *(int **)(sub_273FA0(v11, "l_addr") + 4);
    v17 = *(_DWORD **)(sub_273FA0(v11, "l_ld") + 4);
    v18 = sub_93094(1, 0x428u);
    v19 = sub_9836C(32);
    *(_DWORD *)(v18 + 4) = v19;
    v20 = *v15;
    v21 = *v16;
    *(_DWORD *)(v19 + 16) = *v17;
    *(_DWORD *)(v19 + 12) = v20;
    *(_DWORD *)(v19 + 4) = v21;
    *(_DWORD *)v19 = 0;
    *(_BYTE *)(v19 + 8) = 0;
    *(_DWORD *)(v19 + 20) = 0;
    *(_DWORD *)(v19 + 24) = 0;
    *(_DWORD *)(v19 + 28) = 0;
    strncpy((char *)(v18 + 520), v14, 0x1FFu);
    *(_BYTE *)(v18 + 1031) = 0;
    strcpy((char *)(v18 + 8), (const char *)(v18 + 520));
    **(_DWORD **)(v13 + 4) = v18;
    *(_DWORD *)(v13 + 4) = v18;
  }
  else if ( v8 )
  {
    *(_DWORD *)(a3 + 8) = **(_DWORD **)(v8 + 4);
  }
  return result;
}
