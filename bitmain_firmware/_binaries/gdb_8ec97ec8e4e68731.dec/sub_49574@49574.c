int __fastcall sub_49574(int result, int *a2, int a3)
{
  int v3; // r3
  int v4; // r7
  int v5; // r11
  int *v6; // r10
  int *v7; // r6
  __int64 v8; // r2
  unsigned int v9; // r12
  int i; // lr
  __int64 v11; // r0
  int *v12; // r8
  _BOOL4 v13; // r1
  __int64 v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  __int64 v18; // r0
  int v19; // r5
  int v20; // r6
  int *v22; // r5
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // [sp+0h] [bp-58h]
  int v27; // [sp+10h] [bp-48h]
  int v28; // [sp+18h] [bp-40h]
  int v29; // [sp+1Ch] [bp-3Ch]
  int v30; // [sp+20h] [bp-38h]
  int v31; // [sp+20h] [bp-38h]
  int v32; // [sp+24h] [bp-34h]
  int v33; // [sp+24h] [bp-34h]
  int v34; // [sp+28h] [bp-30h]
  int v35; // [sp+28h] [bp-30h]
  int v36; // [sp+2Ch] [bp-2Ch]
  int v37; // [sp+2Ch] [bp-2Ch]

  v3 = (int)a2 - result;
  if ( (int)a2 - result > 256 )
  {
    v4 = result;
    v5 = a3;
    if ( !a3 )
    {
      v12 = a2;
      goto LABEL_22;
    }
    v6 = a2;
    v7 = a2;
    v28 = result + 16;
    v29 = result + 32;
    while ( 1 )
    {
      LOBYTE(v26) = 0;
      --v5;
      sub_49C84(v4, v28, v4 + 16 * ((int)((((int)v7 - v4) >> 4) + (((unsigned int)v7 - v4) >> 31)) >> 1), v6 - 4, v26);
      v8 = *(_QWORD *)(v4 + 8);
      v9 = (unsigned int)v6;
      for ( i = v29; ; i += 16 )
      {
        v11 = *(_QWORD *)(i - 8);
        v7 = (int *)(i - 16);
        v12 = (int *)(i - 16);
        if ( v11 != v8 )
        {
          v13 = v11 < v8;
          goto LABEL_8;
        }
        v18 = *(_QWORD *)(i - 16);
        if ( v18 != v8 )
          break;
LABEL_5:
        ;
      }
      if ( *(_QWORD *)v4 == v8 )
        goto LABEL_11;
      v13 = v18 < *(_QWORD *)v4;
LABEL_8:
      if ( v13 )
        goto LABEL_5;
      do
      {
LABEL_11:
        while ( 1 )
        {
          v9 -= 16;
          v14 = *(_QWORD *)(v9 + 8);
          if ( v14 == v8 )
            break;
          if ( v8 >= v14 )
            goto LABEL_15;
        }
      }
      while ( *(_QWORD *)v4 == v8 || *(_QWORD *)v9 != v8 && *(_QWORD *)v4 < *(_QWORD *)v9 );
LABEL_15:
      if ( (unsigned int)v7 < v9 )
      {
        v30 = *v7;
        v32 = *(_DWORD *)(i - 12);
        v34 = *(_DWORD *)(i - 8);
        v36 = *(_DWORD *)(i - 4);
        v15 = *(_DWORD *)(v9 + 4);
        v16 = *(_DWORD *)(v9 + 8);
        v17 = *(_DWORD *)(v9 + 12);
        *v7 = *(_DWORD *)v9;
        *(_DWORD *)(i - 12) = v15;
        *(_DWORD *)(i - 8) = v16;
        *(_DWORD *)(i - 4) = v17;
        *(_DWORD *)v9 = v30;
        *(_DWORD *)(v9 + 4) = v32;
        *(_DWORD *)(v9 + 8) = v34;
        *(_DWORD *)(v9 + 12) = v36;
        v8 = *(_QWORD *)(v4 + 8);
        goto LABEL_5;
      }
      result = sub_49574(i - 16, v6, v5);
      v3 = (int)v7 - v4;
      if ( (int)v7 - v4 <= 256 )
        return result;
      v6 = v7;
      if ( !v5 )
      {
LABEL_22:
        v19 = v3 >> 4;
        v20 = ((v3 >> 4) - 2) >> 1;
        do
        {
          LOBYTE(v27) = 0;
          sub_4A05C(
            v4,
            v20,
            v19,
            *(_DWORD *)(v4 + 16 * v20 + 12),
            *(_DWORD *)(v4 + 16 * v20),
            *(_DWORD *)(v4 + 16 * v20 + 4),
            *(_DWORD *)(v4 + 16 * v20 + 8),
            *(_DWORD *)(v4 + 16 * v20 + 12),
            v27);
        }
        while ( v20-- != 0 );
        v22 = v12;
        do
        {
          v22 -= 4;
          v31 = *v22;
          v33 = v22[1];
          v35 = v22[2];
          v37 = v22[3];
          v23 = *(_DWORD *)(v4 + 4);
          v24 = *(_DWORD *)(v4 + 8);
          v25 = *(_DWORD *)(v4 + 12);
          *v22 = *(_DWORD *)v4;
          v22[1] = v23;
          v22[2] = v24;
          v22[3] = v25;
          LOBYTE(v27) = 0;
          result = sub_4A05C(v4, 0, ((int)v22 - v4) >> 4, v37, v31, v33, v35, v37, v27);
        }
        while ( (int)v22 - v4 > 16 );
        return result;
      }
    }
  }
  return result;
}
