int __fastcall sub_B347C(int *a1, int a2, int a3, int a4, int a5)
{
  _DWORD *v9; // r4
  int v10; // r2
  int v11; // r3

  v9 = (_DWORD *)sub_E0740(28, "crypto/async/async_wait.c", 50);
  if ( v9 )
  {
    v10 = a1[1];
    v11 = *a1;
    v9[2] = a4;
    *v9 = a2;
    v9[1] = a3;
    v9[3] = a5;
    v9[4] = 1;
    v9[6] = v11;
    a1[1] = v10 + 1;
    *a1 = (int)v9;
    return 1;
  }
  else
  {
    sub_D0048(51, 106, 65, "crypto/async/async_wait.c", 51);
    return 0;
  }
}
