int __fastcall sub_280424(int *a1)
{
  int v2; // r0
  int v3; // r3
  int v4; // r0

  v2 = sub_2934C8(&unk_48AB7C, 16);
  dword_48AB8C = v2;
  if ( v2 <= 0 )
    return -1;
  v3 = v2;
  v4 = *a1;
  off_48BAA0 = 0;
  dword_48AF04 = 1;
  return sub_296630(v4, dword_48AB90, &unk_48AB7C, v3);
}
