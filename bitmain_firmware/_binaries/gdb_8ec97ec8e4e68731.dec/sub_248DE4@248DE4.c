void __fastcall sub_248DE4(int a1, int a2, _DWORD *a3, int a4)
{
  int *v6; // r5
  int v7; // r0
  int v8; // r1
  int v9; // r2
  char *v10; // r4
  _DWORD *v11; // r6
  bool v12; // zf
  char *v13; // r4
  int v14; // r3
  int v15; // r10
  unsigned int v16; // r3
  size_t v17; // r8
  char *v18; // r9
  char *v19; // r6
  _BYTE *v20; // r2
  char *v21; // r3
  int v22; // r5
  char *v23; // r5

  v6 = *(int **)(sub_273FA0(a4, "start") + 4);
  v7 = sub_273FA0(a4, "length");
  v10 = (char *)a3[1];
  v11 = *(_DWORD **)(v7 + 4);
  if ( v10 != (char *)a3[2] )
  {
    v12 = v10 == 0;
    v13 = v10 + 8;
    if ( !v12 )
    {
      v14 = *v6;
      *((_DWORD *)v13 - 1) = *v11;
      *((_DWORD *)v13 - 2) = v14;
    }
    a3[1] = v13;
    return;
  }
  v15 = (int)&v10[-*a3];
  v16 = v15 >> 3;
  if ( v15 >> 3 )
  {
    v17 = 2 * v16;
    if ( v16 > 2 * v16 || v17 > 0x1FFFFFFF )
    {
      v17 = -8;
    }
    else
    {
      if ( !v17 )
      {
        v18 = 0;
        goto LABEL_9;
      }
      v17 = 16 * v16;
    }
  }
  else
  {
    v17 = 8;
  }
  v18 = (char *)sub_9836C(v17);
LABEL_9:
  if ( &v18[v15] )
  {
    v9 = *v11;
    v8 = *v6;
  }
  v19 = (char *)*a3;
  if ( &v18[v15] )
  {
    *(_DWORD *)&v18[v15] = v8;
    *(_DWORD *)&v18[v15 + 4] = v9;
  }
  if ( v19 != v10 )
    memmove(v18, v19, v10 - v19);
  v20 = (_BYTE *)a3[1];
  v21 = &v18[v10 - v19 + 8];
  v22 = v20 - v10;
  if ( v20 != v10 )
    v21 = (char *)memmove(v21, v10, v20 - v10);
  v23 = &v21[v22];
  if ( v19 )
    sub_339E64(v19);
  *a3 = v18;
  a3[1] = v23;
  a3[2] = &v18[v17];
}
