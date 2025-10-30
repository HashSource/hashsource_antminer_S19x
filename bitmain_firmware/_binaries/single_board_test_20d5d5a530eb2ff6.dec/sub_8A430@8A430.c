_DWORD *__fastcall sub_8A430(_DWORD *result, int a2)
{
  int v2; // r2
  int v3; // r3
  _DWORD *v4; // r5
  int v6; // r4
  int v7; // r7
  int v8; // r1
  int *v9; // lr
  int *v10; // lr
  _BOOL4 v11; // lr
  _BOOL4 v12; // r1
  int v13; // r3
  int v14; // r3
  int v15; // r4
  _DWORD *v16; // r3
  time_t v17; // r1

  v2 = result[285];
  if ( !*(_DWORD *)(v2 + 328) )
    return result;
  v3 = result[7];
  if ( v3 )
  {
    if ( !*(_DWORD *)(v2 + 364) && (result[299] & 1) != 0 )
      return result;
  }
  v4 = result;
  result = (_DWORD *)result[376];
  v6 = result[9];
  v7 = v6 & a2;
  if ( (v6 & a2) != 0 )
  {
    if ( v4[35] )
    {
      v10 = (int *)v4[1];
      if ( (*(_DWORD *)(v10[25] + 48) & 8) != 0 )
        goto LABEL_30;
      v8 = *v10;
      v11 = *v10 != 0x10000;
      if ( v8 < 772 )
        v11 = 0;
      if ( !v11 )
        goto LABEL_30;
      if ( (v6 & 0x200) != 0 )
        goto LABEL_27;
    }
    else
    {
      v8 = v6 << 22;
      if ( (v6 & 0x200) != 0 )
        goto LABEL_27;
      v9 = (int *)v4[1];
      if ( (*(_DWORD *)(v9[25] + 48) & 8) != 0 )
      {
LABEL_26:
        sub_8DC08();
        result = (_DWORD *)v4[376];
        goto LABEL_27;
      }
      v8 = *v9;
    }
    v12 = v8 < 772 || v8 == 0x10000;
    if ( v3 )
      v13 = v12;
    else
      v13 = v12 | 1;
    if ( v13 || v4[980] && (v4[315] & 0x1000000) == 0 )
      goto LABEL_26;
    if ( result[12] )
      goto LABEL_26;
    v14 = v4[315];
    v8 = v14 << 17;
    if ( (v14 & 0x4000) != 0 )
      goto LABEL_26;
LABEL_27:
    if ( result[11] )
    {
      sub_8DBC8(v4[285], v8);
      result = (_DWORD *)(*(int (__fastcall **)(_DWORD *, _DWORD))(v4[376] + 44))(v4, v4[285]);
      if ( !result )
        result = (_DWORD *)sub_8D6A4(v4[285]);
    }
  }
LABEL_30:
  if ( ((a2 == v7) & ((v6 ^ 0x80u) >> 7)) != 0 )
  {
    v15 = v4[376];
    if ( (a2 & 1) != 0 )
      v16 = (_DWORD *)(v15 + 64);
    else
      v16 = (_DWORD *)(v15 + 76);
    if ( (unsigned __int8)*v16 == 255 )
    {
      v17 = time(0);
      return (_DWORD *)sub_8E404(v15, v17);
    }
  }
  return result;
}
