int __fastcall sub_10D2AC(_DWORD *a1, _DWORD *a2)
{
  int v2; // r6
  _DWORD *v6; // r5

  v2 = a1[28];
  if ( v2 != sub_23E578(a2[6], a2[7], a2[8]) )
    return 0;
  if ( a1[5] )
    return 0;
  v6 = a2 + 1;
  if ( !sub_15D0C4(a1[13], a1[14], a1[15], a1[16], a1[17], *v6, v6[1], v6[2], v6[3], v6[4]) )
    return 0;
  while ( a1 != (_DWORD *)a1[27] )
    ((void (*)(void))loc_DB0B0)();
  ((void (__fastcall *)(_DWORD *))loc_DB0B0)(a1);
  return 1;
}
