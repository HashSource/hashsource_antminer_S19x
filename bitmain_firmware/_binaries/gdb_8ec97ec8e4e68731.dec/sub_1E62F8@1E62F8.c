int __fastcall sub_1E62F8(int a1, int a2, const char *a3, int a4, int a5, int a6, int *a7)
{
  int v10; // r0
  int v11; // r0
  _DWORD *v12; // r6
  size_t v13; // r0
  void *v15; // [sp+8h] [bp-Ch] BYREF
  int v16[2]; // [sp+Ch] [bp-8h] BYREF

  v10 = sub_16F654(a1);
  v11 = ((int (__fastcall *)(int))loc_1E2770)(v10);
  v12 = (_DWORD *)dword_488C94;
  v15 = *(void **)dword_488C94;
  v16[0] = sub_1E2890(v11) - 1;
  if ( a6 )
  {
    sub_259858("Reading %s from remote target...\n", a3);
    if ( !dword_488CE8 )
    {
      sub_946B0("File transfers from remote targets can be slow. Use \"set sysroot\" to access files locally instead.");
      dword_488CE8 = 1;
    }
  }
  if ( sub_1E61E4(a2, a7) )
    return -1;
  sub_1E1694(&v15, v16, "vFile:open:");
  v13 = strlen(a3);
  sub_1E1630((_BYTE **)&v15, v16, (int)a3, v13);
  sub_1E1694(&v15, v16, (char *)&word_3D7D40);
  sub_1E1304((int *)&v15, v16, a4);
  sub_1E1694(&v15, v16, (char *)&word_3D7D40);
  sub_1E1304((int *)&v15, v16, a5);
  return sub_1E6030((int)v15 - *v12, 11, a7, 0, 0);
}
