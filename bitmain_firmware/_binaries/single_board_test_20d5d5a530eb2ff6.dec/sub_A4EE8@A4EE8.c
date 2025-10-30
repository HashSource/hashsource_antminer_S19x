int __fastcall sub_A4EE8(int *a1, int a2)
{
  int *v2; // r5
  _DWORD *v4; // r3
  int v5; // r1
  int v6; // r5
  _BOOL4 v7; // r6
  _DWORD *v8; // r7
  unsigned int v9; // r6
  int v10; // r5
  int v11; // r3
  int v12; // r10
  unsigned int v13; // r2
  int v14; // r1
  unsigned int v15; // r5
  int v16; // r3
  char *v17; // r0
  int v18; // r3
  int v19; // lr
  int v20; // r3
  int v21; // r3
  int v22; // r2
  int v23; // r3
  int *v24; // r1
  int v25; // r2
  int v27; // r3
  _DWORD *v28; // r5
  _DWORD *v29; // r2
  int v30; // r8
  int v31; // r8
  int v32; // r3
  int v33; // r0
  int v34; // r0
  char **v35; // r0
  int v36; // r8
  unsigned __int16 *v37; // r6
  unsigned int v38; // r3
  bool v39; // cc
  int v40; // r3
  int v41; // r3
  int v42; // r2
  int v43; // r3
  int v44; // r3
  int v46[2]; // [sp+14h] [bp-8h] BYREF

  v2 = (int *)a1[1];
  v4 = (_DWORD *)a1[31];
  v5 = *(_DWORD *)(v2[25] + 48);
  v4[153] = 0;
  v4[152] = 0;
  if ( (v5 & 8) == 0 )
  {
    v6 = *v2;
    v7 = v6 != 0x10000;
    if ( v6 < 772 )
      v7 = 0;
    if ( v7 )
    {
      v8 = sub_A2D30(a1, v5 & 8, 0);
      if ( v8 )
        goto LABEL_6;
      if ( a2 )
      {
        v44 = 2760;
LABEL_73:
        sub_95494(a1, 40, 513, 118, (int)"ssl/t1_lib.c", v44);
        return 0;
      }
      return 1;
    }
  }
  if ( (*(_DWORD *)(v4[132] + 20) & 0xAB) == 0 )
    return 1;
  if ( !a1[7] )
  {
    v28 = (_DWORD *)a1[257];
    if ( (unsigned int)(-858993459 * ((*v28 - (int)(v28 + 5)) >> 2)) > 8 )
      return 1;
    v29 = &v28[(*v28 - (int)(v28 + 5)) >> 2];
    if ( !v29[5] || !v29[6] )
      return 1;
  }
  if ( (v5 & 2) == 0 )
  {
    v8 = sub_A3610((int)a1, 0xFFFFFFFF);
    if ( v8 )
      goto LABEL_6;
    if ( !a2 )
      return 1;
    v32 = 2881;
    goto LABEL_55;
  }
  v10 = v4[154];
  if ( !v10 )
  {
    v8 = sub_A3610((int)a1, 0xFFFFFFFF);
    if ( v8 )
    {
      v36 = sub_A2E74((int)a1, 1, v46);
      if ( v36 )
      {
        v37 = (unsigned __int16 *)v46[0];
        do
        {
          if ( *((unsigned __int16 *)v8 + 2) == *v37 )
          {
            v38 = v8[5];
            v39 = v38 > 8;
            v40 = 5 * v38;
            if ( !v39 )
            {
              v41 = a1[257] + 4 * v40;
              v42 = *(_DWORD *)(v41 + 20);
              if ( v42 )
              {
                v43 = *(_DWORD *)(v41 + 24);
                if ( v43 )
                {
                  if ( sub_A25AC(a1 + 31, v8 + 2, v42, v43) )
                  {
                    if ( v36 != v10 )
                      goto LABEL_6;
                    break;
                  }
                  v37 = (unsigned __int16 *)v46[0];
                }
              }
            }
          }
          ++v10;
          v46[0] = (int)++v37;
        }
        while ( v36 != v10 );
      }
      if ( a2 )
      {
        sub_95494(a1, 47, 513, 370, (int)"ssl/t1_lib.c", 2872);
        return 0;
      }
      return 1;
    }
    if ( !a2 )
      return 1;
    v32 = 2856;
LABEL_55:
    sub_95494(a1, 80, 513, 68, (int)"ssl/t1_lib.c", v32);
    return 0;
  }
  v11 = a1[257];
  if ( (*(_DWORD *)(v11 + 16) & 0x30000) != 0 )
  {
    v33 = sub_DA1F4(*(_DWORD *)(v11 + 84));
    v34 = sub_C59B8(v33);
    v12 = sub_C6284(v34);
  }
  else
  {
    v12 = -1;
  }
  v13 = a1[995];
  v14 = v13;
  if ( !v13 )
    goto LABEL_36;
  v15 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD **)(a1[994] + 4 * v15);
      if ( a1[7] )
      {
        v9 = v8[5];
        v17 = sub_855D0(v9);
        if ( !v17 )
          goto LABEL_46;
        v18 = a1[31];
        v19 = *(_DWORD *)(v18 + 528);
        if ( (*((_DWORD *)v17 + 1) & *(_DWORD *)(v19 + 20)) == 0
          || *(_DWORD *)v17 == 912 && (*(_DWORD *)(v19 + 16) & 1) != 0 )
        {
          goto LABEL_46;
        }
        v20 = !(*(_BYTE *)(v18 + 4 * v9 + 636) & 1);
        if ( v9 == -1 )
          v20 |= 1u;
        if ( v20 )
        {
LABEL_46:
          v13 = a1[995];
          v9 = -1;
          v14 = v13;
          goto LABEL_17;
        }
        goto LABEL_25;
      }
      v9 = v8[5];
      v16 = -858993459 * ((*(_DWORD *)a1[257] - (a1[257] + 20)) >> 2);
      if ( v16 == v9 )
        break;
