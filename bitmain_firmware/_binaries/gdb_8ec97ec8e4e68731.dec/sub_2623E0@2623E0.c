int __fastcall sub_2623E0(const void *a1, size_t a2, _DWORD *a3)
{
  int v6; // r5
  __int64 v7; // r0
  int v8; // r0
  __int64 v9; // r0
  int v10; // r4
  void *v11; // r0

  v6 = *((unsigned __int8 *)off_46D5A4[0] + 113);
  v7 = sub_347418(a2, a3[5]);
  v8 = sub_172140(a3, SHIDWORD(v7), (unsigned __int8)v6, 0, v7 + v6 - 1, ((int)v7 + v6 - 1) >> 31);
  v9 = sub_26BB80(v8);
  v10 = v9;
  v11 = (void *)sub_26BCB8(v9, HIDWORD(v9));
  memcpy(v11, a1, a2);
  return v10;
}
