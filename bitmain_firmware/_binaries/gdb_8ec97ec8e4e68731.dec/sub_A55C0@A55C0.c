int *__fastcall sub_A55C0(int *a1, char *a2, int a3, char *a4, _DWORD *a5)
{
  int v6; // r5
  void *v7; // r0
  void *v8; // r6
  char *v9; // r7
  int v10; // r5
  char **v12; // [sp+4h] [bp-8h] BYREF

  if ( a5 )
    *a5 = 0;
  v6 = sub_A5400(a2, a3, a4, &v12);
  v7 = sub_9253C(634200, (int)v12);
  v8 = v7;
  if ( v6 )
  {
    v9 = v12[1];
    v10 = sub_21C7C8(*v12, 0);
    sub_92620(v8);
    *a1 = v10;
    a1[1] = (int)v9;
  }
  else
  {
    sub_92620(v7);
    *a1 = 0;
    a1[1] = 0;
  }
  return a1;
}
