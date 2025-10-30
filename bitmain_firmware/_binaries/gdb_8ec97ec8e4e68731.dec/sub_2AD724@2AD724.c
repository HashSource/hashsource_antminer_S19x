int __fastcall sub_2AD724(int a1, int *a2)
{
  _DWORD *v3; // r3
  int v4; // r0

  v3 = (_DWORD *)(*(int (**)(void))(*(_DWORD *)(a1 + 4) + 268))();
  a2[38] = (int)v3;
  if ( !v3 )
    return 0;
  v4 = *a2;
  v3[4] = a2;
  v3[1] = v4;
  v3[2] = 0;
  v3[3] = 256;
  a2[39] = (int)(a2 + 38);
  return 1;
}
