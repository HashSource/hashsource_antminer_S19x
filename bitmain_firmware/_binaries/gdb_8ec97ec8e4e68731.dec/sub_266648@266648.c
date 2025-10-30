int __fastcall sub_266648(_DWORD *a1)
{
  int v1; // r2
  int result; // r0

  while ( 1 )
  {
    v1 = *(_DWORD *)(sub_171258(a1) + 24);
    if ( (unsigned __int8)(*(_BYTE *)v1 - 18) > 1u )
      break;
    a1 = *(_DWORD **)(v1 + 20);
  }
  switch ( *(_BYTE *)v1 )
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
