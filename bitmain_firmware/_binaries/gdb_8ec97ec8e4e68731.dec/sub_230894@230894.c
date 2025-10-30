int __fastcall sub_230894(int a1)
{
  _DWORD *v1; // r0

  v1 = (_DWORD *)((int (__fastcall *)(_DWORD))loc_23E730)(*(_DWORD *)(a1 + 12));
  if ( v1 )
  {
    sub_23F9F0(v1[2], v1[3], v1[4]);
    if ( sub_22EBBC() )
      off_489A5C();
    else
      sub_230848(0);
  }
  return 0;
}
