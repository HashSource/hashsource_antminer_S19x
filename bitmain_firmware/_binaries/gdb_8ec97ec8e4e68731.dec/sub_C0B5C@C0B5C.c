int __fastcall sub_C0B5C(char *a1, __int64 a2)
{
  int v3; // r12
  signed int v6; // r5
  __int64 v7; // r8
  char v9; // r9
  int v10; // r3
  int v11; // r2
  int v12; // r3
  int result; // r0
  unsigned int v14; // r2
  int v15; // r1

  v3 = 0;
  v6 = 8;
  do
  {
    LODWORD(v7) = 1 << (v6 - 1);
    HIDWORD(v7) = (1 << (v6 - 33)) | (1u >> (33 - v6));
    if ( a2 < v7 && a2 >= -v7 )
      break;
    ++v3;
    v6 *= 2;
  }
  while ( v3 != 3 );
  v9 = asc_37C1F0[4 * v3];
  sub_C0878(a1, 1);
  v10 = *((_DWORD *)a1 + 1);
  v11 = *(_DWORD *)a1;
  *((_DWORD *)a1 + 1) = v10 + 1;
  *(_BYTE *)(v11 + v10) = v9;
  sub_C0878(a1, v6 >> 3);
  v12 = (v6 >> 3) - 1;
  result = HIDWORD(a2);
  v14 = a2;
  do
  {
    v15 = *(_DWORD *)a1 + v12--;
    *(_BYTE *)(v15 + *((_DWORD *)a1 + 1)) = v14;
    v14 = (v14 >> 8) | (result << 24);
    result >>= 8;
  }
  while ( v12 != -1 );
  *((_DWORD *)a1 + 1) += v6 >> 3;
  if ( ((v6 <= 63) & (HIDWORD(a2) >> 31)) != 0 )
    return (int)sub_C08B0(a1, 22, v6);
  return result;
}
