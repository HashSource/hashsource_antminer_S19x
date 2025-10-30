ssize_t __fastcall sub_53660(__int16 *a1, int a2)
{
  __int16 v2; // r2
  int v3; // r4
  __int16 v4; // r2
  int v5; // r4

  v2 = *a1;
  v3 = *((_DWORD *)a1 + 1);
  ++*a1;
  *(_BYTE *)(v3 + v2) = 16;
  v4 = *a1;
  v5 = *((_DWORD *)a1 + 1);
  ++*a1;
  *(_BYTE *)(v5 + v4) = 3;
  return write(a2, *((const void **)a1 + 1), *a1);
}
