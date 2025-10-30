int sub_51C58()
{
  int v0; // r1
  _WORD v2[6]; // [sp+0h] [bp-14h] BYREF

  if ( !sub_666BC(v2) || (v0 = sub_67430(v2) - 2, dword_BE608 = v0, v0 <= 722818) )
  {
    v0 = 722819;
    dword_BE608 = 722819;
  }
  sub_66C70(v2, v0);
  dword_BE60C = v2[0];
  dword_BE608 -= 693596;
  return v2[0];
}
