FILE *sub_53CC4(int a1, int a2, ...)
{
  int *v2; // r3
  int v3; // r5
  unsigned int v4; // r3
  FILE *result; // r0
  int v6; // r2
  int v7; // r4
  int v8; // r3
  int v9; // r7
  int v10; // r0
  FILE *v11; // r0
  _BYTE v12[40]; // [sp+4h] [bp-2Ch] BYREF
  int varg_r1; // [sp+44h] [bp+14h]
  va_list varg_r2; // [sp+48h] [bp+18h] BYREF

  va_start(varg_r2, a2);
  varg_r1 = a2;
  v2 = *(int **)(a1 + 84);
  v3 = *v2;
  v4 = *((unsigned __int8 *)v2 + 768);
  result = *(FILE **)(v3 + 24);
  v6 = (v4 >> 1) & 1;
  v7 = v4 & 2;
  v8 = (int)result;
  if ( result )
    v8 = 1;
  v9 = varg_r1;
  if ( v6 != v8 )
  {
    if ( !v7 )
    {
      result = (FILE *)fclose(result);
      *(_DWORD *)(v3 + 24) = 0;
      return result;
    }
    sub_6C054(v12, 40, "/tmp/true%d.debug", *(_DWORD *)(v3 + 20));
    v10 = open64(v12, 193);
    if ( v10 >= 0 )
    {
      v11 = fdopen(v10, "w");
      *(_DWORD *)(v3 + 24) = v11;
      if ( v11 )
        setvbuf(v11, byte_BD664, 1, 0x2000u);
    }
    result = *(FILE **)(v3 + 24);
  }
  if ( result )
  {
    _fprintf_chk(result, 1, "true%d: ", *(_DWORD *)(v3 + 20));
    return (FILE *)_vfprintf_chk(*(_DWORD *)(v3 + 24), 1, v9, (char *)varg_r2);
  }
  return result;
}
