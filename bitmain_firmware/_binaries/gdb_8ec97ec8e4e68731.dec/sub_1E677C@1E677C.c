_BYTE *__fastcall sub_1E677C(int a1, int a2, const char *a3, int *a4)
{
  int v7; // r0
  int v8; // r0
  _DWORD *v9; // r5
  size_t v10; // r0
  int v11; // r0
  int v12; // r4
  _BYTE *v13; // r5
  int v14; // r2
  void *v16; // [sp+8h] [bp-14h] BYREF
  char *v17; // [sp+Ch] [bp-10h] BYREF
  signed int v18; // [sp+10h] [bp-Ch] BYREF
  int v19; // [sp+14h] [bp-8h] BYREF

  v7 = sub_16F654(a1);
  v8 = ((int (__fastcall *)(int))loc_1E2770)(v7);
  v9 = (_DWORD *)dword_488C94;
  v16 = *(void **)dword_488C94;
  v18 = sub_1E2890(v8);
  if ( sub_1E61E4(a2, a4) )
    return 0;
  sub_1E1694(&v16, &v18, "vFile:readlink:");
  v10 = strlen(a3);
  sub_1E1630((_BYTE **)&v16, &v18, (int)a3, v10);
  v11 = sub_1E6030((int)v16 - *v9, 16, a4, &v17, &v19);
  v12 = v11;
  if ( v11 < 0 )
    return 0;
  v13 = sub_93028(v11 + 1);
  v14 = sub_996E8((unsigned __int8 *)v17, v19, (int)v13, v12);
  if ( v12 != v14 )
    sub_946E0("Readlink returned %d, but %d bytes.", v12, v14);
  v13[v12] = 0;
  return v13;
}
