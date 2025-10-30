int __fastcall sub_3485E0(int a1, int a2, unsigned int a3, int a4, _DWORD *a5)
{
  int result; // r0
  _BOOL4 v6; // r3

  switch ( a2 )
  {
    case 0:
      if ( a4 )
        v6 = 1;
      else
        v6 = a3 > 0xF;
      if ( v6 )
        goto LABEL_8;
      *(_DWORD *)(a1 + 4 * a3 + 4) = *a5;
      result = 0;
      break;
    case 1:
    case 3:
    case 4:
      result = 1;
      break;
    default:
LABEL_8:
      result = 2;
      break;
  }
  return result;
}
