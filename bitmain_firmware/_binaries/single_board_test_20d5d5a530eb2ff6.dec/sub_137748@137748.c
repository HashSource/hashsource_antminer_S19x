bool __fastcall sub_137748(int a1, _DWORD *a2, int a3, _DWORD *a4)
{
  int v5; // r5
  int v6; // r0
  _BOOL4 result; // r0

  if ( !a2 )
    return 1;
  v5 = *a2;
  switch ( a1 )
  {
    case 10:
      if ( sub_1385B0(a4 + 2, *a2) > 0 )
        goto LABEL_4;
      result = 0;
      break;
    case 11:
    case 13:
      result = sub_139038(v5, a4[1]) > 0;
      break;
    case 12:
LABEL_4:
      v6 = sub_138F98(v5, *a4);
      a4[1] = v6;
      result = v6 != 0;
      break;
    default:
      result = 1;
      break;
  }
  return result;
}
