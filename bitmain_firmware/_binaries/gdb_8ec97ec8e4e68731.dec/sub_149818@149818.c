void __fastcall sub_149818(char **a1, char *a2, _DWORD *a3)
{
  char *v4; // r6
  char *v5; // r8
  char *v7; // r11
  int v8; // r1
  __int64 v9; // r4
  size_t v10; // r5
  char *v11; // r0
  void *v12; // r10
  char *v13; // r12
  _DWORD *v14; // lr
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  _DWORD *v19; // r12
  int v20; // r1
  bool v21; // zf
  char *v22; // r4
  size_t v23; // r8
  _DWORD *v24; // [sp+4h] [bp-8h]

  v4 = *a1;
  v5 = a1[1];
  v7 = (char *)(a2 - *a1);
  v8 = (v5 - *a1) >> 3;
  if ( !(-1431655765 * v8) )
  {
    HIDWORD(v9) = 1;
    goto LABEL_15;
  }
  HIDWORD(v9) = 1431655766 * v8;
  if ( -1431655765 * v8 > (unsigned int)(1431655766 * v8) || HIDWORD(v9) > 0xAAAAAAA )
  {
    v10 = -16;
LABEL_4:
    v24 = a3;
    v11 = (char *)sub_9836C(v10);
    v4 = *a1;
    v12 = v11;
    v5 = a1[1];
    HIDWORD(v9) = &v11[v10];
    a3 = v24;
    LODWORD(v9) = a2 - *a1;
    goto LABEL_5;
  }
  if ( HIDWORD(v9) )
  {
LABEL_15:
    v10 = 24 * HIDWORD(v9);
    goto LABEL_4;
  }
  LODWORD(v9) = v7;
  v12 = 0;
LABEL_5:
  v13 = &v7[(_DWORD)v12];
  if ( &v7[(_DWORD)v12] )
  {
    v14 = a3;
    v15 = *a3;
    v16 = a3[1];
    v17 = a3[2];
    v18 = v14[3];
    v14 += 4;
    *(_DWORD *)v13 = v15;
    *((_DWORD *)v13 + 1) = v16;
    *((_DWORD *)v13 + 2) = v17;
    *((_DWORD *)v13 + 3) = v18;
    v19 = v13 + 16;
    v20 = v14[1];
    *v19 = *v14;
    v19[1] = v20;
  }
  if ( a2 != v4 )
    memmove(v12, v4, v9);
  v21 = v5 == a2;
  v22 = (char *)v12 + v9 + 24;
  v23 = v5 - a2;
  if ( !v21 )
    memcpy(v22, a2, v23);
  LODWORD(v9) = &v22[v23];
  if ( v4 )
    sub_339E64(v4);
  *a1 = (char *)v12;
  *(_QWORD *)(a1 + 1) = v9;
}
