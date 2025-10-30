int __fastcall sub_17374C(_DWORD *a1)
{
  int result; // r0

  switch ( **(_BYTE **)(sub_171258(a1) + 24) )
  {
    case 2:
    case 3:
    case 4:
    case 0xB:
    case 0xD:
      result = 0;
      break;
    default:
      result = 1;
      break;
  }
  return result;
}
