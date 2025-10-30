int __fastcall sub_9A2A8(_DWORD *a1, int a2)
{
  int v2; // r5
  unsigned int v3; // r2
  unsigned int v5; // r3
  _DWORD *v7; // r7
  int result; // r0
  __int16 v9; // r3
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r9
  int v14; // r3
  int v15; // lr
  int v16; // r1
  int v17; // r2
  int v18; // r0
  int v19; // r3
  void *v20; // r1
  int v21; // r3
  int v22; // r3
  int v23; // t1
  int v24; // r1
  int v25; // r2
  int v26; // r3
  int v27; // r1
  int i; // r2
  int v29; // r0
  int *v30; // r10
  int *v31; // r12
  int v32; // r0
  int v33; // r1
  int v34; // r2
  int v35; // r3
  int v36; // r1
  int v37; // r2
  int v38; // r2
  int v39; // [sp+14h] [bp-110h] BYREF
  int s2; // [sp+18h] [bp-10Ch] BYREF
  int v41; // [sp+1Ch] [bp-108h]
  _BYTE v42[260]; // [sp+20h] [bp-104h] BYREF

  v2 = *(_DWORD *)(a2 + 16);
  v3 = *(_DWORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 12) + v2 > v3 )
    goto LABEL_5;
  v5 = 17740;
  if ( a1[319] > 0x454Cu )
    v5 = a1[319];
  if ( v3 > v5 )
    goto LABEL_5;
  if ( !v2 )
    return -3;
  v9 = *(_WORD *)(a2 + 8);
  v10 = a1[32];
  v41 = 0;
  s2 = 0;
  v11 = *(_DWORD *)(v10 + 272);
  HIWORD(v41) = HIBYTE(v9);
  HIBYTE(v41) = v9;
  v12 = sub_A8758(v11, &s2);
  v13 = v12;
  if ( v12 )
  {
    v7 = *(_DWORD **)(v12 + 8);
    if ( v7[1] == *(_DWORD *)(a2 + 4) )
      goto LABEL_12;
LABEL_5:
    v7 = 0;
LABEL_6:
    sub_9A264((int)v7);
    return -1;
  }
  v29 = sub_9A0C4(*(_DWORD *)(a2 + 4), 1);
  v7 = (_DWORD *)v29;
  if ( !v29 )
    goto LABEL_5;
  v30 = (int *)a2;
  v31 = (int *)v29;
  do
  {
    v31 += 4;
    v32 = *v30;
    v33 = v30[1];
    v34 = v30[2];
    v35 = v30[3];
    v30 += 4;
    *(v31 - 4) = v32;
    *(v31 - 3) = v33;
    *(v31 - 2) = v34;
    *(v31 - 1) = v35;
  }
  while ( v30 != (int *)(a2 + 32) );
  v36 = v30[1];
  v37 = v30[2];
  *v31 = *v30;
  v31[1] = v36;
  v31[2] = v37;
  v38 = v7[1];
  v7[3] = 0;
  v7[4] = v38;
LABEL_12:
  if ( v7[12] )
  {
    if ( (*(int (__fastcall **)(_DWORD *, int, _DWORD, int, int, _DWORD, int *))(a1[1] + 56))(
           a1,
           22,
           0,
           *(_DWORD *)(a2 + 12) + v7[11],
           v2,
           0,
           &v39) > 0
      && v2 == v39 )
    {
      if ( v2 > 8 )
      {
        *(_BYTE *)(v7[12] + (*(int *)(a2 + 12) >> 3)) |= byte_1A99CC[*(_DWORD *)(a2 + 12) & 7];
        v25 = *(_DWORD *)(a2 + 12);
        LOBYTE(v26) = v2 + v25;
        v27 = (v2 + v25 - 1) >> 3;
        for ( i = (v25 >> 3) + 1; v27 > i; v27 = (v26 - 1) >> 3 )
        {
          *(_BYTE *)(v7[12] + i++) = -1;
          v26 = *(_DWORD *)(a2 + 12) + v2;
        }
        *(_BYTE *)(v7[12] + v27) |= byte_1A99CC[(v26 & 7) + 8];
      }
      else
      {
        v14 = *(_DWORD *)(a2 + 12);
        if ( v14 < v2 + v14 )
        {
          do
          {
            v15 = v14 >> 3;
            v16 = 1 << (v14++ & 7);
            *(_BYTE *)(v7[12] + v15) |= v16;
          }
          while ( *(_DWORD *)(a2 + 12) + v2 > v14 );
        }
      }
      v17 = *(_DWORD *)(a2 + 4);
      if ( v17 )
      {
        v18 = v7[12];
        v19 = (v17 - 1) >> 3;
        if ( *(unsigned __int8 *)(v18 + v19) != byte_1A99CC[(*(_DWORD *)(a2 + 4) & 7) + 8] )
        {
LABEL_22:
          if ( !v13 )
          {
            v20 = (void *)sub_A8668(&s2, v7);
            if ( !v20 || !sub_A8708(*(_DWORD *)(a1[32] + 272), v20) )
              goto LABEL_6;
          }
          return -3;
        }
        v21 = v19 - 1;
        if ( v21 >= 0 )
        {
          if ( *(unsigned __int8 *)(v18 + v21) != 255 )
            goto LABEL_22;
          v22 = v21 + v18;
          while ( v18 != v22 )
          {
            v23 = *(unsigned __int8 *)--v22;
            if ( v23 != 255 )
              goto LABEL_22;
          }
        }
        CRYPTO_free(v18, "ssl/statem/statem_dtls.c", 609);
        v7[12] = 0;
        goto LABEL_22;
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v24 = v2;
      if ( (unsigned int)v2 >= 0x100 )
        v24 = 256;
      if ( (*(int (__fastcall **)(_DWORD *, int, _DWORD, _BYTE *, int, _DWORD, int *))(a1[1] + 56))(
             a1,
             22,
             0,
             v42,
             v24,
             0,
             &v39) <= 0 )
        break;
      v2 -= v39;
      if ( !v2 )
        return -3;
    }
  }
  result = -1;
  if ( !v13 )
    goto LABEL_6;
  return result;
}
