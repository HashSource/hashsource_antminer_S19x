int __fastcall sub_1603F0(int a1)
{
  int v2; // r5
  int v3; // r0

  v2 = sub_15DB40(*(int **)(a1 + 76));
  if ( ((int (*)(void))loc_169A90)() )
    JUMPOUT(0x169ADC);
  if ( ((int (__fastcall *)(int))loc_1672F0)(v2) < 0 )
  {
    sub_94700((int)"frame.c", 2797, "Missing unwind SP method");
    JUMPOUT(0x160460);
  }
  v3 = ((int (__fastcall *)(int))loc_1672F0)(v2);
  return ((int (__fastcall *)(_DWORD, int))loc_15EBBC)(*(_DWORD *)(a1 + 76), v3);
}
