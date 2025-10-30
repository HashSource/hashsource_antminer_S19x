int __fastcall sub_173A80(_DWORD *a1, _DWORD *a2, int *a3, int a4, int a5, int a6, int a7)
{
  int v10; // r9
  int v11; // r0
  int v12; // r3
  int v13; // r6
  __int16 *v15; // r2
  int v16; // r5
  int v17; // r4
  int v18; // r7
  int v19; // r11
  __int16 *v20; // r2
  int v21; // r1
  _BOOL4 v22; // r2

  v10 = sub_171258(a1);
  v11 = sub_171258(a2);
  v12 = *(_DWORD *)(v11 + 24);
  if ( (*(_WORD *)(v12 + 2) & 0x380) != 0x80 )
    return 0;
  v15 = *(__int16 **)(v12 + 28);
  if ( v15 == &word_3B4A2C || *v15 <= 0 )
    return 0;
  v16 = v11;
  v13 = 0;
  v17 = 0;
  do
  {
    v18 = sub_171258(*(_DWORD **)(*(_DWORD *)(v12 + 24) + 24 * v17 + 12));
    v19 = sub_FC59C(v16, v17, a4, a6, a5, a5 >> 31, a6, a7);
    if ( sub_173904(v10, v18) )
    {
      if ( *a3 == -1 )
      {
        *a3 = v19;
        v13 = 1;
      }
      else if ( *a3 != v19 )
      {
        ++v13;
      }
    }
    else
    {
      v13 += sub_173A80(v10, v18, a3, a4, a5 + v19, a6, a7);
    }
    v12 = *(_DWORD *)(v16 + 24);
    if ( (*(_WORD *)(v12 + 2) & 0x380) != 0x80 )
      break;
    v20 = *(__int16 **)(v12 + 28);
    ++v17;
    if ( v20 == &word_3B4A2C )
      break;
    v21 = *v20;
    v22 = v13 > 1;
    if ( v21 <= v17 )
      v22 = 1;
  }
  while ( !v22 );
  return v13;
}
