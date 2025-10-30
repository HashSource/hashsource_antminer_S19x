int __fastcall sub_102D0C(FILE *s, _DWORD *a2, void *ptr, size_t size)
{
  int *v7; // r0
  char *v8; // r0

  if ( fwrite(ptr, size, 1u, s) != 1 )
  {
    v7 = _errno_location();
    v8 = sub_6FF98(*v7);
    sub_946E0("Unable to write file for saving trace data (%s)", v8);
  }
  *a2 += size;
  return 0;
}
