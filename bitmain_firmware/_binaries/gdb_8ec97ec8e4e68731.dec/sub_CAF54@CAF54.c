int __fastcall sub_CAF54(_DWORD *a1)
{
  _DWORD *v2; // r0
  int result; // r0
  const char *v4; // r0

  v2 = (_DWORD *)sub_242FDC(a1);
  result = sub_2573F0(*v2);
  if ( !result )
  {
    switch ( a1[3] )
    {
      case 1:
      case 0x20:
        if ( a1[5] )
          LOWORD(v4) = 8444;
        else
          LOWORD(v4) = -20;
        HIWORD(v4) = 55;
        sub_259F10(v4);
        sub_259F10(" %d", a1[6]);
        if ( a1[3] == 32 )
          sub_259F10(" at gnu-indirect-function resolver");
        goto LABEL_4;
      case 2:
        sub_259F10("Hardware assisted breakpoint %d", a1[6]);
        return sub_C89B4((int)a1);
      case 0x1E:
        sub_259F10("Dprintf %d", a1[6]);
        goto LABEL_4;
      default:
LABEL_4:
        result = sub_C89B4((int)a1);
        break;
    }
  }
  return result;
}
