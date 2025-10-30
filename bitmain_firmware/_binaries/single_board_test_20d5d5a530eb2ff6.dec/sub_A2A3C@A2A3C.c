int __fastcall sub_A2A3C(int *a1, _DWORD *a2, char *a3)
{
  int result; // r0
  int v6; // [sp+Ch] [bp-7Ch] BYREF
  _BYTE v7[120]; // [sp+10h] [bp-78h] BYREF

  v6 = 0;
  result = sub_BBEDC(a3, 58, 1, (int)&loc_A2518 + 1, (int)&v6);
  if ( result )
  {
    result = 1;
    if ( a1 )
      return sub_A2948(a1, a2, (int)v7, v6);
  }
  return result;
}
