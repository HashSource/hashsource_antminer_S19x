int __fastcall sub_DC5D8(_DWORD *a1, int a2, signed int a3, char *a4)
{
  char **v4; // r4
  int result; // r0
  _BOOL4 v6; // r1
  int v7; // r5

  v4 = (char **)a1[5];
  switch ( a2 )
  {
    case 6:
      v6 = a4 == 0;
      if ( a3 <= 0 )
        v6 = 0;
      result = 0;
      if ( a3 < -1 )
        v7 = v6 | 1;
      else
        v7 = v6;
      if ( !v7 )
        return sub_1280A4((int)(v4 + 1), a4, a3) != 0;
      break;
    case 7:
      return sub_DC8C4(v4[5], *(_DWORD *)(*(_DWORD *)(a1[2] + 24) + 8), **(_DWORD **)(a1[2] + 24), *v4, a1[1]) != 0;
    case 1:
      *v4 = a4;
      return 1;
    default:
      return -2;
  }
  return result;
}
