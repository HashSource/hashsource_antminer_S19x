int __fastcall sub_242E1C(int a1, int *a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(a1 + 12);
  if ( !v2 )
    return 0;
  if ( ((int (__fastcall *)(int))loc_23E730)(v2) )
  {
    sub_23F9F0();
    if ( sub_22EBBC() )
    {
      if ( *(_BYTE *)(a1 + 120) )
        sub_230848(*a2);
      else
        sub_22EF14();
    }
  }
  return 0;
}
