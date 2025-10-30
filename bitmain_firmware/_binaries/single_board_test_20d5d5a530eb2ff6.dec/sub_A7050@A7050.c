int __fastcall sub_A7050(int a1)
{
  int v2; // r5
  int (*v3)(void); // r3
  _DWORD *v4; // r2
  unsigned int v5; // r1
  signed int v6; // r3
  unsigned int v7; // r1
  int v8; // r0

  v2 = *(_DWORD *)(a1 + 128);
  if ( !*(_DWORD *)(v2 + 388) && !*(_DWORD *)(v2 + 392) )
  {
    v3 = *(int (**)(void))(v2 + 404);
    if ( v3 )
    {
      *(_DWORD *)(v2 + 396) = v3();
      v2 = *(_DWORD *)(a1 + 128);
    }
    else
    {
      *(_DWORD *)(v2 + 396) = 1000000;
    }
  }
  gettimeofday((struct timeval *)(v2 + 388), 0);
  v4 = *(_DWORD **)(a1 + 128);
  v5 = v4[99];
  v6 = v4[98] + v5 - 1000000 * (v5 / 0xF4240);
  v7 = v5 / 0xF4240 + v4[97];
  v4[97] = v7;
  v4[98] = v6;
  if ( v6 > (int)&loc_F423E )
  {
    v4[97] = v7 + 1;
    v4[98] = v6 - 1000000;
  }
  v8 = sub_882E0(a1);
  return sub_B6ECC(v8, 45, 0, *(_DWORD *)(a1 + 128) + 388);
}
