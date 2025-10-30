void __fastcall sub_19913C(_DWORD *a1, int a2, const char *a3, char *a4, int a5, int a6)
{
  void *v9; // r5
  void *v10; // r4
  _DWORD v11[6]; // [sp+1Ch] [bp-88h] BYREF
  _DWORD v12[11]; // [sp+34h] [bp-70h] BYREF
  _BYTE v13[68]; // [sp+60h] [bp-44h] BYREF

  sub_195500(v11, 0, a2, 0, 0, 0, 0);
  v9 = sub_9253C((int)sub_195444, (int)v11);
  v10 = sub_92E28();
  sub_198B58(v12, (int)v13, a3, a4, a5, 0, 0, (unsigned int *)3);
  sub_92E40((int)v10);
  sub_196A10(a1, (int)v11, a6);
  sub_92620(v9);
}
