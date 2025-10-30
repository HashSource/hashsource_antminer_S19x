void __fastcall sub_17CFD4(int a1, int a2)
{
  void *v2; // r5

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      if ( !dword_487950 && sub_22EBBC(1) && off_489AF8(&dword_4899A0) )
        sub_232914(0);
      if ( !sub_98F78(&dword_4878EC, &dword_475848) )
        sub_F8520(0);
      if ( *(_DWORD *)(dword_487668 + 36) )
      {
        sub_24346C();
        v2 = sub_92E28();
        sub_D4120();
        sub_92E40((int)v2);
      }
    }
    else
    {
      sub_259858("Event type not recognized.\n");
    }
  }
  else
  {
    sub_1903A0(a2);
  }
}
