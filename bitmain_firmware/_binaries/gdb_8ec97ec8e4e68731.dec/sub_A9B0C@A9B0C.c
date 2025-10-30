int __fastcall sub_A9B0C(int a1, int a2, int a3, int a4)
{
  int v5; // r1
  int v7; // r5
  int v9; // r4
  int v10; // r0
  int v11; // r7
  char *v12; // r0
  int v14; // r5
  int v15; // r0
  int v16; // r0
  int v17; // r5
  int v18; // r4
  int v19; // r0
  int v20; // r0
  int v21; // r3
  __int16 v22; // r12

  v5 = *(_DWORD *)(a1 + 24);
  v7 = a1;
  if ( *(_BYTE *)v5 == 1 )
    v9 = *(_DWORD *)(v5 + 20);
  else
    v9 = a1;
  v10 = sub_A0E38(v9, "___XVU");
  if ( v10 )
    v9 = v10;
  v11 = sub_26BC70(a4);
  v12 = sub_A0410(v9);
  if ( !sub_A2974(v11, v12, 0, 1) )
    return v7;
  v14 = sub_26BC70(a4);
  v15 = sub_26E978(a4);
  v16 = sub_A9A34(v9, v14, v15);
  v17 = v16;
  if ( v16 < 0 )
  {
    v20 = sub_16FF58(v9);
    v21 = *(_DWORD *)(v20 + 24);
    v7 = v20;
    v22 = *(_WORD *)(v21 + 2);
    *(_BYTE *)v21 = 3;
    *(_DWORD *)(v21 + 28) = &word_3B4A2C;
    *(_DWORD *)(v21 + 8) = "<empty>";
    *(_DWORD *)(v21 + 2) = v22 & 0xFC7F | 0x80;
    *(_DWORD *)(v21 + 24) = 0;
    *(_DWORD *)(v21 + 12) = 0;
    *(_DWORD *)(v20 + 20) = 0;
    return v7;
  }
  v18 = *(_DWORD *)(v9 + 24);
  v19 = sub_9D140(v18, v16);
  v7 = *(_DWORD *)(*(_DWORD *)(v18 + 24) + 24 * v17 + 12);
  if ( !v19 )
  {
    if ( sub_A0380(v7) >= 0 )
      return sub_AA60C(v7, a2, a3, a4);
    return v7;
  }
  return sub_AA60C(*(_DWORD *)(*(_DWORD *)(v7 + 24) + 20), a2, a3, a4);
}
