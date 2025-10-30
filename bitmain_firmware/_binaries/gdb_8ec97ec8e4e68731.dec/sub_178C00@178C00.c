int __fastcall sub_178C00(int a1, int a2, int a3, int a4, __int64 a5, int a6, int a7)
{
  int v7; // r5
  int v8; // r4
  int v9; // r3
  int v10; // r12
  int v11; // r9
  int v12; // r8
  int v13; // r10
  int v15; // r6
  int v16; // r5
  int v17; // r4
  int v18; // r10
  _BYTE *v19; // r3
  int v20; // r1
  _BYTE *v21; // r1
  _DWORD *v22; // r3
  int v23; // r1
  int v24; // r1
  const char *v25; // r0
  const char *v26; // r1
  int v27; // r0
  int v28; // r8
  int v29; // r6
  int v30; // lr
  int v31; // r5
  int result; // r0
  __int16 *v33; // lr
  int v34; // r6
  _BOOL4 v35; // r0
  int v36; // r3
  int v37; // r5
  int v38; // r0
  _DWORD *v40; // [sp+18h] [bp-Ch]
  _BYTE *v41; // [sp+18h] [bp-Ch]
  int v42; // [sp+1Ch] [bp-8h]
  int v43; // [sp+1Ch] [bp-8h]

  v7 = *(_DWORD *)(a1 + 24);
  v8 = a5;
  v9 = *(_DWORD *)(v7 + 24);
  v10 = v9 + 24 * a2;
  if ( (*(_WORD *)(v7 + 2) & 0x380) != 0x80 )
    return *(_QWORD *)v10 / 8LL;
  v33 = *(__int16 **)(v7 + 28);
  v34 = *((_DWORD *)v33 + 4);
  if ( !v34 || (((int)*(unsigned __int8 *)(v34 + (a2 >> 3)) >> (a2 & 7)) & 1) == 0 )
    return *(_QWORD *)v10 / 8LL;
  v11 = *(__int16 *)(v7 + 4);
  v12 = a3;
  v13 = *v33;
  if ( v13 < v11 )
  {
    v15 = *v33;
    v16 = 24 * v13;
    v17 = v15;
    v18 = *(_DWORD *)(v10 + 12);
    while ( 1 )
    {
      v19 = *(_BYTE **)(v9 + v16 + 16);
      if ( *v19 != 95 )
        goto LABEL_6;
      v20 = (unsigned __int8)v19[1];
      if ( v20 != 118 )
        goto LABEL_10;
      if ( v19[2] != 98 )
        goto LABEL_6;
      v43 = a3;
      v41 = v19;
      v35 = sub_10A844((unsigned __int8)v19[3]);
      v19 = v41;
      a3 = v43;
      if ( !v35 )
        break;
      v21 = v41 + 4;
      if ( v41[1] == 95 && v41[2] == 118 && v41[3] == 98 && v41[4] == 95 )
        goto LABEL_14;
LABEL_15:
      if ( v21 )
      {
        v22 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 24) + v16 + 12);
        if ( v22 )
        {
          v23 = v22[6];
          if ( *(_BYTE *)v23 == 1 )
          {
            v24 = *(_DWORD *)(v23 + 20);
            if ( v18 == v24
              || (v40 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 24) + v16 + 12),
                  (v25 = *(const char **)(*(_DWORD *)(v18 + 24) + 8)) != 0)
              && (v26 = *(const char **)(*(_DWORD *)(v24 + 24) + 8)) != 0
              && (v42 = a3, v27 = strcmp(v25, v26), a3 = v42, v22 = v40, !v27) )
            {
              v28 = a3;
              v29 = sub_171258(v22);
              v30 = *(_DWORD *)(*(_DWORD *)(a1 + 24) + 24) + v16;
              v31 = *(_QWORD *)v30 / 8LL;
              if ( sub_26B3A4(
                     a7,
                     ((unsigned __int64)((*(int *)(v30 + 4) >> 31) & 7) + *(_QWORD *)v30) >> 32,
                     v31 + a5,
                     (unsigned __int64)(*(_QWORD *)v30 / 8LL + a5) >> 32,
                     *(_DWORD *)(v29 + 20),
                     *(int *)(v29 + 20) >> 31) )
              {
                return a5 - a6 + sub_26D230(v29, v28 + a5 + v31);
              }
              v38 = sub_92F64(9, "Virtual baseclass pointer is not available");
              return sub_178F28(v38);
            }
          }
        }
      }
LABEL_6:
      ++v15;
      v16 += 24;
      if ( v15 == v11 )
      {
        v13 = v17;
        v8 = a5;
        v12 = a3;
        goto LABEL_35;
      }
      v9 = *(_DWORD *)(*(_DWORD *)(a1 + 24) + 24);
    }
    v20 = (unsigned __int8)v41[1];
LABEL_10:
    if ( v20 != 95 || v19[2] != 118 || v19[3] != 98 || v19[4] != 95 )
      goto LABEL_6;
LABEL_14:
    v21 = v19 + 5;
    goto LABEL_15;
  }
LABEL_35:
  v36 = a2;
  v37 = a2 + 1;
  if ( v13 <= a2 + 1 )
LABEL_38:
    sub_946E0("Baseclass offset not found");
  while ( 1 )
  {
    result = sub_178C00(a1, v37, v12, v36, v8, HIDWORD(a5), a6, a7);
    if ( result )
      return result;
    if ( v13 == ++v37 )
      goto LABEL_38;
  }
}