LABEL_17:
      if ( ++v15 >= v13 )
        goto LABEL_33;
    }
    if ( v16 == -1 )
      goto LABEL_44;
LABEL_25:
    if ( v9 <= 8 )
    {
      v21 = a1[257] + 20 * v9;
      v22 = *(_DWORD *)(v21 + 20);
      if ( v22 )
      {
        v23 = *(_DWORD *)(v21 + 24);
        if ( v23 )
          break;
      }
    }
LABEL_32:
    v13 = a1[995];
    ++v15;
    v14 = v13;
    if ( v15 >= v13 )
      goto LABEL_33;
  }
  if ( !sub_A25AC(a1 + 31, v8 + 2, v22, v23) )
  {
    v13 = a1[995];
    v16 = v9;
LABEL_44:
    v9 = v16;
    v14 = v13;
    goto LABEL_17;
  }
  if ( v8[4] == 912 )
  {
    v30 = sub_D9F64(*(_DWORD *)(a1[257] + 20 * v9 + 24));
    if ( !v30 )
      goto LABEL_32;
    if ( !sub_A2D04((int)v8, v46) )
      goto LABEL_32;
    if ( !v46[0] )
      goto LABEL_32;
    v31 = sub_F7ED8(v30);
    if ( v31 < 2 * (sub_D8C78(v46[0]) + 1) )
      goto LABEL_32;
  }
  if ( v12 != -1 && v12 != v8[7] )
    goto LABEL_32;
  v14 = a1[995];
LABEL_33:
  if ( v15 != v14 )
  {
LABEL_34:
    if ( v9 != -1 )
    {
LABEL_35:
      v24 = (int *)a1[257];
      v25 = a1[31];
      v27 = (int)&v24[5 * v9 + 5];
      *(_DWORD *)(v25 + 612) = v27;
      *v24 = v27;
      *(_DWORD *)(v25 + 608) = v8;
      return 1;
    }
LABEL_6:
    v9 = v8[5];
    goto LABEL_35;
  }
LABEL_36:
  if ( (*(_DWORD *)(*(_DWORD *)(a1[31] + 528) + 20) & 0xA0) != 0 )
  {
    v35 = sub_A3610((int)a1, 0xFFFFFFFF);
    v8 = v35;
    if ( v35 )
    {
      if ( a1[995] )
      {
        v9 = (unsigned int)v35[5];
        goto LABEL_34;
      }
      goto LABEL_37;
    }
    if ( a2 )
    {
      v44 = 2829;
      goto LABEL_73;
    }
    return 1;
  }
LABEL_37:
  if ( !a2 )
    return 1;
  sub_95494(a1, 40, 513, 118, (int)"ssl/t1_lib.c", 2842);
  return 0;
}
