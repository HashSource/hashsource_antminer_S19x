int __fastcall sub_96AE4(int a1, int a2)
{
  int v2; // r3

  if ( dword_475514 == dword_475518 )
  {
    sub_96B5C(&dword_475510);
    return 0;
  }
  else
  {
    v2 = dword_475514 + 4;
    if ( dword_475514 )
      *(_DWORD *)dword_475514 = a2;
    dword_475514 = v2;
    return 0;
  }
}
