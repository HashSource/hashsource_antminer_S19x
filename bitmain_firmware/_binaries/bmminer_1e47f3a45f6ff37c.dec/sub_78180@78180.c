int __fastcall sub_78180(_DWORD *a1, _DWORD *a2)
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
      v2 = sub_767C8(a1, a2);
      break;
    case 1:
      v2 = sub_773D4(a1, a2);
      break;
    case 2:
      v2 = sub_77A50((int)a1, (int)a2);
      break;
    case 3:
      v2 = sub_77D64((int)a1, (int)a2);
      break;
    case 4:
      v2 = sub_77F70();
      break;
    default:
      v2 = 0;
      break;
  }
  return v2;
}
