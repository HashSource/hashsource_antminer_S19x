int __fastcall sub_2DCC48(_DWORD *a1, _BYTE *a2, int *a3, int a4, int a5)
{
  int v6; // r1
  int (__fastcall *v10)(_DWORD, _BYTE *, int *, int, int); // r6
  int v11; // r12
  _DWORD *v13; // r8
  unsigned int v14; // r1
  unsigned int v15; // r7
  char *v16; // r6
  int v17; // r0
  int v18; // r1
  int v19; // r2
  int v20; // r3
  _DWORD *v21; // r4
  int v22; // r9
  char *v23; // r6
  int v24; // r5
  int v25; // r3
  int v26; // r1
  int v27; // r0
  void *v28; // r0

  v6 = a1[1];
  if ( !*(_DWORD *)(*(_DWORD *)(v6 + 160) + 2320) )
  {
    sub_2A6BBC("elflink.c", 9221);
    v6 = a1[1];
  }
  v10 = *(int (__fastcall **)(_DWORD, _BYTE *, int *, int, int))(*(_DWORD *)(*(_DWORD *)(v6 + 4) + 444) + 104);
  if ( v10 )
  {
    v11 = v10(*a1, a2, a3, a4, a5);
    if ( v11 != 1 )
      return v11;
  }
  if ( a2 && *a2 && (*(_DWORD *)(a4 + 20) & 0x8000) == 0 )
  {
    v27 = sub_2F0184(a1[2], a2, 0);
    a3[2] = v27;
    if ( v27 == -1 )
      return 0;
  }
  else
  {
    a3[2] = -1;
  }
  v13 = *(_DWORD **)(*a1 + 28);
  v14 = v13[23];
  v15 = v13[22];
  v16 = (char *)v13[24];
  if ( v14 <= v15 )
  {
    v28 = (void *)v13[24];
    v13[23] = 2 * v14;
    v16 = (char *)sub_2AB3FC(v28, 56 * v14);
    v13[24] = v16;
    if ( !v16 )
      return 0;
    v15 = v13[22];
  }
  v17 = *a3;
  v18 = a3[1];
  v19 = a3[2];
  v20 = a3[3];
  v21 = a3 + 4;
  v22 = a1[1];
  v23 = &v16[28 * v15];
  v24 = a1[13];
  *(_DWORD *)v23 = v17;
  *((_DWORD *)v23 + 1) = v18;
  *((_DWORD *)v23 + 2) = v19;
  *((_DWORD *)v23 + 3) = v20;
  v25 = *(_DWORD *)(v22 + 124);
  if ( v24 )
    v26 = *(_DWORD *)(v22 + 124);
  else
    v26 = 0;
  *((_DWORD *)v23 + 4) = *v21;
  *((_DWORD *)v23 + 5) = v15;
  *((_DWORD *)v23 + 6) = v26;
  *(_DWORD *)(v22 + 124) = v25 + 1;
  v13[22] = v15 + 1;
  return 1;
}
