void __fastcall sub_AF814(char **a1, char *a2, _DWORD *a3)
{
  char *v4; // r5
  char *v5; // r7
  char *v7; // r11
  unsigned int v8; // r3
  unsigned int v9; // r8
  size_t v10; // r8
  char *v11; // r0
  void *v12; // r9
  size_t v13; // r4
  char *v14; // r11
  int v15; // r1
  char *v16; // r3
  char *v17; // r4
  _DWORD *v18; // [sp+4h] [bp-8h]

  v4 = *a1;
  v5 = a1[1];
  v7 = (char *)(a2 - *a1);
  v8 = (v5 - *a1) >> 3;
  if ( !v8 )
  {
    v9 = 1;
    goto LABEL_15;
  }
  v9 = 2 * v8;
  if ( v8 > 2 * v8 || v9 > 0x1FFFFFFF )
  {
    v10 = -8;
LABEL_4:
    v18 = a3;
    v11 = (char *)sub_9836C(v10);
    v4 = *a1;
    v12 = v11;
    v5 = a1[1];
    v9 = (unsigned int)&v11[v10];
    a3 = v18;
    v13 = a2 - *a1;
    goto LABEL_5;
  }
  if ( v9 )
  {
LABEL_15:
    v10 = 8 * v9;
    goto LABEL_4;
  }
  v13 = a2 - *a1;
  v12 = 0;
LABEL_5:
  v14 = &v7[(_DWORD)v12];
  if ( v14 )
  {
    v15 = a3[1];
    *(_DWORD *)v14 = *a3;
    *((_DWORD *)v14 + 1) = v15;
  }
  if ( a2 != v4 )
    memmove(v12, v4, v13);
  v16 = (char *)v12 + v13 + 8;
  if ( v5 != a2 )
    v16 = (char *)memcpy(v16, a2, v5 - a2);
  v17 = &v16[v5 - a2];
  if ( v4 )
    sub_339E64(v4);
  *a1 = (char *)v12;
  a1[1] = v17;
  a1[2] = (char *)v9;
}
