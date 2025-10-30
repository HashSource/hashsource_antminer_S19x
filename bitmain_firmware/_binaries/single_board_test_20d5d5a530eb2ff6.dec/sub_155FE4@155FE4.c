int __fastcall sub_155FE4(_DWORD *a1, int a2, int a3, char a4)
{
  __int64 v4; // r4
  unsigned int v5; // lr
  unsigned int *v6; // r12
  __int64 v7; // r2
  __int64 v8; // r6
  bool v9; // cc
  __int64 v10; // r4
  unsigned __int8 *v11; // r9
  bool v12; // zf
  char v13; // r8
  unsigned __int8 v14; // r0
  unsigned __int8 v15; // t1
  bool v16; // cc
  unsigned int v17; // r4
  __int64 v18; // r10
  __int64 v19; // r8
  int v20; // r1
  __int64 v21; // r0
  int v22; // t1
  int v23; // r4
  int v24; // r0
  __int64 v26; // [sp+0h] [bp-34h]
  __int64 v27; // [sp+8h] [bp-2Ch]
  char v28; // [sp+10h] [bp-24h]
  int v29; // [sp+14h] [bp-20h]
  _DWORD *v30; // [sp+18h] [bp-1Ch]
  int v31; // [sp+1Ch] [bp-18h]
  _DWORD *v32; // [sp+20h] [bp-14h]

  v28 = ~a4;
  v30 = a1 - 1;
  v29 = 0;
  v5 = 0;
  v27 = 0;
  v6 = (unsigned int *)&unk_1DBA70;
  v32 = a1 + 15;
  HIDWORD(v7) = 0;
  v8 = 0;
  v31 = 0xFFFFFFF;
  v26 = v4;
  while ( 1 )
  {
    v9 = HIDWORD(v7) > 0x1B;
    if ( HIDWORD(v7) <= 0x1B )
      v9 = v5 > 0x37;
    if ( !v9 )
    {
      v10 = v26;
      v11 = (unsigned __int8 *)(a2 + v5);
      while ( 1 )
      {
        v12 = v5 == 55;
        v13 = BYTE4(v7) - 32;
        v15 = *v11++;
        v14 = v15;
        ++v5;
        if ( v12 )
          break;
        LODWORD(v10) = v14 << SBYTE4(v7);
        LODWORD(v7) = v14 >> (32 - BYTE4(v7));
        HIDWORD(v7) += 8;
        v16 = HIDWORD(v7) > 0x1B;
        if ( HIDWORD(v7) <= 0x1B )
          v16 = v5 > 0x37;
        HIDWORD(v10) = (v14 << v13) | v7;
        v8 |= v10;
        if ( v16 )
        {
          LODWORD(v26) = v10;
          HIDWORD(v26) = (v14 << v13) | v7;
          goto LABEL_13;
        }
      }
      v26 = v10;
      v5 = 56;
      v17 = (unsigned __int8)(v14 & v28);
      LODWORD(v18) = v17 << SBYTE4(v7);
      HIDWORD(v18) = (v17 << v13) | (v17 >> (32 - BYTE4(v7)));
      HIDWORD(v7) += 8;
      v8 |= v18;
    }
LABEL_13:
    if ( v29 == 15 )
    {
      HIDWORD(v21) = v31;
      v23 = v8 >> 28;
      v7 = v27 + (unsigned int)v8;
      LODWORD(v27) = (v7 - (unsigned __int64)(unsigned int)v31) >> 32;
      a1[15] = v8;
      goto LABEL_17;
    }
    ++v29;
    v30[1] = v8 & 0xFFFFFFF;
    v19 = v27 + (v8 & 0xFFFFFFF);
    ++v30;
    v20 = v8 >> 28;
    HIDWORD(v8) >>= 28;
    HIDWORD(v7) -= 28;
    LODWORD(v8) = v20;
    v21 = v19 - *v6;
    v27 = SHIDWORD(v21);
    LODWORD(v7) = v32;
    if ( v32 == v30 )
      break;
    v22 = v6[1];
    ++v6;
    v31 = v22;
  }
  v23 = v8;
LABEL_17:
  v24 = -1;
  if ( !a3 )
    v24 = ~sub_155FBC(a1, SHIDWORD(v21), v7, 0);
  return v24 & (((v23 - 1) & ~v23) >> 31) & ~((int)((v27 - 1) & ~(_DWORD)v27) >> 31);
}
