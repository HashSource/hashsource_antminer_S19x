void **__fastcall sub_19B938(void **a1, int a2, unsigned int a3, int a4, int a5, int a6)
{
  void *v8; // r6
  int v9; // r2
  int v10; // r5
  _DWORD v12[33]; // [sp+14h] [bp-84h] BYREF

  sub_195500(v12, a3, (int)off_46D5A4[0], a4, a5, a6, 0);
  v8 = sub_9253C((int)sub_195444, (int)v12);
  v9 = a2;
  v10 = dword_487D2C;
  sub_19B598(a1, (int)v12, v9);
  sub_92620(v8);
  ((void (__fastcall *)(int))loc_1CD290)(v10);
  return a1;
}
