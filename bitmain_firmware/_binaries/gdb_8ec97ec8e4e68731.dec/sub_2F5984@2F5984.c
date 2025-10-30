unsigned int __fastcall sub_2F5984(_DWORD *a1, int a2, int a3, int a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  int *v8; // r4
  int v9; // r5
  _DWORD *v10; // r1
  unsigned int v11; // r5
  unsigned int v12; // r2
  unsigned int v13; // r3
  int v14; // r12
  int v15; // r1
  _DWORD *v17; // r0
  int v18; // lr
  unsigned int v19; // r2
  unsigned int v20; // r3
  bool v21; // cc
  int v22; // r10
  int v23; // r9
  int v24; // r12
  unsigned int v25; // r9
  int v26; // r11
  char *v29; // r0
  int v30; // r11
  int v31; // r0
  unsigned int s; // [sp+8h] [bp-24h] BYREF
  int v33; // [sp+Ch] [bp-20h]
  unsigned int v34; // [sp+10h] [bp-1Ch]
  unsigned int v35; // [sp+14h] [bp-18h]
  int v36; // [sp+18h] [bp-14h]
  int v37; // [sp+1Ch] [bp-10h]
  int v38; // [sp+20h] [bp-Ch]
  __int16 v39; // [sp+24h] [bp-8h]

  v8 = *(int **)(a1[40] + 556);
  v9 = *(_DWORD *)(a3 + 28);
  *a5 = 0;
  *a6 = 0;
  *a7 = 0;
  if ( v8 )
  {
    if ( !v8[3] )
      return 0;
  }
  else
  {
    v26 = a1[40];
    v8 = (int *)sub_2AD09C((int)a1, 0x20u);
    *(_DWORD *)(v26 + 556) = v8;
    if ( !v8 )
      return 0;
    v29 = sub_2AD7AC((int)a1, ".debug");
    if ( !v29 )
      return 0;
    v30 = *((_DWORD *)v29 + 10);
    if ( !v30 )
      v30 = *((_DWORD *)v29 + 9);
    v31 = sub_2AE08C(a1, v29, 0, a2);
    v8[3] = v31;
    if ( !v31 )
      return 0;
    v8[7] = v31;
    v8[4] = v31 + v30;
    *v8 = (int)a1;
    v8[1] = a2;
  }
  v10 = (_DWORD *)v8[2];
  v11 = v9 + a4;
  if ( !v10 )
  {
LABEL_7:
    v12 = v8[7];
    v13 = v8[4];
    if ( v12 < v13 )
    {
      while ( 1 )
      {
        if ( !sub_2F5414(*v8 + 4, &s, v12, v13) )
          return 0;
        if ( v39 != 17 )
          break;
        v17 = sub_2AD09C(*v8, 0x28u);
        if ( !v17 )
          return 0;
        v19 = v34;
        v20 = v35;
        v15 = v33;
        v21 = v35 > v11;
        v22 = v37;
        v23 = v38;
        if ( v35 > v11 )
          v18 = 1;
        *v17 = v8[2];
        if ( !v21 )
          v18 = 0;
        v24 = v36;
        if ( v19 > v11 )
          v18 = 0;
        v8[2] = (int)v17;
        v17[2] = v19;
        v17[1] = v22;
        v17[3] = v20;
        v17[4] = v23;
        v17[5] = v24;
        if ( v15 )
        {
          v13 = v8[4];
          v25 = v8[7] + s;
          v14 = v13;
          if ( v25 >= v13 || (v12 = v8[3] + v15, v25 == v12) )
          {
            v17[6] = 0;
            if ( v18 )
              return sub_2F563C((_DWORD **)v8, v17, v11, a5, a6, a7);
LABEL_10:
            v13 = v14;
            v12 = v8[3] + v15;
            goto LABEL_11;
          }
          v17[6] = v25;
          if ( v18 )
            return sub_2F563C((_DWORD **)v8, v17, v11, a5, a6, a7);
LABEL_11:
          v8[7] = v12;
          if ( v12 >= v13 )
            return 0;
        }
        else
        {
          v17[6] = 0;
          if ( v18 )
            return sub_2F563C((_DWORD **)v8, v17, v11, a5, a6, a7);
          v13 = v8[4];
          v12 = v8[7] + s;
LABEL_16:
          v8[7] = v12;
          if ( v12 >= v13 )
            return 0;
        }
      }
      v15 = v33;
      if ( !v33 )
      {
        v13 = v8[4];
        v12 = v8[7] + s;
        goto LABEL_16;
      }
      v14 = v8[4];
      goto LABEL_10;
    }
    return 0;
  }
  while ( v10[2] > v11 || v10[3] <= v11 )
  {
    v10 = (_DWORD *)*v10;
    if ( !v10 )
      goto LABEL_7;
  }
  return sub_2F563C((_DWORD **)v8, v10, v11, a5, a6, a7);
}
