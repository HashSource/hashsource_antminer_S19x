void __fastcall sub_3451A4(_DWORD *a1)
{
  int v1; // r3

  if ( (_UNKNOWN *)(*a1 - 12) != &std::string::_Rep::_S_empty_rep_storage )
  {
    v1 = *(_DWORD *)(*a1 - 4);
    __dmb(0xBu);
    if ( v1 > 0 )
    {
      sub_34504C(a1, 0, 0, 0);
      *(_DWORD *)(*a1 - 4) = -1;
    }
    else
    {
      *(_DWORD *)(*a1 - 4) = -1;
    }
  }
}
