int *__fastcall sub_26DCD8(_DWORD *a1, const void *a2)
{
  int *v4; // r4
  void *v5; // r0

  v4 = (int *)sub_26BB80(a1);
  v5 = (void *)sub_26BCB8(v4);
  memcpy(v5, a2, a1[5]);
  return v4;
}
