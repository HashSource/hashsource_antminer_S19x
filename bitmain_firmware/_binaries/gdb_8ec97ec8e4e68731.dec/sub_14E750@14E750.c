int __fastcall sub_14E750(void *src, size_t n)
{
  _BYTE *v3; // r4
  int v4; // r4
  char v6; // [sp+0h] [bp-14h] BYREF
  _BYTE v7[3]; // [sp+1h] [bp-13h] BYREF
  void *ptr; // [sp+4h] [bp-10h] BYREF

  v6 = 40;
  memcpy(v7, src, n);
  v3 = &v7[n - 1];
  v3[2] = 48;
  v3[3] = 0;
  v3[1] = 41;
  sub_1C42A8(&ptr, &v6);
  if ( *((_DWORD *)ptr + 4) != 52 )
    sub_946E0("Internal error in eval_type.");
  v4 = *((_DWORD *)ptr + 8);
  free(ptr);
  return v4;
}
