int __fastcall sub_22178(int a1, const char *a2, int a3)
{
  int v3; // r3
  int na; // [sp+Ch] [bp-848h]
  fd_set v10[16]; // [sp+1Ch] [bp-838h] BYREF
  struct timeval timeout; // [sp+81Ch] [bp-38h] BYREF
  fd_set *v12; // [sp+824h] [bp-30h]
  int v13; // [sp+828h] [bp-2Ch]
  unsigned int i; // [sp+82Ch] [bp-28h]
  ssize_t v15; // [sp+830h] [bp-24h]
  int v16; // [sp+834h] [bp-20h]

  v13 = *(_DWORD *)(a1 + 588);
  v16 = 0;
  if ( byte_90EF8 && byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
  {
    snprintf((char *)v10, 0x800u, "SEND: %s", a2);
    sub_1DB6C(7, (const char *)v10, 0);
  }
  *(_WORD *)&a2[strlen(a2)] = 10;
  for ( na = a3 + 1; na > 0; na -= v15 )
  {
    timeout.tv_sec = 1;
    timeout.tv_usec = 0;
    while ( 1 )
    {
      v12 = v10;
      for ( i = 0; i <= 0x1F; ++i )
        v12->__fds_bits[i] = 0;
      LOBYTE(v3) = v13 & 0x1F;
      if ( v13 <= 0 )
        v3 = -(-v13 & 0x1F);
      v10[0].__fds_bits[v13 / 32] |= 1 << v3;
      if ( select(v13 + 1, 0, v10, 0, &timeout) > 0 )
        break;
      if ( !sub_1F264() )
        return 1;
    }
    v15 = send(*(_DWORD *)(a1 + 588), &a2[v16], na, 0x4000);
    if ( v15 < 0 )
    {
      if ( (unsigned __int8)sub_1F1EC() != 1 )
        return 2;
      v15 = 0;
    }
    v16 += v15;
  }
  ++*(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 504) += v16;
  *(_QWORD *)(a1 + 512) += v16;
  return 0;
}
