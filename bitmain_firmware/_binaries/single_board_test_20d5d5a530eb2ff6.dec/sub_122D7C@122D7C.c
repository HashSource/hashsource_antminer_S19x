int *__fastcall sub_122D7C(int a1)
{
  _DWORD *v2; // r7
  char *v3; // r5
  int *v4; // r0
  int *v5; // r6

  v2 = (_DWORD *)sub_16E8F4();
  v3 = sub_11E050(v2, (char *)0x55, 0, 0);
  v4 = (int *)sub_16EA54(a1);
  v5 = sub_122BB8(v4, v3);
  sub_10BFDC((int)v3, (void (__fastcall *)(int))GENERAL_NAME_free);
  sub_10BFDC((int)v2, (void (__fastcall *)(int))X509_EXTENSION_free);
  return v5;
}
