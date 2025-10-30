int __fastcall sub_74D10(_DWORD *a1, _DWORD *a2)
{
  int v2; // r3

  if ( !a1 || !a2 )
    return 0;
  if ( *a1 != *a2 )
    return 0;
  if ( a1 == a2 )
    return 1;
  switch ( *a1 )
  {
    case 0:
      v2 = sub_732EC(a1, a2);
      break;
    case 1:
      v2 = sub_73F04(a1, a2);
      break;
    case 2:
      v2 = sub_74584((int)a1, (int)a2);
      break;
    case 3:
      v2 = sub_748A0((int)a1, (int)a2);
      break;
    case 4:
      v2 = sub_74AFC();
      break;
    default:
      v2 = 0;
      break;
  }
  return v2;
}
