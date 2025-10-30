int __fastcall sub_29BC0C(int a1, int a2)
{
  int v3; // r8
  int v5; // r0
  int v6; // r4
  int v7; // r8
  const char *v8; // r6
  int v9; // r10
  int v10; // r7
  int v11; // r9
  int v12; // r5
  bool v13; // cf
  fd_set *p_tv_usec; // r3
  int v15; // r10
  int v16; // r0
  int v17; // r1
  _BYTE *v18; // r2
  void (__fastcall *v19)(); // r0
  int v20; // lr
  int v21; // r12
  int v22; // r3
  int v23; // r6
  int v24; // [sp+Ch] [bp-98h]
  struct timeval timeout; // [sp+18h] [bp-8Ch] BYREF
  fd_set readfds; // [sp+20h] [bp-84h] BYREF
  _BYTE v27[4]; // [sp+A0h] [bp-4h] BYREF

  if ( !dword_48AB0C && dword_4707DC )
  {
    v5 = sub_295A08(1, a2);
    off_470784(v5);
    v6 = dword_4900D8 - 2;
    switch ( a2 )
    {
      case ']':
        v24 = 91;
        break;
      case '}':
        v24 = 123;
        break;
      case ')':
        v24 = 40;
        break;
      default:
        return -1;
    }
    if ( v6 >= 0 )
    {
      v7 = 1;
      v8 = off_47075C;
      v9 = a2;
      v10 = dword_48AAD4;
      v11 = *(unsigned __int8 *)(dword_48AAD4 + v6);
LABEL_18:
      v12 = v11;
      if ( v8 )
        goto LABEL_30;
      do
      {
        do
        {
          if ( v9 == v12 )
          {
            --v6;
            ++v7;
            if ( v6 == -1 )
              return -1;
          }
          else
          {
            if ( v12 == v24 && !--v7 )
            {
              p_tv_usec = (fd_set *)&timeout.tv_usec;
              do
              {
                p_tv_usec->__fds_bits[1] = 0;
                p_tv_usec = (fd_set *)((char *)p_tv_usec + 4);
              }
              while ( &readfds.__fds_bits[31] != (__fd_mask *)p_tv_usec );
              v15 = fileno((FILE *)dword_48AAAC);
              v16 = fileno((FILE *)dword_48AAAC);
              v17 = dword_4707E0;
              v18 = &v27[4 * (v16 / 32)];
              v19 = (void (__fastcall *)())off_470784;
              v20 = *((_DWORD *)v18 - 32);
              v21 = dword_4707E0 / 1000000;
              LOBYTE(v22) = v15 & 0x1F;
              if ( v15 <= 0 )
                v22 = -(-v15 & 0x1F);
              timeout.tv_sec = dword_4707E0 / 1000000;
              v23 = dword_4900D8;
              dword_4900D8 = v6;
              *((_DWORD *)v18 - 32) = v20 | (1 << v22);
              timeout.tv_usec = v17 - (_DWORD)&loc_F4240 * v21;
              v19();
              select(1, &readfds, 0, 0, &timeout);
              dword_4900D8 = v23;
              return 0;
            }
LABEL_27:
            v13 = v6-- != 0;
            if ( !v13 )
              return -1;
          }
          v12 = *(unsigned __int8 *)(v10 + v6);
        }
        while ( !v8 );
LABEL_30:
        ;
      }
      while ( !strchr(v8, v12) );
      while ( 1 )
      {
        v13 = v6-- != 0;
        if ( !v13 )
          break;
        v11 = *(unsigned __int8 *)(v10 + v6);
        if ( !v12 )
          goto LABEL_18;
        if ( v11 == v12 )
          goto LABEL_27;
        if ( strchr(v8, v11) )
          v12 = v11;
      }
    }
    return -1;
  }
  v3 = 0;
  sub_295A08(a1, a2);
  return v3;
}
