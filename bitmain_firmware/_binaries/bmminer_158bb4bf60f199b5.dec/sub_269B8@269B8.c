char *__fastcall sub_269B8(int a1, size_t *a2)
{
  size_t v2; // r6
  int v5; // r4
  char *v6; // r8
  size_t v7; // r7
  char *v8; // r8
  size_t v9; // r5
  char *v10; // r6
  size_t v11; // r7
  char *v12; // r0
  size_t v13; // r4
  char *v14; // r12
  int v15; // lr
  __int64 v16; // r0
  size_t v17; // r7
  char *v18; // r0
  char *v19; // r2
  size_t v20; // r1
  int v21; // lr
  size_t v22; // r5
  int v23; // r12
  size_t v24; // r6
  int v25; // r3
  char *v26; // r8
  char *v27; // r0
  int v28; // r1
  char *result; // r0
  int v30; // r3

  v2 = 0;
  v5 = a1;
  v6 = 0;
  do
  {
    v7 = v2 + 4;
    v8 = (char *)realloc(v6, v2 + 4);
    *(_DWORD *)&v8[v2] = *(_DWORD *)v5;
    v9 = strlen(*(const char **)(v5 + 4)) + 1 + v2 + 4;
    v10 = (char *)realloc(v8, v9);
    strcpy(&v10[v7], *(const char **)(v5 + 4));
    v11 = sub_26874((int *)v5);
    v12 = v10;
    v2 = v9 + v11;
    v6 = (char *)realloc(v12, v9 + v11);
    memcpy(&v6[v9], *(const void **)(v5 + 8), v11);
    v5 = *(_DWORD *)(v5 + 20);
  }
  while ( v5 != a1 );
  v13 = v2 + 28;
  v14 = (char *)realloc(v6, v2 + 12);
  v15 = dword_242EE8;
  v16 = qword_138600;
  v17 = v2 + 284;
  qword_138600 = 0;
  *(_QWORD *)&v14[v2] = v16;
  *(_DWORD *)&v14[v2 + 8] = v15;
  v18 = (char *)realloc(v14, v2 + 28);
  v19 = &v18[v2 + 12];
  v20 = v2 + 284;
  v21 = dword_1B0A00;
  *(_DWORD *)v19 = dword_1B09FC;
  v22 = v2 + 292;
  v23 = dword_1B0A04;
  v24 = v2 + 296;
  v25 = dword_1B0A08;
  *((_DWORD *)v19 + 1) = v21;
  *((_DWORD *)v19 + 2) = v23;
  *((_DWORD *)v19 + 3) = v25;
  v26 = (char *)realloc(v18, v20);
  memcpy(&v26[v13], byte_1B0A18, 0x100u);
  v27 = (char *)realloc(v26, v22);
  v28 = HIDWORD(dbl_1B0A10);
  *(_DWORD *)&v27[v17] = LODWORD(dbl_1B0A10);
  *(_DWORD *)&v27[v17 + 4] = v28;
  result = (char *)realloc(v27, v24);
  v30 = dword_9EE38;
  *a2 = v24;
  *(_DWORD *)&result[v22] = v30;
  return result;
}
