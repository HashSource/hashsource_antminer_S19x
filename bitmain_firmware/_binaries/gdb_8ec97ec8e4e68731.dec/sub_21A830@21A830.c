bool __fastcall sub_21A830(int a1, _BYTE *a2)
{
  int v4; // r5
  int v5; // r0
  int v7; // r0

  v4 = ((int (*)(void))sub_25B59C)();
  v5 = sub_25B59C(a2);
  if ( v4 < v5 )
    return 0;
  if ( *a2 == 47 )
  {
    if ( v4 != v5 )
      return 0;
    return ((int (__fastcall *)(_BYTE *, int, int))loc_25B524)(a2, a1, 3) == 0;
  }
  else
  {
    v7 = ((int (__fastcall *)(int, int))loc_25B60C)(a1, v4 - v5);
    return ((int (__fastcall *)(_BYTE *, int, int))loc_25B524)(a2, v7, 3) == 0;
  }
}
