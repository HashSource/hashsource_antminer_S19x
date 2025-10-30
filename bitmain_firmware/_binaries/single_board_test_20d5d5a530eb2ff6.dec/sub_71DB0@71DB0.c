int __fastcall sub_71DB0(int a1)
{
  int v2; // r3
  int result; // r0
  unsigned int v4; // [sp+4h] [bp-4h] BYREF

  v4 = 0;
  sub_6E060(15, &v4);
  switch ( a1 )
  {
    case 0:
      v2 = v4 & 0x3F;
      if ( (v4 & 0x3F) != 0 )
        break;
      return (int)&unk_2DC6C0;
    case 1:
      v2 = (v4 >> 8) & 0x3F;
      if ( !v2 )
        return (int)&unk_2DC6C0;
      break;
    case 2:
      v2 = HIWORD(v4) & 0x3F;
      if ( !v2 )
        return (int)&unk_2DC6C0;
      break;
    case 3:
      v2 = HIBYTE(v4) & 0x3F;
      if ( !v2 )
        return (int)&unk_2DC6C0;
      break;
    default:
      return -1;
  }
  switch ( v2 )
  {
    case 1:
      return (int)&loc_16E35E + 2;
    case 3:
      return (int)&unk_5B8D80;
    case 4:
      return 12000000;
  }
  result = 25000000;
  if ( v2 != 5 )
    return 115200;
  return result;
}
