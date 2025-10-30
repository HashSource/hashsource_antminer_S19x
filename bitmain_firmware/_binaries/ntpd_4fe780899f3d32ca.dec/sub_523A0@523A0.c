ssize_t __fastcall sub_523A0(__int16 *a1, int fd)
{
  int v2; // lr
  int v3; // r4
  int v4; // r12
  int v5; // lr

  v2 = *a1;
  v3 = *((_DWORD *)a1 + 1);
  *a1 = v2 + 1;
  *(_BYTE *)(v3 + v2) = 16;
  v4 = *a1;
  v5 = *((_DWORD *)a1 + 1);
  *a1 = v4 + 1;
  *(_BYTE *)(v5 + v4) = 3;
  return write(fd, *((const void **)a1 + 1), *a1);
}
