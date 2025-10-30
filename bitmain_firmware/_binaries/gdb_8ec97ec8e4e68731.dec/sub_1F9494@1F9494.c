int __fastcall sub_1F9494(int a1, int a2, int (__fastcall *a3)(int, int), int a4)
{
  int v4; // lr
  int result; // r0
  int v6; // r1

  v4 = a1 + 16 * a2;
  switch ( *(_DWORD *)(v4 + 16) )
  {
    case 'Y':
    case '`':
    case 'r':
      result = 0;
      break;
    case 'q':
      v6 = *(_DWORD *)(*(_DWORD *)(v4 + 32) + 24);
      result = *(_BYTE *)(v6 + 2) & 0x10;
      if ( (*(_BYTE *)(v6 + 2) & 0x10) != 0 )
      {
        result = *(_DWORD *)(v6 + 16);
        if ( result )
          result = a3(result, a4) != 0;
      }
      break;
    default:
      result = sub_1C339C(a1, a2, a3, a4);
      break;
  }
  return result;
}
