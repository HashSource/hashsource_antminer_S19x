int __fastcall sub_11E54(int a1, int a2, int a3)
{
  unsigned int v3; // r3
  FILE *v6; // r6
  int *v7; // r5
  char *v8; // r0

  v3 = 1798;
  if ( !a3 )
    v3 = 1795;
  if ( ioctl(a1, v3, a2) >= 0 )
    return 0;
  v6 = (FILE *)stderr;
  v7 = _errno_location();
  v8 = strerror(*v7);
  fprintf(v6, "Error: Could not set address to 0x%02x: %s\n", a2, v8);
  return -*v7;
}
