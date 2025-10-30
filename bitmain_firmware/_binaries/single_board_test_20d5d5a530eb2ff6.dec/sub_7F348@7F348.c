int __fastcall sub_7F348(int a1, _DWORD *a2)
{
  int v3; // r2
  int v4; // r3
  int result; // r0

  v4 = sub_BB778(*(_DWORD *)(a1 + 996), a2[5], a2[2] + 1024, a2[6], a2[2]);
  if ( v4 < 0 )
  {
    result = 0;
  }
  else
  {
    v3 = a2[5];
    result = 1;
  }
  if ( v4 >= 0 )
  {
    a2[2] = v4;
    a2[6] = v3;
  }
  return result;
}
