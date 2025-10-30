int __fastcall sub_BD888(int a1, int a2)
{
  int v2; // r2
  __int16 *v4; // r3
  int v5; // r8
  __int64 v6; // r0
  int v7; // r3
  int v8; // r6
  int v9; // r4
  int *v10; // r9
  int v11; // r5
  bool v12; // zf
  int v13; // r10
  int v14; // r5
  int v15; // r3
  int v16; // r0
  __int64 v17; // r0
  int v19; // [sp+0h] [bp-10h] BYREF
  int v20; // [sp+4h] [bp-Ch]
  unsigned __int8 v21; // [sp+8h] [bp-8h]
  int v22; // [sp+Ch] [bp-4h]

  v2 = *(_DWORD *)(a2 + 24);
  if ( (*(_WORD *)(v2 + 2) & 0x380) == 0x80 )
    v4 = *(__int16 **)(v2 + 28);
  else
    v4 = &word_3B4A2C;
  v5 = *v4;
  v6 = sub_171258(a2);
  v7 = *(_DWORD *)(v6 + 24);
  v8 = v6;
  v9 = *(__int16 *)(v7 + 4) - 1;
  if ( v5 <= v9 )
  {
    v10 = (int *)(v6 + 24);
    v11 = 24 * v9;
    while ( 1 )
    {
      LODWORD(v6) = sub_174F0C(*(_DWORD *)(v7 + 24) + v11, HIDWORD(v6));
      if ( !(_DWORD)v6 )
        goto LABEL_6;
      LODWORD(v6) = sub_BD7D0(a1, (int)&v19, v10, v9);
      v13 = v21;
      if ( v21 )
        goto LABEL_6;
      if ( v19 == 1 )
        break;
      LODWORD(v6) = a1;
      if ( v19 != 2 )
        goto LABEL_6;
      v11 -= 24;
      LODWORD(v6) = sub_C10E4(a1, v22);
      v12 = v5 == v9--;
      if ( v12 )
        goto LABEL_14;
LABEL_7:
      v7 = *(_DWORD *)(v8 + 24);
    }
    v17 = sub_171258(v20);
    sub_C0B5C(a1, HIDWORD(v17), *(_DWORD *)(v20 + 20), v13);
    LODWORD(v6) = sub_C09B8(a1, 12);
LABEL_6:
    v12 = v5 == v9;
    v11 -= 24;
    --v9;
    if ( v12 )
      goto LABEL_14;
    goto LABEL_7;
  }
LABEL_14:
  if ( v5 > 0 )
  {
    v14 = 0;
    do
    {
      v15 = *(_DWORD *)(*(_DWORD *)(v8 + 24) + 24) + v14;
      v14 += 24;
      v16 = sub_171258(*(_DWORD *)(v15 + 12));
      LODWORD(v6) = sub_BD888(a1, v16);
    }
    while ( v14 != 24 * v5 );
  }
  return v6;
}
