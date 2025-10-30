char *__fastcall sub_20608(const char *a1, int a2, int a3)
{
  int v5; // r5
  _BYTE *v6; // r4
  int v7; // r3
  bool v8; // zf
  double *v9; // r3
  int v10; // r0
  _BYTE v13[200]; // [sp+14h] [bp-C8h] BYREF
  _DWORD v14[2]; // [sp+DCh] [bp+0h] BYREF

  v5 = a3;
  v6 = v13;
  v7 = _stack_chk_guard;
  do
  {
    v8 = v5 == 0;
    if ( v5 )
      --v5;
    else
      v7 = 56;
    if ( !v8 )
      v7 = 8 * v5;
    v9 = (double *)(a2 + v7);
    if ( v8 )
      v5 = 7;
    v10 = sub_6C054(v6, (char *)v14 - v6, " %.2f", v9, *v9 * 1000.0);
    if ( v10 < 0 || (char *)v14 - v6 <= (unsigned int)v10 )
      sub_6ECC0("ntp_control.c", 1862, 2, "rc >= 0 && (size_t)rc < (size_t)(ep - cp)");
    v6 += v10;
  }
  while ( a3 != v5 );
  return sub_1F0E4(a1, (int)v13, v6 - v13);
}
