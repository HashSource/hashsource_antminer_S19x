void __fastcall sub_91654(int a1, _BYTE *a2, _DWORD *a3)
{
  _BYTE *v4; // r6
  _BYTE *v6; // r8
  char *v7; // r11
  unsigned int v8; // r0
  __int64 v9; // r4
  int v10; // r5
  int v11; // r0
  int v12; // r9
  char *v13; // r3
  int v14; // r1
  int v15; // r2
  char *v16; // r3

  v4 = *(_BYTE **)a1;
  v6 = *(_BYTE **)(a1 + 4);
  v7 = &a2[-*(_DWORD *)a1];
  v8 = -1431655765 * ((int)&v6[-*(_DWORD *)a1] >> 2);
  if ( !v8 )
  {
    HIDWORD(v9) = 1;
    goto LABEL_15;
  }
  HIDWORD(v9) = 2 * v8;
  if ( v8 > 2 * v8 || HIDWORD(v9) > 0x15555555 )
  {
    v10 = -4;
LABEL_4:
    v11 = sub_9836C(v10);
    v4 = *(_BYTE **)a1;
    v12 = v11;
    v6 = *(_BYTE **)(a1 + 4);
    HIDWORD(v9) = v11 + v10;
    LODWORD(v9) = &a2[-*(_DWORD *)a1];
    goto LABEL_5;
  }
  if ( HIDWORD(v9) )
  {
LABEL_15:
    v10 = 12 * HIDWORD(v9);
    goto LABEL_4;
  }
  LODWORD(v9) = a2 - v4;
  v12 = 0;
LABEL_5:
  v13 = &v7[v12];
  if ( &v7[v12] )
  {
    v14 = a3[1];
    v15 = a3[2];
    *(_DWORD *)v13 = *a3;
    *((_DWORD *)v13 + 1) = v14;
    *((_DWORD *)v13 + 2) = v15;
  }
  if ( a2 != v4 )
    memmove((void *)v12, v4, v9);
  v16 = (char *)(v12 + v9 + 12);
  if ( v6 != a2 )
    v16 = (char *)memcpy(v16, a2, v6 - a2);
  LODWORD(v9) = &v16[v6 - a2];
  if ( v4 )
    sub_339E64(v4);
  *(_DWORD *)a1 = v12;
  *(_QWORD *)(a1 + 4) = v9;
}
