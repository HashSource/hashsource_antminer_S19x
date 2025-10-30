void sub_280FDC()
{
  int *v0; // r3

  v0 = dword_48AB10;
  do
  {
    v0[1] = -1;
    ++v0;
  }
  while ( v0 != (int *)&unk_48AB78 );
  dword_48AAA0 &= ~0x400000u;
}
