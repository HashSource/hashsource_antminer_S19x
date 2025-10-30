int __fastcall sub_1D4188(int a1)
{
  int result; // r0
  _BYTE v2[4]; // [sp+4h] [bp-10h] BYREF
  int v3; // [sp+8h] [bp-Ch]

  v3 = a1;
  result = sub_324030(dword_487D78, v2, 0);
  if ( result )
    return *(_DWORD *)(*(_DWORD *)result + 8);
  return result;
}
