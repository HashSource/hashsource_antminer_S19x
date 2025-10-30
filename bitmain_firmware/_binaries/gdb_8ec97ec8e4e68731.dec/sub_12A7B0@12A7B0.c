int *__fastcall sub_12A7B0(int a1, int *a2, int a3)
{
  _DWORD *v4; // r0
  int v6; // r6
  int *result; // r0
  int v8; // r7
  const char *v9; // r0

  v4 = (_DWORD *)a2[43];
  v6 = *a2;
  if ( v4 && (*(_BYTE *)(a2[34] + 10) & 4) != 0 )
  {
    result = (int *)(*v4 + 32);
  }
  else if ( (*(_BYTE *)(a2[34] + 10) & 8) != 0 )
  {
    result = sub_126E78() + 15;
  }
  else
  {
    result = (int *)(dword_4872D8 + 40);
  }
  if ( dword_47AC88 > 0 )
  {
    v8 = result[1];
    v9 = (const char *)sub_1B87A8(v6);
    result = sub_F43B4(&off_46D334, ".debug_line address at offset 0x%lx is 0 [in module %s]", a3 - v8, v9);
  }
  *(_DWORD *)(a1 + 44) = 1164452;
  return result;
}
