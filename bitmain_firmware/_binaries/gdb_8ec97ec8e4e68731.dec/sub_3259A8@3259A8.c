int __fastcall sub_3259A8(int a1, int a2, char *dest)
{
  int v6; // r0
  int result; // r0
  int v8; // [sp+0h] [bp-8h] BYREF
  _BYTE v9[4]; // [sp+4h] [bp-4h] BYREF

  if ( *(_DWORD *)(a1 + 36) || (result = sub_324F30((int *)a1, 0, (int)&v8, (int)v9)) != 0 )
  {
    v6 = *(_DWORD *)(a1 + 28);
    if ( v6 < a2 )
    {
      memset(&dest[4 * v6], 0, 4 * (a2 - v6));
      a2 = *(_DWORD *)(a1 + 28);
    }
    memcpy(dest, *(const void **)(a1 + 36), 4 * a2);
    return 1;
  }
  return result;
}
