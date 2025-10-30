int __fastcall sub_328804(int a1, int a2, char a3, char a4, int *a5)
{
  unsigned int v6; // r0
  int v7; // r12
  char v8; // r7
  int v9; // r8
  unsigned __int16 *v10; // r6
  int v11; // r4
  unsigned int v12; // r12
  _BOOL4 v13; // r2
  char v16; // r3
  int v17; // r3
  unsigned __int64 v18; // r2
  int v19; // r2
  int v20; // [sp+4h] [bp-10h]
  unsigned __int16 *v21; // [sp+8h] [bp-Ch]
  int v22; // [sp+Ch] [bp-8h]

  *a5 = 0;
  if ( (*(_BYTE *)(a1 + 8) & 0x70) != 0 )
    return a1;
  v6 = *(unsigned __int16 *)(a1 + 10);
  if ( (v6 & 1) != 0 )
    return a1;
  v7 = *(_DWORD *)a1;
  v20 = *(_DWORD *)a1;
  if ( v6 )
  {
    v22 = *(_DWORD *)(a1 + 4);
    v21 = (unsigned __int16 *)(a1 + 10);
    if ( v20 <= 1 || 10 * ((26215 * (v6 >> 1)) >> 17) != v6 )
      return a1;
  }
  else
  {
    if ( v7 == 1 )
    {
      *(_DWORD *)(a1 + 4) = 0;
      return a1;
    }
    v22 = *(_DWORD *)(a1 + 4);
    v21 = (unsigned __int16 *)(a1 + 10);
    if ( v7 <= 1 )
      return a1;
  }
  v8 = (a3 ^ 1) & 1;
  v9 = v22;
  v10 = v21;
  v11 = 0;
  v12 = 1;
  while ( 1 )
  {
    v13 = v9 <= 0 && v8 & 1;
    ++v12;
    if ( v13 && v9++ == 0 )
      break;
    ++v11;
    if ( v12 > 3 )
    {
      ++v10;
      v12 = 1;
    }
    if ( v11 == v20 - 1 || *v10 != dword_438D00[v12] * ((unsigned int)(dword_438B18[v12] * (*v10 >> v12)) >> 17) )
      goto LABEL_23;
  }
  if ( !v11 )
    return a1;
LABEL_23:
  v16 = a4 ^ 1;
  if ( *(_BYTE *)(a2 + 24) )
    v17 = v16 & 1;
  else
    v17 = 0;
  if ( !v17 )
    goto LABEL_27;
  if ( *(_DWORD *)(a2 + 4) - *(_DWORD *)a2 + 1 - v22 <= 0 )
    return a1;
  if ( v11 >= *(_DWORD *)(a2 + 4) - *(_DWORD *)a2 + 1 - v22 )
    v11 = *(_DWORD *)(a2 + 4) - *(_DWORD *)a2 + 1 - v22;
LABEL_27:
  LODWORD(v18) = *(_DWORD *)a1;
  if ( v20 <= 49 )
  {
    HIDWORD(v18) = dword_438B18;
  }
  else
  {
    LODWORD(v18) = *(_DWORD *)a1;
    HIDWORD(v18) = -1431655765;
  }
  if ( v20 <= 49 )
    HIDWORD(v18) += v18;
  else
    LODWORD(v18) = v18 + 2;
  if ( v20 <= 49 )
    a2 = *(unsigned __int8 *)(HIDWORD(v18) + 20);
  else
    v18 = (unsigned int)v18 * (unsigned __int64)HIDWORD(v18);
  if ( v20 > 49 )
    a2 = HIDWORD(v18) >> 1;
  sub_328630(v21, a2, v11);
  v19 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)a1 -= v11;
  *(_DWORD *)(a1 + 4) = v19 + v11;
  *a5 = v11;
  return a1;
}
