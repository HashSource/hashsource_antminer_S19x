bool __fastcall sub_EF364(int a1, _DWORD *a2, int a3, _DWORD *a4)
{
  int v6; // r0
  _BOOL4 result; // r0

  switch ( a1 )
  {
    case 10:
      if ( sub_F1794(a4 + 2, *a2) > 0 )
        goto LABEL_3;
      result = 0;
      break;
    case 11:
    case 13:
      result = sub_F05CC(*a2, a4[1]) > 0;
      break;
    case 12:
LABEL_3:
      v6 = sub_EF9FC(*a2, *a4);
      a4[1] = v6;
      result = v6 != 0;
      break;
    default:
      result = 1;
      break;
  }
  return result;
}
