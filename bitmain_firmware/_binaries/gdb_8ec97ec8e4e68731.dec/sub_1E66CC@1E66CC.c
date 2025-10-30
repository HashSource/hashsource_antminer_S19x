int __fastcall sub_1E66CC(int a1, int a2, const char *a3, int *a4)
{
  int v7; // r0
  int v8; // r0
  _DWORD *v9; // r5
  size_t v10; // r0
  void *v12; // [sp+8h] [bp-Ch] BYREF
  signed int v13[2]; // [sp+Ch] [bp-8h] BYREF

  v7 = sub_16F654(a1);
  v8 = ((int (__fastcall *)(int))loc_1E2770)(v7);
  v9 = (_DWORD *)dword_488C94;
  v12 = *(void **)dword_488C94;
  v13[0] = sub_1E2890(v8) - 1;
  if ( sub_1E61E4(a2, a4) )
    return -1;
  sub_1E1694(&v12, v13, "vFile:unlink:");
  v10 = strlen(a3);
  sub_1E1630((_BYTE **)&v12, v13, (int)a3, v10);
  return sub_1E6030((int)v12 - *v9, 15, a4, 0, 0);
}
