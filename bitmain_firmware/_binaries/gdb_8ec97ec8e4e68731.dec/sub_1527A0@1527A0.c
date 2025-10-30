int __fastcall sub_1527A0(int a1)
{
  int v1; // r5
  _DWORD *v2; // r0
  int v3; // r0
  _DWORD *v4; // r0
  int v5; // r7
  char *v6; // r6
  struct timeval *timeout; // r8
  int v8; // r0
  int v9; // r3
  int v10; // r2
  __int64 v11; // r0
  int v12; // r2
  int v13; // r3
  int v14; // r3
  int v15; // r2
  int v16; // r1
  bool v17; // nf
  int v18; // r3
  int v19; // r3
  int *v20; // lr
  int v21; // r3
  bool v22; // zf
  _DWORD *v24; // r3
  _DWORD *v25; // r3
  __fd_mask *v26; // r3
  _DWORD v27[2]; // [sp+8h] [bp-8h] BYREF

  v1 = a1;
  v2 = (_DWORD *)sub_242F8C(a1);
  v3 = sub_25680C(*v2);
  v4 = (_DWORD *)sub_242FB4(v3);
  sub_25680C(*v4);
  v5 = dword_487640;
  if ( !dword_487640 )
    return -1;
  if ( v1 )
  {
    LOWORD(v6) = (unsigned __int16)&byte_46D454;
    if ( dword_487650 )
    {
      HIWORD(v6) = (unsigned int)&byte_46D454 >> 16;
      sub_1526D4();
      if ( *v6 )
      {
        v5 = dword_487640;
        if ( dword_48764C )
        {
          v1 = dword_48733C;
          goto LABEL_37;
        }
        goto LABEL_44;
      }
      v5 = dword_487640;
      if ( dword_48764C )
      {
        timeout = (struct timeval *)&dword_487644;
        goto LABEL_5;
      }
    }
    else
    {
      HIWORD(v6) = (unsigned int)&byte_46D454 >> 16;
      dword_48764C = 0;
      if ( *v6 )
      {
LABEL_44:
        v1 = -1;
        goto LABEL_37;
      }
    }
    timeout = 0;
LABEL_5:
    v1 = (int)&dword_48732C;
    memcpy(&unk_4874C0, &unk_487340, 0x80u);
    memcpy(&unk_487540, &unk_4873C0, 0x80u);
    memcpy(&stru_4875C0, &unk_487440, sizeof(stru_4875C0));
    v8 = j_select(v5, (fd_set *)&unk_4874C0, (fd_set *)&unk_487540, &stru_4875C0, timeout);
    if ( v8 == -1 )
    {
      v24 = &unk_4874BC;
      do
      {
        v24[1] = 0;
        ++v24;
      }
      while ( v24 != (_DWORD *)&unk_48753C );
      v25 = &unk_48753C;
      do
      {
        v25[1] = 0;
        ++v25;
      }
      while ( v25 != (_DWORD *)&unk_4875BC );
      v26 = (__fd_mask *)&unk_4875BC;
      do
      {
        v26[1] = 0;
        ++v26;
      }
      while ( &stru_4875C0.__fds_bits[31] != v26 );
      if ( *_errno_location() != 4 )
        sub_258B04("select");
      return 0;
    }
    goto LABEL_6;
  }
  v6 = &byte_46D454;
  if ( !byte_46D454 )
  {
    timeout = (struct timeval *)v27;
    v27[0] = (unsigned __int8)byte_46D454;
    v27[1] = (unsigned __int8)byte_46D454;
    goto LABEL_5;
  }
LABEL_37:
  v8 = poll((struct pollfd *)dword_487334, v5, v1);
  if ( v8 == -1 )
  {
    if ( *_errno_location() != 4 )
      goto LABEL_55;
    return 0;
  }
LABEL_6:
  if ( v8 <= 0 )
    return 0;
  if ( *v6 )
  {
    v9 = dword_487338;
    while ( 1 )
    {
      while ( dword_487640 > v9 )
      {
        v10 = dword_487334 + 8 * v9++;
        HIDWORD(v11) = *(__int16 *)(v10 + 6);
        if ( *(_WORD *)(v10 + 6) )
        {
LABEL_14:
          LODWORD(v11) = dword_48732C;
          dword_487338 = v9;
          if ( dword_48732C )
          {
            v12 = *(_DWORD *)v10;
            if ( v12 == *(_DWORD *)dword_48732C )
              goto LABEL_32;
            while ( 1 )
            {
              LODWORD(v11) = *(_DWORD *)(v11 + 24);
              if ( !(_DWORD)v11 )
                break;
              if ( *(_DWORD *)v11 == v12 )
                goto LABEL_32;
            }
          }
          v11 = sub_94700(
                  (int)"event-loop.c",
                  856,
                  "%s: Assertion `%s' failed.",
                  "int gdb_wait_for_event(int)",
                  "file_ptr != NULL");
          goto LABEL_20;
        }
      }
      if ( dword_487640 <= 0 )
        break;
      v10 = dword_487334;
      v9 = 1;
      HIDWORD(v11) = *(__int16 *)(dword_487334 + 6);
      if ( *(_WORD *)(dword_487334 + 6) )
        goto LABEL_14;
    }
    dword_487338 = 1;
    sub_94700(
      (int)"event-loop.c",
      844,
      "%s: Assertion `%s' failed.",
      "int gdb_wait_for_event(int)",
      "i < gdb_notifier.num_fds");
LABEL_55:
    sub_258B04("poll");
  }
  v1 = 1;
  while ( 1 )
  {
    LODWORD(v11) = sub_152664();
    v14 = *(_DWORD *)v11;
    v15 = *(_DWORD *)v11 + 31;
    if ( *(int *)v11 >= 0 )
      v15 = *(_DWORD *)v11;
    LOBYTE(v16) = v14 & 0x1F;
    v18 = -v14;
    v17 = v18 < 0;
    v19 = v18 & 0x1F;
    v20 = &dword_487320[v15 >> 5];
    if ( !v17 )
      v16 = -v19;
    v21 = v1 << v16;
    HIDWORD(v11) = ((v1 << v16) & v20[104]) != 0 ? 2 : 0;
    v22 = (v21 & v20[136]) == 0;
    v13 = v21 & v20[168];
    if ( !v22 )
      break;
LABEL_20:
    if ( v13 )
      goto LABEL_31;
    if ( HIDWORD(v11) )
      goto LABEL_32;
  }
  HIDWORD(v11) |= 4u;
  if ( !v13 )
    goto LABEL_32;
LABEL_31:
  HIDWORD(v11) |= 8u;
LABEL_32:
  sub_152410((_DWORD *)v11, SHIDWORD(v11));
  return 1;
}
