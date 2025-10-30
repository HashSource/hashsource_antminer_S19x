int __fastcall sub_DDC00(int a1, _DWORD *a2)
{
  int v2; // r5
  int v3; // r4
  _DWORD *v5; // r6
  int v6; // r10
  int v7; // r11
  int v8; // r4
  int v9; // r8
  int v10; // r1
  int v11; // r9
  int v12; // r4
  int v13; // r10
  int v14; // r11
  int v15; // r4
  int v16; // r8
  int v17; // r1
  int v18; // r9
  int v19; // r0
  int v20; // r0
  int result; // r0
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // [sp+4h] [bp-8h]

  v2 = a1 + 168;
  v3 = *(_DWORD *)(a1 + 192);
  v25 = a1 - 48;
  v5 = a2 + 6;
  if ( v3 )
  {
LABEL_2:
    v6 = v3;
    v7 = 0;
    v8 = 1;
    v9 = 65537;
    while ( 1 )
    {
      sub_18959C(v9, v6);
      v11 = v10;
      if ( !v10 )
        break;
      v19 = v7 - v8 * sub_189308(v9 - v10, v6);
      v9 = v6;
      v7 = v8;
      v6 = v11;
      v8 = v19;
    }
    v3 = v8 + (v8 < 0 ? 0x10001 : 0);
    goto LABEL_5;
  }
  while ( 1 )
  {
LABEL_5:
    *(v5 - 6) = v3;
    *(v5 - 5) = (unsigned __int16)-*(_WORD *)(v2 + 32);
    *(v5 - 4) = (unsigned __int16)-*(_WORD *)(v2 + 28);
    v12 = *(_DWORD *)(v2 + 36);
    if ( v12 )
    {
      v13 = *(_DWORD *)(v2 + 36);
      v14 = 0;
      v15 = 1;
      v16 = 65537;
      while ( 1 )
      {
        sub_18959C(v16, v13);
        v18 = v17;
        if ( !v17 )
          break;
        v20 = v14 - v15 * sub_189308(v16 - v17, v13);
        v16 = v13;
        v14 = v15;
        v13 = v18;
        v15 = v20;
      }
      v12 = v15 + (v15 < 0 ? 0x10001 : 0);
    }
    v2 -= 24;
    *(v5 - 3) = v12;
    v5 += 6;
    if ( v2 == v25 )
      break;
    *(v5 - 8) = *(_DWORD *)(v2 + 40);
    *(v5 - 7) = *(_DWORD *)(v2 + 44);
    v3 = *(_DWORD *)(v2 + 24);
    if ( v3 )
      goto LABEL_2;
  }
  result = a2[1];
  v22 = a2[2];
  v23 = a2[49];
  v24 = a2[50];
  a2[2] = result;
  a2[1] = v22;
  a2[50] = v23;
  a2[49] = v24;
  return result;
}
