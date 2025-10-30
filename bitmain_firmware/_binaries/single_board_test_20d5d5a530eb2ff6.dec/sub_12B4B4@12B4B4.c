int __fastcall sub_12B4B4(int *a1)
{
  int result; // r0
  _DWORD v3[12]; // [sp+4h] [bp-30h] BYREF

  result = sub_12B1F4(a1, v3);
  if ( result )
    return sub_12AFB4((size_t *)a1, v3, -1) != 0;
  return result;
}
