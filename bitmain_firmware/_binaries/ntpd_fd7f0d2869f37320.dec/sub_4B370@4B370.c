int __fastcall sub_4B370(int a1, int a2)
{
  int v3; // r7
  int v4; // r4
  int v5; // r2
  int result; // r0
  int v7; // r1
  __int16 v8; // r3
  int v9; // r2
  __int16 v10; // r3
  int v11; // r10
  _DWORD *v12; // r11
  _WORD *v13; // r8
  __int16 *v14; // r3
  int v15; // r1
  __int16 v16; // r2
  int v17; // r2
  __int16 v18; // r3
  __int16 v19; // r3
  __int16 *v20; // [sp+4h] [bp-10h]

  v3 = *(_DWORD *)(a2 + 84);
  v4 = *(_DWORD *)v3;
  if ( !*(_BYTE *)(*(_DWORD *)v3 + 14) && *(_BYTE *)v4 == 100 )
  {
    v5 = *(__int16 *)(v4 + 500);
    if ( word_99140[v5] )
    {
      result = v4 + 496;
      v7 = word_99140[*(__int16 *)(v4 + 500)];
      v8 = *(_WORD *)(v4 + 496) + 1;
      *(_WORD *)(v4 + 496) = v8;
      if ( v7 <= v8 )
      {
        *(_WORD *)(v4 + 502) = 9;
        result = sub_4A8B8(a2, v3, v4);
        v5 = *(__int16 *)(v4 + 500);
      }
    }
    if ( *(_WORD *)((char *)&unk_9914C + v5 * 2) )
    {
      v9 = *(__int16 *)((char *)&unk_9914C + v5 * 2);
      v10 = *(_WORD *)(v4 + 498) + 1;
      *(_WORD *)(v4 + 498) = v10;
      if ( v9 <= v10 )
      {
        *(_WORD *)(v4 + 502) = 10;
        result = sub_4A8B8(a2, v3, v4);
      }
    }
    v11 = *(__int16 *)(v4 + 512);
    if ( word_99158[v11] || word_99164[v11] )
    {
      v12 = *(_DWORD **)(a2 + 84);
      v13 = (_WORD *)*v12;
      v14 = (__int16 *)(*v12 + 512);
      v15 = *v14;
      v16 = word_99158[v15];
      if ( v16 )
      {
        LOWORD(result) = v13[254] + 1;
        v13[254] = result;
        result = (__int16)result;
        if ( v16 <= (__int16)result )
        {
          v13[257] = 14;
          v20 = v14;
          result = sub_4ADCC(a2, (int)v12, v13);
          v15 = *v20;
        }
      }
      if ( word_99164[v15] )
      {
        v17 = (__int16)word_99164[v15];
        v18 = v13[255] + 1;
        v13[255] = v18;
        if ( v17 <= v18 )
        {
          v13[257] = 15;
          result = sub_4ADCC(a2, (int)v12, v13);
        }
      }
      v19 = *(_WORD *)(v4 + 512);
      if ( v11 != v19 )
      {
        if ( !*(_WORD *)(v4 + 512) )
        {
          *(_WORD *)(v4 + 502) = 3;
          return sub_4A8B8(a2, v3, v4);
        }
        if ( v19 == 3 )
        {
          *(_WORD *)(v4 + 502) = 2;
          return sub_4A8B8(a2, v3, v4);
        }
      }
    }
  }
  return result;
}
