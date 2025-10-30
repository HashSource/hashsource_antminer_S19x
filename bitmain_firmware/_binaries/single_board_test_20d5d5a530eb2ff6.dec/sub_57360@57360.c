size_t __fastcall sub_57360(_DWORD *a1)
{
  int v1; // r3
  void *v2; // r1
  int v3; // r0

  v1 = a1[12];
  v2 = (void *)a1[23];
  v3 = a1[40];
  if ( v1 <= 2 )
    return sub_4EC48(v3, v2, 0x10000u);
  else
    return sub_56DB0(v3, (char *)v2, 0x10000);
}
