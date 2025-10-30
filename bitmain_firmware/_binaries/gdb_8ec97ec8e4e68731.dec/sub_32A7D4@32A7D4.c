int __fastcall sub_32A7D4(int a1, int a2, int a3, int *a4)
{
  __int64 v4; // r6
  int v6; // r12
  unsigned __int16 *v7; // r1
  unsigned __int16 *v8; // r0
  unsigned int v9; // r12
  int v10; // r2
  char *v11; // r8
  unsigned int v12; // r2
  int v13; // r12
  int v14; // r2
  unsigned int v15; // r9
  int v16; // r2
  _WORD *v17; // r2
  unsigned int v18; // r10
  unsigned int v19; // r3
  unsigned int v20; // r12
  int v22; // lr
  unsigned __int16 *v23; // r8
  unsigned int v24; // r5
  __int16 v25; // r0
  __int16 v26; // r1
  int v27; // r1
  unsigned __int16 *v28; // [sp+4h] [bp-20h]
  unsigned __int16 *v29; // [sp+8h] [bp-1Ch]
  int v30; // [sp+10h] [bp-14h]
  int *v31; // [sp+18h] [bp-Ch]
  int v32; // [sp+1Ch] [bp-8h]

  if ( *(_DWORD *)(a2 + 4)
    || (*(_BYTE *)(a2 + 8) & 0x70) != 0
    || (*(_BYTE *)(a2 + 8) & 0x80) != 0
    || *(_DWORD *)(a3 + 4)
    || (*(_BYTE *)(a3 + 8) & 0x70) != 0
    || (*(_BYTE *)(a3 + 8) & 0x80) != 0 )
  {
LABEL_31:
    *(_DWORD *)(a1 + 4) = 0;
    *(_WORD *)(a1 + 10) = 0;
    *(_DWORD *)a1 = 1;
    *(_BYTE *)(a1 + 8) = 32;
    sub_3313E4(a4);
  }
  else
  {
    v6 = *(_DWORD *)a2;
    v7 = (unsigned __int16 *)(a2 + 10);
    v8 = (unsigned __int16 *)(a3 + 10);
    v30 = a1 + 10;
    if ( v6 <= 49 )
    {
      v9 = 2 * (*((unsigned __int8 *)&dword_438B18[5] + v6) + 0x7FFFFFFF);
    }
    else
    {
      v4 = 2863311531LL * (unsigned int)(v6 + 2);
      v9 = (HIDWORD(v4) & 0xFFFFFFFE) - 2;
    }
    v10 = *(_DWORD *)a3;
    v11 = (char *)v7 + v9;
    if ( v10 > 49 )
    {
      v4 = 2863311531LL * (unsigned int)(v10 + 2);
      v12 = (HIDWORD(v4) & 0xFFFFFFFE) - 2;
    }
    else
    {
      v12 = 2 * (*((unsigned __int8 *)&dword_438B18[5] + v10) + 0x7FFFFFFF);
    }
    v13 = *a4;
    v28 = (unsigned __int16 *)((char *)v8 + v12);
    if ( *a4 <= 49 )
    {
      v14 = 35608;
    }
    else
    {
      v14 = -1431655765;
      LODWORD(v4) = v13 + 2;
    }
    if ( v13 <= 49 )
    {
      HIWORD(v14) = 67;
      v14 = *(unsigned __int8 *)(v14 + v13 + 20);
    }
    else
    {
      v4 = (unsigned int)v4 * (unsigned __int64)(unsigned int)v14;
    }
    if ( v13 > 49 )
      v14 = HIDWORD(v4) >> 1;
    v15 = a1 + 10 + 2 * (v14 + 0x7FFFFFFF);
    v16 = v13 - 3 * (v14 - 1);
    if ( a1 + 10 <= v15 )
    {
      v32 = v16 - 1;
      v17 = (_WORD *)(a1 + 10);
      v18 = (unsigned int)v11;
      v31 = a4;
      while ( (unsigned int)v7 > v18 )
      {
        if ( v8 <= v28 )
        {
          v19 = 0;
LABEL_23:
          v20 = *v8;
          goto LABEL_24;
        }
        *v17 = 0;
LABEL_25:
        ++v17;
        ++v7;
        ++v8;
        if ( (unsigned int)v17 > v15 )
        {
          v27 = ((int)v17 - v30) >> 1;
          goto LABEL_44;
        }
      }
      v19 = *v7;
      if ( v8 <= v28 )
        goto LABEL_23;
      v20 = 0;
LABEL_24:
      *v17 = 0;
      if ( v20 | v19 )
      {
        v22 = 0;
        v23 = v7;
        v29 = v8;
        do
        {
          if ( ((v19 ^ v20) & 1) != 0 )
          {
            WORD2(v4) = *v17;
            LODWORD(v4) = dword_438D00[v22];
          }
          v24 = v19 / 0xA;
          if ( ((v19 ^ v20) & 1) != 0 )
            *v17 = v4 + WORD2(v4);
          LOWORD(v4) = 5 * v24;
          v25 = v19 % 0xA;
          v19 = (unsigned __int16)v24;
          v26 = v20 % 0xA;
          v20 = (unsigned __int16)(v20 / 0xA);
          if ( (unsigned __int16)(v26 | v25) > 1u )
          {
            a4 = v31;
            goto LABEL_31;
          }
          if ( v17 == (_WORD *)v15 && v32 == v22 )
            break;
          ++v22;
        }
        while ( v22 != 3 );
        v8 = v29;
        v7 = v23;
      }
      goto LABEL_25;
    }
    v27 = 0;
LABEL_44:
    *(_DWORD *)a1 = sub_327CA8(v30, v27);
    *(_DWORD *)(a1 + 4) = 0;
    *(_BYTE *)(a1 + 8) = 0;
  }
  return a1;
}
