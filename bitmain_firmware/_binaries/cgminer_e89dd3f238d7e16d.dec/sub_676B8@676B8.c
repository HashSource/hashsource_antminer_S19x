void *__fastcall sub_676B8(_DWORD *a1)
{
  void *v1; // r3

  if ( !a1 )
    return 0;
  switch ( *a1 )
  {
    case 0:
      v1 = sub_65C7C(a1);
      break;
    case 1:
      v1 = sub_66824(a1);
      break;
    case 2:
      v1 = sub_66DE4((int)a1);
      break;
    case 3:
      v1 = sub_670D4((int)a1);
      break;
    case 4:
      v1 = sub_67330();
      break;
    case 5:
    case 6:
    case 7:
      v1 = a1;
      break;
    default:
      v1 = 0;
      break;
  }
  return v1;
}
