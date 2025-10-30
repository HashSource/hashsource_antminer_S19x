ssize_t __fastcall sub_256588(int a1, void *a2, size_t a3)
{
  char *v6; // r3
  int v7; // r0
  int v8; // lr
  ssize_t result; // r0
  char v10; // [sp+4h] [bp-84h] BYREF
  _QWORD var80[19]; // [sp+8h] [bp-80h] BYREF

  v6 = &v10;
  do
  {
    *((_DWORD *)v6 + 1) = 0;
    v6 += 4;
  }
  while ( v6 != (char *)&var80[15] + 4 );
  v7 = *(_DWORD *)(a1 + 8);
  LOBYTE(v8) = v7 & 0x1F;
  if ( v7 <= 0 )
    v8 = -(-v7 & 0x1F);
  *((_DWORD *)var80 + v7 / 32) |= 1 << v8;
  result = sub_154724(v7 + 1, (fd_set *)var80, 0, 0, 0);
  if ( result != -1 )
    return read(*(_DWORD *)(a1 + 8), a2, a3);
  return result;
}
