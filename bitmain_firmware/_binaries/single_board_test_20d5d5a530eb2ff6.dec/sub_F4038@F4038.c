_DWORD *__fastcall sub_F4038(int a1, int a2, int a3)
{
  _DWORD *v6; // r0
  _DWORD *v7; // r4

  v6 = sub_E0740((void *)0x24);
  v7 = v6;
  if ( v6 )
  {
    *v6 = a1;
    v6[1] = a2;
    v6[6] = a2;
    v6[5] = a2;
    v6[4] = a2;
    v6[7] = a3;
    v6[2] = 1;
  }
  else
  {
    sub_D0048(36, 124, 65, (int)"crypto/rand/rand_lib.c", 490);
  }
  return v7;
}
