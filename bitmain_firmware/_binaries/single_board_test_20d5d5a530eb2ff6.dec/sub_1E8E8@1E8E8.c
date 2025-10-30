int __fastcall sub_1E8E8(int a1)
{
  int v2; // r2
  _QWORD *v3; // r3
  int v4; // r1
  _DWORD v6[73]; // [sp+4h] [bp-124h] BYREF

  sub_6DD44(v6);
  v2 = v6[0] - 1;
  if ( v6[0] - 1 < 0 )
    return 0;
  v3 = &v6[18 * v6[0]];
  while ( 1 )
  {
    v4 = *((_DWORD *)v3 - 17);
    --v2;
    v3 -= 9;
    if ( v4 != 3 && v4 == a1 )
      break;
    if ( v2 == -1 )
      return 0;
  }
  dword_21B3A4 = a1;
  byte_2333A8 = 1;
  return 1;
}
