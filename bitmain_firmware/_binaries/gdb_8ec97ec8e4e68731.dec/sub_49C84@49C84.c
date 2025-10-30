int __fastcall sub_49C84(int *a1, int a2, int a3, int a4)
{
  __int64 v5; // r4
  __int64 v8; // r0
  _BOOL4 v10; // r3
  __int64 v11; // r6
  _BOOL4 v12; // r3
  _BOOL4 v13; // r3
  int v14; // r1
  int v15; // r2
  int v16; // r3
  __int64 v18; // r6
  _BOOL4 v19; // r3
  _BOOL4 v20; // r3
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r1
  int v25; // r2
  int v26; // r3
  int v27; // [sp+0h] [bp-14h]
  int v28; // [sp+0h] [bp-14h]
  int v29; // [sp+0h] [bp-14h]
  int v30; // [sp+4h] [bp-10h]
  int v31; // [sp+4h] [bp-10h]
  int v32; // [sp+4h] [bp-10h]
  int v33; // [sp+8h] [bp-Ch]
  int v34; // [sp+8h] [bp-Ch]
  int v35; // [sp+8h] [bp-Ch]
  int v36; // [sp+Ch] [bp-8h]
  int v37; // [sp+Ch] [bp-8h]
  int v38; // [sp+Ch] [bp-8h]

  v5 = *(_QWORD *)(a2 + 8);
  v8 = *(_QWORD *)(a3 + 8);
  if ( v8 == v5 )
  {
    if ( v8 == *(_QWORD *)a2 )
      goto LABEL_11;
    if ( v8 == *(_QWORD *)a3 )
      goto LABEL_4;
    v10 = *(_QWORD *)a2 < *(_QWORD *)a3;
  }
  else
  {
    v10 = v5 < v8;
  }
  if ( !v10 )
  {
LABEL_4:
    v11 = *(_QWORD *)(a4 + 8);
    if ( v5 == v11 )
    {
      if ( v11 == *(_QWORD *)a2 )
        goto LABEL_20;
      if ( v11 == *(_QWORD *)a4 )
        goto LABEL_7;
      v12 = *(_QWORD *)a2 < *(_QWORD *)a4;
    }
    else
    {
      v12 = v5 < v11;
    }
    if ( !v12 )
    {
LABEL_7:
      if ( v8 != v11 )
      {
        v13 = v8 < v11;
        goto LABEL_9;
      }
      if ( v8 != *(_QWORD *)a3 )
      {
        if ( v8 == *(_QWORD *)a4 )
          goto LABEL_10;
        v13 = *(_QWORD *)a3 < *(_QWORD *)a4;
LABEL_9:
        if ( !v13 )
        {
LABEL_10:
          v27 = *a1;
          v30 = a1[1];
          v33 = a1[2];
          v36 = a1[3];
          v14 = *(_DWORD *)(a3 + 4);
          v15 = *(_DWORD *)(a3 + 8);
          v16 = *(_DWORD *)(a3 + 12);
          *a1 = *(_DWORD *)a3;
          a1[1] = v14;
          a1[2] = v15;
          a1[3] = v16;
          *(_DWORD *)a3 = v27;
          *(_DWORD *)(a3 + 4) = v30;
          *(_DWORD *)(a3 + 8) = v33;
          *(_DWORD *)(a3 + 12) = v36;
          return v27;
        }
      }
LABEL_17:
      v28 = *a1;
      v31 = a1[1];
      v34 = a1[2];
      v37 = a1[3];
      v21 = *(_DWORD *)(a4 + 4);
      v22 = *(_DWORD *)(a4 + 8);
      v23 = *(_DWORD *)(a4 + 12);
      *a1 = *(_DWORD *)a4;
      a1[1] = v21;
      a1[2] = v22;
      a1[3] = v23;
      *(_DWORD *)a4 = v28;
      *(_DWORD *)(a4 + 4) = v31;
      *(_DWORD *)(a4 + 8) = v34;
      *(_DWORD *)(a4 + 12) = v37;
      return v28;
    }
    goto LABEL_20;
  }
LABEL_11:
  v18 = *(_QWORD *)(a4 + 8);
  if ( v8 != v18 )
  {
    v19 = v8 < v18;
    goto LABEL_13;
  }
  if ( v18 == *(_QWORD *)a3 )
    goto LABEL_10;
  if ( v18 != *(_QWORD *)a4 )
  {
    v19 = *(_QWORD *)a3 < *(_QWORD *)a4;
LABEL_13:
    if ( v19 )
      goto LABEL_10;
  }
  if ( v5 == v18 )
  {
    if ( v5 == *(_QWORD *)a2 )
      goto LABEL_17;
    if ( v5 == *(_QWORD *)a4 )
      goto LABEL_20;
    v20 = *(_QWORD *)a2 < *(_QWORD *)a4;
  }
  else
  {
    v20 = v5 < v18;
  }
  if ( v20 )
    goto LABEL_17;
LABEL_20:
  v29 = *a1;
  v32 = a1[1];
  v35 = a1[2];
  v38 = a1[3];
  v24 = *(_DWORD *)(a2 + 4);
  v25 = *(_DWORD *)(a2 + 8);
  v26 = *(_DWORD *)(a2 + 12);
  *a1 = *(_DWORD *)a2;
  a1[1] = v24;
  a1[2] = v25;
  a1[3] = v26;
  *(_DWORD *)a2 = v29;
  *(_DWORD *)(a2 + 4) = v32;
  *(_DWORD *)(a2 + 8) = v35;
  *(_DWORD *)(a2 + 12) = v38;
  return v29;
}
