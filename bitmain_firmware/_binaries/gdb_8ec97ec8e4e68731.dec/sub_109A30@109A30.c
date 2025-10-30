int sub_109A30()
{
  int v0; // r1

  v0 = dword_46D43C;
  if ( (unsigned int)dword_46D43C <= 1 || ((dword_46D43C - 1) & dword_46D43C) != 0 )
  {
    dword_46D43C = 64;
    sub_946E0("Invalid dcache line size: %u (must be power of 2).", v0);
  }
  return sub_234884();
}
