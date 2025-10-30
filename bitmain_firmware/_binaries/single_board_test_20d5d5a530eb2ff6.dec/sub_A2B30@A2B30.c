int __fastcall sub_A2B30(_DWORD *a1, int a2, int a3)
{
  int v5; // r0
  int v6; // r4
  int v8; // r4
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r4
  int v16; // r0
  _DWORD *v17; // r2
  int v18; // r3
  int v19; // t1
  int v20; // r7
  int v21; // r8
  int *v22; // r3
  int v23; // r2
  int v24; // r1
  int v25; // r3
  _BOOL4 v26; // r2
  int v27; // r0
  int v28; // r0
  int v29; // r0
  unsigned __int8 *v30; // r3
  int v31; // r1
  unsigned __int8 *v32; // r1
  unsigned __int8 *v33; // r3
  int v34; // t1

  v5 = sub_10E89C(a2);
  if ( !v5 )
    return 0;
  v6 = v5;
  if ( sub_DA19C(v5) != 408 )
    return 1;
  if ( sub_DA19C(v6) != 408 )
    goto LABEL_8;
  v20 = sub_DA1F4(v6);
  v21 = sub_C59B8(v20);
  if ( sub_C5BA8(v20) == 4 )
  {
    v29 = 0;
  }
  else
  {
    v22 = (int *)a1[1];
    v23 = *(_DWORD *)(v22[25] + 48);
    v24 = v23 << 28;
    if ( (v23 & 8) == 0 )
    {
      v25 = *v22;
      v26 = v25 >= 772;
      if ( v25 == 0x10000 )
        v26 = 0;
      if ( v26 )
        goto LABEL_8;
    }
    v27 = sub_C620C(v21, v24);
    v28 = sub_C6210(v27);
    if ( v28 == 406 )
    {
      v29 = 1;
    }
    else
    {
      if ( v28 != 407 )
        return 0;
      v29 = 2;
    }
  }
  v30 = (unsigned __int8 *)a1[347];
  if ( v30 )
  {
    v31 = a1[346];
    if ( !v31 )
      return 0;
    if ( *v30 != v29 )
    {
      v32 = &v30[v31];
      v33 = v30 + 1;
      while ( v32 != v33 )
      {
        v34 = *v33++;
        if ( v34 == v29 )
          goto LABEL_8;
      }
      return 0;
    }
  }
LABEL_8:
  v9 = sub_DA1F4(v6);
  if ( v9 )
  {
    v10 = sub_C59B8(v9);
    v11 = sub_C6284(v10);
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      v14 = *(_DWORD *)((char *)&unk_1A9C40 + v12);
      ++v13;
      v12 += 12;
      if ( v11 == v14 )
        break;
      if ( v13 == 30 )
        goto LABEL_4;
    }
    v8 = (unsigned __int16)v13;
  }
  else
  {
LABEL_4:
    v8 = 0;
  }
  if ( !sub_A2A78(a1, v8, a1[7] == 0) )
    return 0;
  if ( !a3 || (*(_DWORD *)(a1[257] + 16) & 0x30000) == 0 )
    return 1;
  if ( v8 == 23 )
  {
    v15 = 794;
  }
  else
  {
    if ( v8 != 24 )
      return 0;
    v15 = 795;
  }
  v16 = a1[995];
  if ( v16 )
  {
    v17 = (_DWORD *)a1[994];
    if ( v15 == *(_DWORD *)(*v17 + 24) )
      return 1;
    v18 = 0;
    while ( ++v18 != v16 )
    {
      v19 = v17[1];
      ++v17;
      if ( v15 == *(_DWORD *)(v19 + 24) )
        return 1;
    }
  }
  return 0;
}
