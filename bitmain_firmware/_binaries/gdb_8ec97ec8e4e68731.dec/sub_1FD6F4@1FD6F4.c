_DWORD *__fastcall sub_1FD6F4(int a1, const char **a2)
{
  const char **v2; // r5
  _DWORD *v4; // r0
  int v5; // r1
  _DWORD *v6; // r4
  void (*v7)(void); // r2

  v2 = a2;
  if ( !a2 )
  {
    v2 = sub_1FD680("terminal");
    if ( !v2 )
    {
      v2 = sub_1FD680("hardwire");
      if ( !v2 )
        return 0;
    }
  }
  v4 = sub_93094(1u, 0x2034u);
  v5 = dword_489370;
  v6 = v4;
  v4[7] = v4 + 8;
  v4[2] = -1;
  v4[3] = v2;
  *v4 = 1;
  v4[2056] = v5;
  v7 = (void (*)(void))v2[3];
  dword_489370 = (int)v4;
  if ( v7 )
    v7();
  else
    v4[1] = a1;
  return v6;
}
