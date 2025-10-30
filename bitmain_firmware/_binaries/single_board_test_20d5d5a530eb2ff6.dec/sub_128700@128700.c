void *__fastcall sub_128700(unsigned __int8 *a1, _DWORD *a2, _DWORD *a3, int a4, size_t *a5, int a6, _DWORD *a7)
{
  int *v11; // r0
  int *v12; // r5
  void *v13; // r4

  v11 = (int *)sub_D14F4();
  v12 = v11;
  if ( v11 )
  {
    v13 = (void *)sub_D9454(v11, 0, a7, 0, a6);
    if ( v13 )
      v13 = sub_1284E8(a1, a2, a3, a4, a5, (int)v12);
    sub_D1504(v12);
    return v13;
  }
  else
  {
    sub_D0048(13, 195, 65, (int)"crypto/asn1/a_sign.c", 125);
    return 0;
  }
}
