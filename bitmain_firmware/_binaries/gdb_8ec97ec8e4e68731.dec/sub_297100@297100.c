bool __fastcall sub_297100(char a1)
{
  int v2; // r0
  int v3; // r4
  int v5; // r0

  v2 = sub_296CF4();
  v3 = v2;
  if ( (dword_490154 & 4) == 0 )
    return sub_296D48(a1, v2) != 1;
  dword_490154 &= ~4u;
  v5 = sub_28D478();
  sub_28D50C(v5);
  dword_48AAA0 &= ~0x400u;
  sub_2932FC(v3);
  return 0;
}
