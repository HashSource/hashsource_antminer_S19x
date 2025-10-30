int __fastcall sub_2B5620(int a1)
{
  char *v2; // r1
  _DWORD *v3; // r3
  _DWORD *v4; // r0
  _DWORD *v5; // r3

  v2 = sub_2AD7AC(a1, ".dynamic");
  if ( v2 )
  {
    v3 = *(_DWORD **)(*(_DWORD *)(a1 + 160) + 2348);
    while ( 1 )
    {
      v3 = (_DWORD *)*v3;
      if ( !v3 )
        break;
      if ( v3[1] == 2 )
        return sub_2B3458(a1);
    }
    v4 = (_DWORD *)sub_2D087C(a1, v2);
    v5 = *(_DWORD **)(*(_DWORD *)(a1 + 160) + 2348);
    *v4 = *v5;
    *v5 = v4;
  }
  return sub_2B3458(a1);
}
