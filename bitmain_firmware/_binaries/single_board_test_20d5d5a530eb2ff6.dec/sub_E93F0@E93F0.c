size_t __fastcall sub_E93F0(int a1, int *a2, int *dest, void *src, int n, void (__fastcall *a6)(int *, int *, int))
{
  size_t v6; // r6
  int v10; // r1
  int v11; // [sp+8h] [bp-8h] BYREF
  int v12; // [sp+Ch] [bp-4h]

  v6 = (n + 7) & 0xFFFFFFF8;
  if ( n <= 0 )
    return 0;
  if ( a2 )
    v11 = *a2;
  else
    v11 = -1504093786;
  HIBYTE(v12) = n;
  LOBYTE(v12) = HIBYTE(n);
  BYTE1(v12) = BYTE2(n);
  BYTE2(v12) = BYTE1(n);
  if ( v6 == 8 )
  {
    memmove(dest + 2, src, n);
    v10 = v12;
    *dest = v11;
    dest[1] = v10;
    memset((char *)dest + n + 8, 0, 8 - n);
    a6(dest, dest, a1);
    return 16;
  }
  else
  {
    memmove(dest, src, n);
    memset((char *)dest + n, 0, v6 - n);
    return sub_E92B8(a1, &v11, dest, dest, v6, a6);
  }
}
