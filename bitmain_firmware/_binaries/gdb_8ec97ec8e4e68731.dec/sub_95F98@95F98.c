void __fastcall sub_95F98(int *a1, char *a2, _DWORD *a3, _DWORD *a4)
{
  char *v5; // r5
  char *v6; // r7
  char *v8; // r11
  unsigned int v9; // r1
  unsigned int v10; // r9
  int v11; // r9
  int v12; // r0
  int v13; // r8
  size_t v14; // r4
  int v15; // r0
  int v16; // r2
  char *v17; // r3
  char *v18; // r4
  _DWORD *v19; // [sp+0h] [bp-Ch]
  _DWORD *v20; // [sp+4h] [bp-8h]

  v5 = (char *)*a1;
  v6 = (char *)a1[1];
  v8 = &a2[-*a1];
  v9 = (int)&v6[-*a1] >> 3;
  if ( !v9 )
  {
    v10 = 1;
    goto LABEL_15;
  }
  v10 = 2 * v9;
  if ( v9 > 2 * v9 || v10 > 0x1FFFFFFF )
  {
    v11 = -8;
LABEL_4:
    v19 = a3;
    v20 = a4;
    v12 = sub_9836C(v11);
    v5 = (char *)*a1;
    v13 = v12;
    v6 = (char *)a1[1];
    v10 = v12 + v11;
    a3 = v19;
    a4 = v20;
    v14 = (size_t)&a2[-*a1];
    goto LABEL_5;
  }
  if ( v10 )
  {
LABEL_15:
    v11 = 8 * v10;
    goto LABEL_4;
  }
  v14 = (size_t)v8;
  v13 = 0;
LABEL_5:
  if ( &v8[v13] )
  {
    v15 = *a3;
    v16 = *a4;
    *(_DWORD *)&v8[v13] = v15;
    *(_DWORD *)&v8[v13 + 4] = v16;
  }
  if ( a2 != v5 )
    memmove((void *)v13, v5, v14);
  v17 = (char *)(v13 + v14 + 8);
  if ( v6 != a2 )
    v17 = (char *)memcpy(v17, a2, v6 - a2);
  v18 = &v17[v6 - a2];
  if ( v5 )
    sub_339E64(v5);
  *a1 = v13;
  a1[1] = (int)v18;
  a1[2] = v10;
}
