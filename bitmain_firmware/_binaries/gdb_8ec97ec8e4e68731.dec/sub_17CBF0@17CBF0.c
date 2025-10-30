int __fastcall sub_17CBF0(int a1, int a2, const void *a3, size_t a4, int a5, int a6, int *a7)
{
  int v10; // r6
  ssize_t v12; // r0

  v10 = pwrite64(a2, a3);
  if ( v10 != -1 )
    return v10;
  if ( lseek64(a2) != -1 )
  {
    v12 = write(a2, a3, a4);
    if ( v12 != -1 )
      return v12;
  }
  sub_17CA34(a7);
  return -1;
}
