int __fastcall sub_A916C(int a1, int a2, int a3)
{
  int v5; // r0
  int v6; // r0
  int v7; // r6
  int v8; // r3
  int v9; // r3
  int v10; // r8
  int v11; // r9
  int v12; // r7
  __int64 v13; // r0
  __int64 v14; // r4
  __int64 v15; // r0
  int v16; // r5
  int v17; // r0
  int v18; // r3
  int v19; // r2
  int v20; // r3
  int v22; // [sp+8h] [bp-24h]
  __int64 v24; // [sp+18h] [bp-14h] BYREF
  __int64 v25; // [sp+20h] [bp-Ch] BYREF

  v5 = sub_26BC70(a1);
  v6 = sub_A0870(v5);
  v7 = v6;
  if ( a2 <= 0 )
  {
    v20 = 0;
    v19 = 0;
    v16 = 0;
  }
  else
  {
    v8 = *(_DWORD *)(v6 + 24);
    if ( *(_BYTE *)v8 != 2 || (v9 = *(_DWORD *)(v8 + 24), (*(_DWORD *)(v9 + 8) & 0xFFFFFFF0) == 0) )
LABEL_17:
      sub_946E0("attempt to do packed indexing of something other than a packed array");
    v10 = 0;
    v11 = a3 - 4;
    v12 = 0;
    while ( 1 )
    {
      if ( sub_17195C(*(_DWORD *)(v9 + 12), &v24, &v25) < 0 )
      {
        sub_9B398((int)"don't know bounds of array");
        v25 = 0;
        v24 = 0;
      }
      v11 += 4;
      v13 = sub_9B510();
      v14 = v13;
      v22 = v24;
      if ( v13 < v24 || v25 < v13 )
      {
        sub_9B398((int)"packed array index %ld out of bounds", (_DWORD)v13);
        v22 = v24;
      }
      ++v12;
      v15 = *(_QWORD *)(*(_DWORD *)(v7 + 24) + 20);
      v16 = *(_DWORD *)(HIDWORD(v15) + 8) >> 4;
      v10 += v16 * (v14 - v22);
      v17 = sub_A0870(v15);
      v7 = v17;
      if ( a2 == v12 )
        break;
      v18 = *(_DWORD *)(v17 + 24);
      if ( *(_BYTE *)v18 == 2 )
      {
        v9 = *(_DWORD *)(v18 + 24);
        if ( (*(_DWORD *)(v9 + 8) & 0xFFFFFFF0) != 0 )
          continue;
      }
      goto LABEL_17;
    }
    v19 = v10 / 8;
    v20 = v10 & 7;
    if ( v10 <= 0 )
      v20 = -(-v10 & 7);
  }
  return sub_A75F8(a1, 0, v19, v20, v16, v7);
}
