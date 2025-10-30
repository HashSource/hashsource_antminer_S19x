int __fastcall sub_1A69E0(int a1, intptr_t delta)
{
  char *v3; // r0
  int v4; // r3
  int v5; // r2
  char v6; // r3
  __int64 v8; // r2
  int v9; // r2
  char v10; // r3
  char *v11; // r0
  int v12; // r3
  __int64 v13; // r0
  __int64 v14; // [sp+0h] [bp-24h] BYREF
  __int64 v15; // [sp+8h] [bp-1Ch] BYREF
  __int64 v16; // [sp+14h] [bp-10h] BYREF
  int v17; // [sp+1Ch] [bp-8h] BYREF

  *(_BYTE *)a1 = delta;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  if ( !delta )
  {
    v11 = (char *)sbrk(0);
    v12 = dword_48A58C;
    *(_BYTE *)(a1 + 1) |= 2u;
    *(_DWORD *)(a1 + 24) = &v11[-v12];
    sub_99784(&v15);
    *(_QWORD *)(a1 + 8) = v15;
    sub_33B25C(&v14);
    v13 = v14;
    *(_BYTE *)(a1 + 1) |= 1u;
    *(_QWORD *)(a1 + 16) = v13;
    goto LABEL_8;
  }
  if ( dword_487A98 )
  {
    v3 = (char *)sbrk(0);
    v4 = dword_48A58C;
    *(_BYTE *)(a1 + 1) |= 2u;
    v5 = dword_487A94;
    *(_DWORD *)(a1 + 24) = &v3[-v4];
    if ( !v5 )
      goto LABEL_4;
LABEL_7:
    sub_99784(&v15);
    *(_QWORD *)(a1 + 8) = v15;
    sub_33B25C(&v14);
    v8 = v14;
    *(_BYTE *)(a1 + 1) |= 1u;
    *(_QWORD *)(a1 + 16) = v8;
    v6 = dword_487A9C;
    if ( !dword_487A9C )
      goto LABEL_5;
    goto LABEL_8;
  }
  *(_BYTE *)(a1 + 1) &= ~2u;
  if ( dword_487A94 )
    goto LABEL_7;
LABEL_4:
  *(_BYTE *)(a1 + 1) &= ~1u;
  v6 = dword_487A9C;
  if ( !dword_487A9C )
  {
LABEL_5:
    *(_BYTE *)(a1 + 1) = *(_BYTE *)(a1 + 1) & 0xFB | (4 * (v6 & 1));
    sub_25929C();
    return a1;
  }
LABEL_8:
  sub_1A5618((int *)&v16, (int *)&v16 + 1, &v17);
  v9 = v17;
  v10 = *(_BYTE *)(a1 + 1) | 4;
  *(_QWORD *)(a1 + 28) = v16;
  *(_BYTE *)(a1 + 1) = v10;
  *(_DWORD *)(a1 + 36) = v9;
  sub_25929C();
  return a1;
}
