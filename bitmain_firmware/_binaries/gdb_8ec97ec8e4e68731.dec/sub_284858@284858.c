int __fastcall sub_284858(int a1)
{
  int v1; // r0
  bool v2; // zf
  int result; // r0
  _DWORD v4[27]; // [sp+0h] [bp-6Ch] BYREF

  v1 = _xstat64(3, a1, v4);
  v2 = v1 == 0;
  if ( v1 )
    result = 0;
  else
    result = v4[4];
  if ( v2 )
    return (result & 0xF000) == 0x4000;
  return result;
}
