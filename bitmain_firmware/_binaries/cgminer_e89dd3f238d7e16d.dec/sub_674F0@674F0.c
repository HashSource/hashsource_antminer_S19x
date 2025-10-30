int __fastcall sub_674F0(_DWORD *a1, _DWORD *a2)
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
      v2 = sub_65ACC(a1, a2);
      break;
    case 1:
      v2 = sub_666E4(a1, a2);
      break;
    case 2:
      v2 = sub_66D64((int)a1, (int)a2);
      break;
    case 3:
      v2 = sub_67080((int)a1, (int)a2);
      break;
    case 4:
      v2 = sub_672DC();
      break;
    default:
      v2 = 0;
      break;
  }
  return v2;
}
