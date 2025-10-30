_DWORD *__fastcall sub_2E2758(int a1, int a2, int a3, _DWORD *a4, int a5)
{
  void *v5; // r11
  _DWORD *v6; // r5
  _DWORD *v7; // r4
  int v10; // r1
  _DWORD *v11; // r7
  int v14; // r1
  void *v15; // r10
  int v16; // r1
  int v17; // r3
  signed int v18; // r0
  void *v19; // r0
  int v20; // r1
  int v21; // r3
  int v22; // r1
  int v23; // r0
  int v24; // r0
  int v25; // [sp+8h] [bp-Ch]
  _DWORD *v26; // [sp+8h] [bp-Ch]
  int v27; // [sp+Ch] [bp-8h]
  int v28; // [sp+Ch] [bp-8h]

  v6 = *(_DWORD **)(a2 + 140);
  v7 = (_DWORD *)v6[26];
  if ( v7 )
    return v7;
  v10 = *(_DWORD *)(a2 + 76);
  if ( !v10 )
    return v7;
  v11 = a4;
  if ( a4 )
    v5 = (void *)v6[26];
  v25 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 444);
  if ( !a4 )
  {
    v20 = 12 * v10;
    if ( a5 )
      v11 = (_DWORD *)sub_2ACBF4(a1, v20);
    else
      v11 = sub_2AB368(v20);
    if ( !v11 )
      return v7;
    v5 = v11;
  }
  v14 = v6[15];
  if ( a3 )
  {
    v15 = 0;
  }
  else
  {
    v17 = v6[19];
    if ( v14 )
      v18 = *(_DWORD *)(v14 + 24);
    else
      v18 = 0;
    if ( v17 )
      v18 += *(_DWORD *)(v17 + 24);
    v19 = sub_2AB368(v18);
    a3 = (int)v19;
    if ( !v19 )
      goto LABEL_14;
    v14 = v6[15];
    v15 = v19;
  }
  if ( !v14 )
  {
    v26 = v11;
    goto LABEL_18;
  }
  v27 = v14;
  if ( !sub_2A8A04(a1, *(_QWORD *)(v14 + 16), 0) && sub_2DCA88(a1, a2, v27, a3, v11) )
  {
    v21 = v6[15];
    v22 = *(_DWORD *)(v21 + 40);
    v23 = *(_DWORD *)(v21 + 24);
    a3 += v23;
    if ( v22 )
      v24 = sub_347418(v23, v22);
    else
      v24 = 0;
    v26 = (_DWORD *)((char *)v11 + v24 * 12 * *(unsigned __int8 *)(*(_DWORD *)(v25 + 392) + 9));
LABEL_18:
    v16 = v6[19];
    if ( !v16 || (v28 = v6[19], !sub_2A8A04(a1, *(_QWORD *)(v16 + 16), 0)) && sub_2DCA88(a1, a2, v28, a3, v26) )
    {
      if ( a5 )
        v6[26] = v11;
      v7 = v11;
      if ( v15 )
        free(v15);
      return v7;
    }
  }
  if ( v15 )
    free(v15);
LABEL_14:
  if ( v5 )
  {
    if ( a5 )
      sub_2AD1F0(a1);
    else
      free(v5);
  }
  return v7;
}
