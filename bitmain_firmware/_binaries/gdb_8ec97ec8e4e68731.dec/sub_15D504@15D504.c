bool __fastcall sub_15D504(int a1)
{
  if ( !sub_22EB0C(a1) || !sub_22EAC0() || !sub_22EA74() )
    return 0;
  if ( sub_24B59C() >= 0 )
    return 1;
  if ( sub_98F78(&dword_4878EC, &dword_475848) || sub_23F1C4(dword_4878EC, dword_4878F0, dword_4878F4) )
    return 0;
  return ((int (__fastcall *)(int, int, int))loc_23F1FC)(dword_4878EC, dword_4878F0, dword_4878F4) == 0;
}
