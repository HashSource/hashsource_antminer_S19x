int __fastcall sub_296884(int a1)
{
  _DWORD *v2; // r0

  if ( (dword_48AAA0 & 0x80000) == 0 )
    return sub_2967FC(a1, 2, -2);
  v2 = sub_293AC4(a1);
  dword_48BAA4 = (int)v2;
  v2[1] = 2;
  v2[2] = -2;
  off_48BAA0 = (int (__fastcall *)(_DWORD))sub_296850;
  return 0;
}
