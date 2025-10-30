_BYTE *__fastcall sub_31E970(int a1, _BYTE *a2)
{
  _BYTE *v2; // r4
  _BYTE *result; // r0

  v2 = a2;
  if ( !a2 )
    return v2;
  if ( !*a2 )
    return 0;
  switch ( *a2 )
  {
    case 'F':
      result = a2 + 1;
      break;
    case 'R':
      sub_31E858(a1, "extern(C++) ");
      result = v2 + 1;
      break;
    case 'U':
      sub_31E858(a1, "extern(C) ");
      result = v2 + 1;
      break;
    case 'V':
      sub_31E858(a1, "extern(Pascal) ");
      result = v2 + 1;
      break;
    case 'W':
      sub_31E858(a1, "extern(Windows) ");
      result = v2 + 1;
      break;
    case 'Y':
      sub_31E858(a1, "extern(Objective-C) ");
      result = v2 + 1;
      break;
    default:
      return 0;
  }
  return result;
}
