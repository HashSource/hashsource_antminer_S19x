void __fastcall sub_49DE0(int a1, int a2)
{
  int v2; // r7
  int v3; // r4
  int v5; // r2
  int v6; // r1
  int v7; // r3
  int v8; // r2
  int v9; // r3
  int v10; // r9
  _DWORD *v11; // r11
  _WORD *v12; // r8
  __int16 *v13; // r3
  int v14; // r1
  int v15; // r0
  int v16; // r2
  int v17; // r2
  int v18; // r3
  int v19; // r3
  __int16 *v20; // [sp+4h] [bp-10h]

  v2 = *(_DWORD *)(a2 + 84);
  v3 = *(_DWORD *)v2;
  if ( !*(_BYTE *)(*(_DWORD *)v2 + 14) && *(_BYTE *)v3 == 100 )
  {
    v5 = 2 * *(__int16 *)(v3 + 500);
    v6 = *(__int16 *)((char *)&unk_97B7C + v5);
    if ( *(_WORD *)((char *)&unk_97B7C + v5) )
    {
      v7 = (__int16)(*(_WORD *)(v3 + 496) + 1);
      *(_WORD *)(v3 + 496) = v7;
      if ( v6 <= v7 )
      {
        *(_WORD *)(v3 + 502) = 9;
        sub_498E8(a2, v2, v3);
        v5 = 2 * *(__int16 *)(v3 + 500);
      }
    }
    v8 = *(__int16 *)((char *)&unk_97B88 + v5);
    if ( v8 )
    {
      v9 = (__int16)(*(_WORD *)(v3 + 498) + 1);
      *(_WORD *)(v3 + 498) = v9;
      if ( v8 <= v9 )
      {
        *(_WORD *)(v3 + 502) = 10;
        sub_498E8(a2, v2, v3);
      }
    }
    v10 = *(__int16 *)(v3 + 512);
    if ( word_97B94[v10] || word_97BA0[v10] )
    {
      v11 = *(_DWORD **)(a2 + 84);
      v12 = (_WORD *)*v11;
      v13 = (__int16 *)(*v11 + 512);
      v14 = *v13;
      v15 = (__int16)word_97B94[v14];
      if ( word_97B94[v14] )
      {
        v16 = (__int16)(v12[254] + 1);
        v12[254] = v16;
        if ( v15 <= v16 )
        {
          v12[257] = 14;
          v20 = v13;
          sub_49B10(a2, (int)v11, v12);
          v14 = *v20;
        }
      }
      v17 = (__int16)word_97BA0[v14];
      if ( word_97BA0[v14] )
      {
        v18 = (__int16)(v12[255] + 1);
        v12[255] = v18;
        if ( v17 <= v18 )
        {
          v12[257] = 15;
          sub_49B10(a2, (int)v11, v12);
        }
      }
      v19 = *(__int16 *)(v3 + 512);
      if ( v10 != v19 )
      {
        if ( !*(_WORD *)(v3 + 512) )
        {
          *(_WORD *)(v3 + 502) = 3;
          goto LABEL_22;
        }
        if ( v19 == 3 )
        {
          *(_WORD *)(v3 + 502) = 2;
LABEL_22:
          sub_498E8(a2, v2, v3);
        }
      }
    }
  }
}
