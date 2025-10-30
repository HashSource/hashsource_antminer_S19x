void sub_1D2E08()
{
  int v0; // r1

  v0 = dword_487D48;
  if ( dword_487D48 + 0x80000000 <= 0x7FFFFFFE )
  {
    dword_487D48 = dword_46DAB0;
    sub_946E0("integer %u out of range", v0);
  }
  dword_46DAB0 = dword_487D48;
}
