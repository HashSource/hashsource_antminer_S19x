int __fastcall sub_ED0D8(int a1, _DWORD *a2)
{
  int result; // r0
  int v5; // r12
  int v6; // lr
  int v7; // r5
  __int16 *v8; // r3
  int v9; // r3
  int v10; // r1
  bool v11; // r8
  int v12; // r2
  int v13; // r2
  int v14; // r10
  int v15; // r2
  int v16; // [sp+4h] [bp-8h] BYREF

  *a2 = 0;
  a2[1] = 0;
  a2[2] = 0;
  v16 = 0;
  result = sub_173244(a1, &v16);
  v5 = *(_DWORD *)(a1 + 24);
  v6 = *(__int16 *)(v5 + 4);
  v7 = *(_WORD *)(v5 + 2) & 0x380;
  if ( v7 == 128 )
    v8 = *(__int16 **)(v5 + 28);
  else
    v8 = &word_3B4A2C;
  v9 = *v8;
  if ( v9 < v6 )
  {
    v10 = 24 * v9;
    v11 = v16 == a1;
    while ( 1 )
    {
      v12 = result == v9 && v11;
      if ( v12 || (*(_BYTE *)(*(_DWORD *)(v5 + 24) + v10 + 8) & 1) != 0 )
        goto LABEL_9;
      if ( v7 != 128 )
        break;
      v13 = *(_DWORD *)(v5 + 28);
      if ( (__int16 *)v13 == &word_3B4A2C )
        break;
      v14 = *(_DWORD *)(v13 + 24);
      if ( v14 && (((int)*(unsigned __int8 *)(v14 + (v9 >> 3)) >> (v9 & 7)) & 1) != 0 )
      {
        ++v9;
        v10 += 24;
        ++a2[2];
        if ( v9 == v6 )
          return result;
      }
      else
      {
        v15 = *(_DWORD *)(v13 + 20);
        if ( !v15 || (((int)*(unsigned __int8 *)(v15 + (v9 >> 3)) >> (v9 & 7)) & 1) == 0 )
          break;
        ++a2[1];
LABEL_9:
        ++v9;
        v10 += 24;
        if ( v9 == v6 )
          return result;
      }
    }
    ++*a2;
    goto LABEL_9;
  }
  return result;
}
