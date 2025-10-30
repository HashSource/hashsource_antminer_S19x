_DWORD *__fastcall sub_11CD2C(_BYTE *a1, int *a2, _DWORD *a3)
{
  int v3; // r7
  char *v4; // lr
  unsigned int v5; // r4
  _DWORD *v6; // r8
  int v7; // r5
  int v8; // r12
  char v9; // t1
  _DWORD *result; // r0
  int v11; // lr
  int v12; // r3
  const char *v13; // r2
  unsigned int v14; // [sp+8h] [bp-Ch]

  v4 = a1 + 1;
  v5 = *a1 & 0x7F;
  if ( (*a1 & 0x80) == 0 )
    v3 = 1;
  v6 = *(_DWORD **)(*a3 + 36);
  if ( (*a1 & 0x80) != 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = *v4++;
      v8 += 7;
      v3 = v4 - a1;
      v14 = v9 & 0x7F;
      v5 |= v14 << v8;
      v7 |= (v14 << (v8 - 32)) | (v14 >> (32 - v8));
    }
    while ( v9 < 0 );
  }
  *a2 = v3;
  if ( !v5 )
    return 0;
  result = *(_DWORD **)(*(_DWORD *)(a3[20] + 48) + 4 * (v5 % 0x79));
  if ( !result )
  {
LABEL_12:
    v11 = a3[34];
    v12 = a3[8];
    v13 = "CU";
    if ( (*(_BYTE *)(v11 + 10) & 4) != 0 )
      v13 = "TU";
    sub_946E0("Dwarf Error: Could not find abbrev number %d in %s at offset 0x%x [in module %s]", v5, v13, v12, *v6);
  }
  while ( v5 != *result )
  {
    result = (_DWORD *)result[4];
    if ( !result )
      goto LABEL_12;
  }
  return result;
}
