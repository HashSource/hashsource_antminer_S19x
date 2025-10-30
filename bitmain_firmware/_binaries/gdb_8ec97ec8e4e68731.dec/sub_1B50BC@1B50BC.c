bool __fastcall sub_1B50BC(int a1, unsigned int *a2)
{
  int v3; // r6
  int v4; // r5
  int v5; // r0
  int v6; // r7
  unsigned int v7; // r4
  int v8; // r0
  _BOOL4 result; // r0
  unsigned int v10; // r4

  v3 = sub_15F70C(a1);
  v4 = sub_15ECB4(v3);
  sub_1780B4();
  v6 = *(_DWORD *)(v5 + 156);
  v7 = ((int (__fastcall *)(int, int, _DWORD, int))loc_16B0A4)(v4, v3, 0, v6);
  v8 = ((int (__fastcall *)(int, int, int, int))loc_16B0A4)(v4, v3, 1, v6);
  if ( v7 )
  {
    v10 = sub_1B4FEC(v4, v7, v8);
    result = v10 == 0;
    if ( a2 )
      *a2 = v10;
  }
  else
  {
    result = 1;
    if ( a2 )
      *a2 = 0;
  }
  return result;
}
