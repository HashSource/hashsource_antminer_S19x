unsigned int __fastcall sub_19DB0(int a1, unsigned int a2)
{
  unsigned int result; // r0

  if ( *(_DWORD *)(sub_163E78() + 32) )
  {
    switch ( a2 )
    {
      case 0xFFFFFFE1:
      case 0xFFFFFFE9:
      case 0xFFFFFFED:
      case 0xFFFFFFF1:
      case 0xFFFFFFF9:
      case 0xFFFFFFFD:
        result = a2;
        break;
      default:
        goto LABEL_3;
    }
  }
  else
  {
LABEL_3:
    if ( dword_469618 )
      return a2 & 0xFFFFFFFE;
    else
      return a2 & 0x3FFFFFC;
  }
  return result;
}
