int __fastcall sub_125D0(int a1, int a2, int a3)
{
  int v4; // r0
  FILE *v6; // r6
  int *v7; // r5
  char *v8; // r0

  if ( a3 )
    v4 = ioctl(a1, 0x706u, a2);
  else
    v4 = ioctl(a1, 0x703u, a2);
  if ( v4 >= 0 )
    return 0;
  v6 = (FILE *)stderr;
  v7 = _errno_location();
  v8 = strerror(*v7);
  fprintf(v6, "Error: Could not set address to 0x%02x: %s\n", a2, v8);
  return -*v7;
}
