int __fastcall sub_1FD8B0(int a1)
{
  _DWORD *v2; // r0
  int v3; // r4
  int (*v4)(void); // r3
  int v5; // r2
  bool v6; // zf
  void *v7; // r6
  void *v9; // r0

  v2 = sub_93094(1u, 0x2034u);
  v2[3] = a1;
  v3 = (int)v2;
  v4 = *(int (**)(void))(a1 + 4);
  v2[7] = v2 + 8;
  v2[2] = -1;
  *v2 = 1;
  if ( v4() )
  {
    v9 = (void *)v3;
    v3 = 0;
    free(v9);
  }
  else
  {
    v5 = dword_489370;
    dword_489370 = v3;
    v6 = dword_48937C == 0;
    *(_DWORD *)(v3 + 8224) = v5;
    if ( !v6 )
    {
      v7 = sub_9836C(0x10u);
      sub_25689C(v7);
      if ( !sub_2568D4(v7, dword_48937C, "w") )
        sub_258B04(dword_48937C);
      dword_489374 = (int)v7;
    }
  }
  return v3;
}
