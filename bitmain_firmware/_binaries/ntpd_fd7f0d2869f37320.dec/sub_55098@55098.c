FILE *sub_55098(int a1, int a2, ...)
{
  unsigned __int8 *v2; // r1
  int v3; // r5
  FILE *result; // r0
  int v5; // r4
  int v6; // r2
  int v7; // r7
  int v8; // r0
  FILE *v9; // r0
  _BYTE v10[40]; // [sp+4h] [bp-2Ch] BYREF
  int varg_r1; // [sp+44h] [bp+14h]
  va_list varg_r2; // [sp+48h] [bp+18h] BYREF

  va_start(varg_r2, a2);
  varg_r1 = a2;
  v2 = *(unsigned __int8 **)(a1 + 84);
  v3 = *(_DWORD *)v2;
  result = *(FILE **)(*(_DWORD *)v2 + 24);
  v5 = (v2[768] >> 1) & 1;
  v6 = (int)result;
  v7 = varg_r1;
  if ( result )
    v6 = 1;
  if ( v5 != v6 )
  {
    if ( !v5 )
    {
      result = (FILE *)fclose(result);
      *(_DWORD *)(v3 + 24) = 0;
      return result;
    }
    sub_6D00C(v10, 40, "/tmp/true%d.debug", *(_DWORD *)(v3 + 20));
    v8 = open64(v10, 193);
    if ( v8 >= 0 )
    {
      v9 = fdopen(v8, "w");
      *(_DWORD *)(v3 + 24) = v9;
      if ( v9 )
        setvbuf(v9, byte_BE67C, 1, 0x2000u);
    }
    result = *(FILE **)(v3 + 24);
  }
  if ( result )
  {
    _fprintf_chk(result, 1, "true%d: ", *(_DWORD *)(v3 + 20));
    return (FILE *)_vfprintf_chk(*(_DWORD *)(v3 + 24), 1, v7, (char *)varg_r2);
  }
  return result;
}
