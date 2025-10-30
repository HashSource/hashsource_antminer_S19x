int __fastcall sub_229A4(int a1, const char *a2, int a3)
{
  int na; // [sp+Ch] [bp-830h]
  fd_set v9[16]; // [sp+1Ch] [bp-820h] BYREF
  struct timeval timeout; // [sp+81Ch] [bp-20h] BYREF
  fd_set *v11; // [sp+824h] [bp-18h]
  int v12; // [sp+828h] [bp-14h]
  unsigned int i; // [sp+82Ch] [bp-10h]
  ssize_t v14; // [sp+830h] [bp-Ch]
  int v15; // [sp+834h] [bp-8h]

  v12 = *(_DWORD *)(a1 + 588);
  v15 = 0;
  if ( byte_92090 && byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
  {
    snprintf((char *)v9, 0x800u, "SEND: %s", a2);
    sub_1E4EC(7, (const char *)v9, 0);
  }
  *(_WORD *)&a2[strlen(a2)] = 10;
  for ( na = a3 + 1; na > 0; na -= v14 )
  {
    timeout.tv_sec = 1;
    timeout.tv_usec = 0;
    while ( 1 )
    {
      v11 = v9;
      for ( i = 0; i <= 0x1F; ++i )
        v11->__fds_bits[i] = 0;
      v9[0].__fds_bits[v12 / 32] |= 1 << (v12 % 32);
      if ( select(v12 + 1, 0, v9, 0, &timeout) > 0 )
        break;
      if ( !sub_1FB6C() )
        return 1;
    }
    if ( *(_BYTE *)(a1 + 592) )
      v14 = SSL_write(*(_DWORD *)(a1 + 596), &a2[v15], na);
    else
      v14 = send(*(_DWORD *)(a1 + 588), &a2[v15], na, 0x4000);
    if ( v14 < 0 )
    {
      if ( (unsigned __int8)sub_1FAF4() != 1 )
        return 2;
      v14 = 0;
    }
    v15 += v14;
  }
  ++*(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 504) += v15;
  *(_QWORD *)(a1 + 512) += v15;
  return 0;
}
