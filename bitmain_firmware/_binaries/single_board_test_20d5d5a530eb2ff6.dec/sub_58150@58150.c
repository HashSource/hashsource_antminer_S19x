_DWORD *__fastcall sub_58150(
        int (__fastcall *a1)(int, size_t),
        int (__fastcall *a2)(int, size_t),
        int a3,
        int a4,
        int a5)
{
  _DWORD *v5; // r5

  v5 = sub_57238(0xE8u, a1, a2, a4);
  if ( v5 )
  {
    *v5 = a1;
    v5[1] = a2;
    v5[2] = a3;
    v5[3] = a4;
    v5[12] = a5;
  }
  return v5;
}
