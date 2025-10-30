int __fastcall sub_154724(int a1, fd_set *a2, fd_set *a3, fd_set *a4, struct timeval *timeout)
{
  fd_set *v5; // r4
  int v9; // r0
  int v10; // r3
  int v11; // r1
  int v12; // r10
  __fd_mask *v13; // r11
  int v14; // r0
  int v15; // r5
  char *v17; // r3
  char v18; // [sp+4h] [bp-88h] BYREF
  char v19; // [sp+8h] [bp-84h] BYREF
  char v20; // [sp+84h] [bp-8h] BYREF

  v5 = a2;
  if ( !a2 )
  {
    v17 = &v18;
    do
    {
      *((_DWORD *)v17 + 1) = 0;
      v17 += 4;
    }
    while ( &v20 != v17 );
    v5 = (fd_set *)&v19;
  }
  v9 = sub_1FD59C(dword_487698);
  v10 = v9 / 32;
  LOBYTE(v11) = v9 & 0x1F;
  if ( v9 <= 0 )
    v11 = -(-v9 & 0x1F);
  v12 = 1 << v11;
  v13 = &v5->__fds_bits[v10];
  if ( a1 <= v9 )
    a1 = v9 + 1;
  v5->__fds_bits[v10] |= v12;
  while ( 1 )
  {
    v14 = j_select(a1, v5, a3, a4, timeout);
    v15 = v14;
    if ( v14 != -1 )
      break;
    if ( *_errno_location() != 4 )
      return v15;
  }
  if ( v14 == 1 && (v12 & *v13) != 0 )
  {
    v15 = -1;
    *_errno_location() = 4;
  }
  return v15;
}
