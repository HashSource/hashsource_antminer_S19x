int __fastcall sub_138840(int result, const char *a2, int a3, int a4, int a5)
{
  _DWORD *v5; // r4
  _DWORD *v6; // r0
  int v7; // r1
  int v8; // r12
  const char *v9; // r2
  int v10; // [sp+Ch] [bp-Ch] BYREF
  int v11; // [sp+10h] [bp-8h] BYREF
  const char *v12; // [sp+14h] [bp-4h] BYREF

  v5 = (_DWORD *)result;
  v12 = a2;
  v11 = a3;
  v10 = a4;
  if ( (unsigned int)dword_4872E4 > 1 )
  {
    v6 = (_DWORD *)sub_242FC8(result);
    result = sub_2594B0(*v6, "Adding file %u: %s\n", -1431655765 * ((v5[13] - v5[12]) >> 3) + 1, v12);
  }
  v7 = v5[13];
  if ( v7 == v5[14] )
    return sub_148CA4(v5 + 12, v7, &v12, &v11, &v10, &a5);
  if ( v7 )
  {
    v8 = v10;
    result = a5;
    v9 = v12;
    *(_DWORD *)(v7 + 4) = v11;
    *(_DWORD *)(v7 + 8) = v8;
    *(_DWORD *)(v7 + 12) = result;
    *(_DWORD *)v7 = v9;
    *(_BYTE *)(v7 + 16) = 0;
    *(_DWORD *)(v7 + 20) = 0;
  }
  v5[13] = v7 + 24;
  return result;
}
