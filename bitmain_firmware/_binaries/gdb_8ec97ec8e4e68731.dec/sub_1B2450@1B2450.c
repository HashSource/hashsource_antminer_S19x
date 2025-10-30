bool __fastcall sub_1B2450(unsigned int a1)
{
  _BOOL4 result; // r0
  _DWORD v2[3]; // [sp+0h] [bp-Ch] BYREF

  sub_1B240C(v2, a1);
  result = v2[0];
  if ( v2[0] )
    return (*(_BYTE *)(v2[0] + 32) & 0xF) == 2;
  return result;
}
