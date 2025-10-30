int __fastcall sub_21F4BC(int a1)
{
  int result; // r0

  switch ( *(_BYTE *)(a1 + 32) & 0xF )
  {
    case 1:
    case 2:
    case 7:
    case 8:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
