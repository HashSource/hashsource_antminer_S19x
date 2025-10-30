int __fastcall sub_96A28(int a1, int *a2)
{
  int result; // r0
  int v4; // r3
  int v5; // r3
  _WORD v6[52]; // [sp+0h] [bp-68h] BYREF

  result = _xstat64(3, a1, v6);
  if ( result )
  {
    if ( *_errno_location() == 2 )
    {
      *a2 = 2;
      return 0;
    }
    return 1;
  }
  v4 = v6[8] & 0xF000;
  if ( v4 == 0x8000 )
    return 1;
  if ( v4 == 0x4000 )
    v5 = 21;
  else
    v5 = 22;
  *a2 = v5;
  return result;
}
