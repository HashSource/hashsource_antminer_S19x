int __fastcall sub_D16C4(int result, int a2, int a3)
{
  _DWORD *v3; // r4
  bool v4; // cc

  v3 = (_DWORD *)dword_478348;
  if ( !dword_478348 )
    goto LABEL_17;
  if ( result != *(_DWORD *)(dword_478348 + 24) )
  {
    while ( 1 )
    {
      v3 = (_DWORD *)v3[2];
      if ( !v3 )
        break;
      if ( v3[6] == result )
        goto LABEL_5;
    }
LABEL_17:
    sub_946E0("No breakpoint number %d.", result);
  }
LABEL_5:
  if ( (unsigned int)(v3[3] - 27) <= 2 )
  {
    v4 = a3 <= 0;
    if ( a3 )
      v4 = a2 <= 0;
    if ( !v4 )
      return sub_259F10("Ignore count ignored for tracepoint %d.", result);
  }
  else
  {
    v3[9] = a2 & ~(a2 >> 31);
    if ( a3 )
    {
      if ( a2 <= 0 )
      {
        sub_259F10("Will stop next time breakpoint %d is reached.", result);
      }
      else if ( a2 == 1 )
      {
        sub_259F10("Will ignore next crossing of breakpoint %d.", result);
      }
      else
      {
        sub_259F10("Will ignore next %d crossings of breakpoint %d.", a2 & ~(a2 >> 31), result);
      }
    }
    return sub_1B9D50(v3);
  }
  return result;
}
