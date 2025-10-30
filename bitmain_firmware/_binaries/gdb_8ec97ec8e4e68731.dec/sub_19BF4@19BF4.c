void __fastcall sub_19BF4(int *a1, char *a2, _DWORD *a3)
{
  char *v4; // r5
  char *v5; // r7
  char *v7; // r11
  unsigned int v8; // r3
  unsigned int v9; // r8
  int v10; // r8
  int v11; // r0
  int v12; // r9
  size_t v13; // r4
  char *v14; // r3
  char *v15; // r4
  _DWORD *v16; // [sp+4h] [bp-8h]

  v4 = (char *)*a1;
  v5 = (char *)a1[1];
  v7 = &a2[-*a1];
  v8 = (int)&v5[-*a1] >> 2;
  if ( !v8 )
  {
    v9 = 1;
    goto LABEL_15;
  }
  v9 = 2 * v8;
  if ( v8 > 2 * v8 || v9 > 0x3FFFFFFF )
  {
    v10 = -4;
LABEL_4:
    v16 = a3;
    v11 = sub_9836C(v10);
    v4 = (char *)*a1;
    v12 = v11;
    v5 = (char *)a1[1];
    v9 = v11 + v10;
    a3 = v16;
    v13 = (size_t)&a2[-*a1];
    goto LABEL_5;
  }
  if ( v9 )
  {
LABEL_15:
    v10 = 4 * v9;
    goto LABEL_4;
  }
  v13 = (size_t)&a2[-*a1];
  v12 = 0;
LABEL_5:
  if ( &v7[v12] )
    *(_DWORD *)&v7[v12] = *a3;
  if ( a2 != v4 )
    memmove((void *)v12, v4, v13);
  v14 = (char *)(v12 + v13 + 4);
  if ( v5 != a2 )
    v14 = (char *)memcpy(v14, a2, v5 - a2);
  v15 = &v14[v5 - a2];
  if ( v4 )
    sub_339E64(v4);
  *a1 = v12;
  a1[1] = (int)v15;
  a1[2] = v9;
}
