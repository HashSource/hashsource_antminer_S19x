unsigned int __fastcall sub_F4C94(_DWORD *a1)
{
  unsigned int v2; // r0
  signed int v3; // r5
  int v4; // r7
  char *v5; // r6
  int *v6; // r0
  int v7; // r3
  int *v8; // r8
  int v9; // r0
  unsigned int v10; // r6
  char *v11; // r0
  signed int v12; // r6
  bool v13; // cc
  unsigned int result; // r0
  unsigned int v15; // r8
  unsigned int v16; // r5
  _DWORD *v17; // r6
  int v18; // r1
  int v19; // r0
  int v20; // r11
  __ino_t st_ino; // r0
  __mode_t v22; // r1
  __dev_t st_rdev; // r2
  int v24; // r10
  char *v25; // r0
  ssize_t v26; // r9
  int v27; // r1
  int v28; // r3
  int v29; // r2
  __mode_t st_mode; // r3
  struct stat stat_buf; // [sp+10h] [bp-5Ch] BYREF

  v2 = sub_F415C(a1, 1);
  if ( v2 )
  {
    v3 = v2;
    v4 = 2;
    if ( &getentropy )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v5 = sub_F44A4(a1, v3);
          if ( getentropy(v5, v3) )
            break;
          v10 = v3;
          if ( v3 <= 0 )
          {
            v7 = *_errno_location();
            goto LABEL_21;
          }
LABEL_18:
          sub_F45CC(a1, v10, 8 * v10);
          v3 -= v10;
          if ( !v3 )
            goto LABEL_15;
          v4 = 2;
        }
        v6 = _errno_location();
        v7 = *v6;
        v8 = v6;
        if ( *v6 != 38 )
          goto LABEL_21;
        v9 = syscall(384, v5, v3, 0);
        v10 = v9;
        if ( v9 > 0 )
          goto LABEL_18;
        if ( !v9 )
          goto LABEL_8;
        v7 = *v8;
LABEL_21:
        if ( v7 != 4 )
          goto LABEL_15;
LABEL_8:
        if ( v4 <= 0 )
          goto LABEL_15;
        --v4;
      }
    }
    do
    {
      while ( 1 )
      {
        v11 = sub_F44A4(a1, v3);
        v12 = syscall(384, v11, v3, 0);
        if ( v12 <= 0 )
          break;
        sub_F45CC(a1, v12, 8 * v12);
        v3 -= v12;
        v4 = 2;
        if ( !v3 )
          goto LABEL_15;
      }
      if ( v12 && *_errno_location() != 4 )
        break;
      v13 = v4-- <= 0;
    }
    while ( !v13 );
  }
LABEL_15:
  result = sub_F4130(a1);
  v15 = result;
  if ( !result )
  {
    if ( sub_F4A5C() )
    {
      v16 = sub_F415C(a1, 1);
      if ( v16 )
      {
        v17 = &unk_6E1B2C;
        while ( 1 )
        {
          v18 = *(v17 - 13);
          if ( v18 != -1
            && _fxstat(3, v18, &stat_buf) != -1
            && *(_QWORD *)(v17 - 11) == stat_buf.st_dev
            && *(v17 - 9) == stat_buf.st_ino )
          {
            v29 = *(v17 - 8);
            st_mode = stat_buf.st_mode;
            __pld(v17);
            if ( ((st_mode ^ v29) & 0xFFFFFE00) == 0 && *(_QWORD *)(v17 - 7) == stat_buf.st_rdev )
              break;
          }
          v19 = open(off_20EDD0[v15], 0);
          *(v17 - 13) = v19;
          if ( v19 != -1 )
          {
            if ( _fxstat(3, v19, &stat_buf) != -1 )
            {
              v20 = *(v17 - 13);
              st_ino = stat_buf.st_ino;
              v22 = stat_buf.st_mode;
              *(_QWORD *)(v17 - 11) = stat_buf.st_dev;
              st_rdev = stat_buf.st_rdev;
              *(v17 - 9) = st_ino;
              *(v17 - 8) = v22;
              *(_QWORD *)(v17 - 7) = st_rdev;
              goto LABEL_32;
            }
            close(*(v17 - 13));
            *(v17 - 13) = -1;
          }
LABEL_42:
          v28 = v16;
          ++v15;
          if ( v16 )
            v28 = 1;
          if ( v15 > 3 )
            v28 = 0;
          v17 += 8;
          if ( !v28 )
            goto LABEL_47;
        }
        v20 = *(v17 - 13);
LABEL_32:
        if ( v20 != -1 )
        {
          v24 = 2;
          do
          {
            while ( 1 )
            {
              v25 = sub_F44A4(a1, v16);
              v26 = read(v20, v25, v16);
              if ( v26 <= 0 )
                break;
              sub_F45CC(a1, v26, 8 * v26);
              v16 -= v26;
              v24 = 2;
              if ( !v16 )
                goto LABEL_36;
            }
            if ( v26 && *_errno_location() != 4 )
              goto LABEL_37;
            v13 = v24-- <= 0;
          }
          while ( !v13 );
          if ( v26 < 0 )
            goto LABEL_37;
LABEL_36:
          if ( dword_21FB78 )
            goto LABEL_41;
LABEL_37:
          v27 = *(v17 - 13);
          if ( v27 != -1
            && _fxstat(3, v27, &stat_buf) != -1
            && *(_QWORD *)(v17 - 11) == stat_buf.st_dev
            && *(v17 - 9) == stat_buf.st_ino
            && ((stat_buf.st_mode ^ *(v17 - 8)) & 0xFFFFFE00) == 0
            && *(_QWORD *)(v17 - 7) == stat_buf.st_rdev )
          {
            close(*(v17 - 13));
          }
          *(v17 - 13) = -1;
LABEL_41:
          v16 = sub_F415C(a1, 1);
        }
        goto LABEL_42;
      }
LABEL_47:
      result = sub_F4130(a1);
      if ( result )
        return result;
    }
    return sub_F4130(a1);
  }
  return result;
}
