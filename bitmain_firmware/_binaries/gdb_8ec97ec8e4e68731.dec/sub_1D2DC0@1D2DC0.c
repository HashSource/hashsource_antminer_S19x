void sub_1D2DC0()
{
  int v0; // r1

  v0 = dword_487D44;
  if ( dword_487D44 + 0x80000000 <= 0x7FFFFFFE )
  {
    dword_487D44 = dword_46DAAC;
    sub_946E0("integer %u out of range", v0);
  }
  dword_46DAAC = dword_487D44;
}
