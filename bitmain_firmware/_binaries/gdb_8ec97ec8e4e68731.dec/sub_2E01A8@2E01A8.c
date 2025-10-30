_BYTE *__fastcall sub_2E01A8(int a1, int a2, int a3, int a4)
{
  int v8; // r0
  int v9; // r1
  int v10; // r6
  _BYTE *v11; // r4
  char v12; // r3
  bool v13; // zf
  char v14; // r0
  char v15; // r2
  _BYTE *v17; // [sp+1Ch] [bp-4h] BYREF

  v8 = sub_2FC920(*(_DWORD *)(a2 + 28), a4, 0);
  v9 = a1;
  if ( v8 )
    *(_BYTE *)(v8 + 12) = 0;
  v17 = (_BYTE *)v8;
  v10 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 444);
  if ( !sub_2FD6C4(a2, v9, a4, 2, a3, 0, 0, 0, *(_BYTE *)(v10 + 464) & 1, (int)&v17) )
    return 0;
  v11 = v17;
  if ( !v17 )
    sub_2A6BBC("elflink.c", 133);
  v12 = v11[49];
  v11[48] = 1;
  v13 = (v12 & 3) == 1;
  if ( (v12 & 3) != 1 )
    v12 &= 0xFCu;
  v14 = v11[52] & 0xFE;
  if ( !v13 )
    v12 |= 2u;
  v15 = v11[13] | 4;
  v11[51] |= 2u;
  v11[52] = v14;
  v11[13] = v15;
  if ( !v13 )
    v11[49] = v12;
  (*(void (__fastcall **)(int, _BYTE *, int))(v10 + 224))(a2, v11, 1);
  return v11;
}
