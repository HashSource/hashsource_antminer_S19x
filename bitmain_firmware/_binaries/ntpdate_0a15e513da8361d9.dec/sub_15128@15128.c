int __fastcall sub_15128(int a1, _DWORD *a2, int a3)
{
  _DWORD *v6; // r0
  _DWORD *v7; // r8

  if ( !a2 )
    sub_10C38();
  if ( *a2 )
    sub_10C38();
  v6 = sub_9A68(0, a3 + 36, 0, 0);
  v7 = v6;
  if ( !v6 )
    return 1;
  sub_138D4(v6, (int)(v6 + 9), a3);
  v7[8] = a1;
  *a2 = v7;
  return 0;
}
