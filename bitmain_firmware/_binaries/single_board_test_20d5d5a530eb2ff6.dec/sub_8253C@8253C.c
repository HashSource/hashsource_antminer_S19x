int __fastcall sub_8253C(int a1)
{
  int result; // r0
  _DWORD v2[17]; // [sp+0h] [bp-44h] BYREF

  v2[3] = a1;
  result = sub_8B8B0(v2, &unk_21CAAC, 5);
  if ( !result )
  {
    result = sub_8B8B0(v2, &unk_21CBEC, 164);
    if ( !result )
      return sub_8B8B0(v2, &unk_21F4EC, 2);
  }
  return result;
}
