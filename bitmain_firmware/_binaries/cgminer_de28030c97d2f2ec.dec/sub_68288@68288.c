void *__fastcall sub_68288(_DWORD *a1)
{
  void *v1; // r3

  if ( !a1 )
    return 0;
  switch ( *a1 )
  {
    case 0:
      v1 = sub_668B8(a1);
      break;
    case 1:
      v1 = sub_6748C(a1);
      break;
    case 2:
      v1 = sub_67AD0((int)a1);
      break;
    case 3:
      v1 = sub_67DB8((int)a1);
      break;
    case 4:
      v1 = sub_67FC4();
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
