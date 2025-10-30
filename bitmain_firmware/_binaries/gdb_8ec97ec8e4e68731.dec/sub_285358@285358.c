int __fastcall sub_285358(const char *a1)
{
  int v2; // r3
  _WORD v4[52]; // [sp+0h] [bp-68h] BYREF

  if ( _lxstat64(3, a1, v4) == -1 )
    return 0;
  v2 = v4[8] & 0xF000;
  switch ( v2 )
  {
    case 16384:
      return 47;
    case 8192:
      return 37;
    case 24576:
      return 35;
    case 40960:
      return 64;
    case 49152:
      return 61;
    case 4096:
      return 124;
  }
  if ( v2 != 0x8000 || access(a1, 1) )
    return 0;
  else
    return 42;
}
