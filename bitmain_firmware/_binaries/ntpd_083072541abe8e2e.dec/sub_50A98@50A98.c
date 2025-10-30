int sub_50A98()
{
  int v0; // r1
  int result; // r0
  _WORD v2[6]; // [sp+0h] [bp-14h] BYREF

  if ( !sub_6568C(v2) || (v0 = sub_66428(v2) - 2, dword_BD5F0 = v0, v0 <= 722818) )
  {
    v0 = 722819;
    dword_BD5F0 = 722819;
  }
  sub_65BF4(v2, v0);
  result = dword_BD5F0;
  dword_BD5F4 = v2[0];
  dword_BD5F0 -= 693596;
  return result;
}
