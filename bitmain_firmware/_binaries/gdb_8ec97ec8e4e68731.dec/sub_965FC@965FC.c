int __fastcall sub_965FC(__int64 a1)
{
  int v1; // r2
  int v2; // lr
  _DWORD *v3; // r3
  int v4; // lr
  int v5; // r12
  int v6; // r12
  int v7; // t1

  HIDWORD(a1) = dword_475510;
  v1 = dword_475514;
  v2 = (dword_475514 - dword_475510) >> 4;
  if ( v2 <= 0 )
  {
    v5 = (dword_475514 - dword_475510) >> 2;
    v3 = (_DWORD *)dword_475510;
  }
  else
  {
    if ( *(_DWORD *)dword_475510 == (_DWORD)a1 )
      goto LABEL_21;
    if ( *(_DWORD *)(dword_475510 + 4) == (_DWORD)a1 )
    {
      v3 = (_DWORD *)(dword_475510 + 4);
      goto LABEL_22;
    }
    if ( (_DWORD)a1 == *(_DWORD *)(dword_475510 + 8) )
    {
      v3 = (_DWORD *)(dword_475510 + 8);
      goto LABEL_22;
    }
    if ( (_DWORD)a1 == *(_DWORD *)(dword_475510 + 12) )
    {
      v3 = (_DWORD *)(dword_475510 + 12);
      goto LABEL_22;
    }
    v4 = dword_475510 + 16 * v2;
    while ( 1 )
    {
      v3 = (_DWORD *)(HIDWORD(a1) + 16);
      if ( HIDWORD(a1) + 16 == v4 )
        break;
      if ( *(_DWORD *)(HIDWORD(a1) + 16) == (_DWORD)a1 )
        goto LABEL_22;
      if ( *(_DWORD *)(HIDWORD(a1) + 20) == (_DWORD)a1 )
      {
        v3 = (_DWORD *)(HIDWORD(a1) + 20);
        goto LABEL_22;
      }
      if ( *(_DWORD *)(HIDWORD(a1) + 24) == (_DWORD)a1 )
      {
        v3 = (_DWORD *)(HIDWORD(a1) + 24);
        goto LABEL_22;
      }
      if ( *(_DWORD *)(HIDWORD(a1) + 28) == (_DWORD)a1 )
      {
        v3 = (_DWORD *)(HIDWORD(a1) + 28);
        goto LABEL_22;
      }
      HIDWORD(a1) += 16;
    }
    v5 = (dword_475514 - v4) >> 2;
  }
  if ( v5 == 2 )
  {
LABEL_37:
    if ( *v3 == (_DWORD)a1 )
      goto LABEL_22;
    ++v3;
    goto LABEL_39;
  }
  if ( v5 == 3 )
  {
    if ( *v3 == (_DWORD)a1 )
      goto LABEL_22;
    ++v3;
    goto LABEL_37;
  }
  if ( v5 != 1 )
    goto LABEL_20;
LABEL_39:
  if ( *v3 != (_DWORD)a1 )
    goto LABEL_20;
LABEL_22:
  while ( 1 )
  {
    if ( (_DWORD *)v1 != v3 )
    {
      HIDWORD(a1) = v3 + 1;
      if ( (_DWORD *)v1 == v3 + 1 )
        goto LABEL_29;
      do
      {
        v7 = *(_DWORD *)HIDWORD(a1);
        HIDWORD(a1) += 4;
        v6 = v7;
        if ( v7 != (_DWORD)a1 )
          *v3++ = v6;
      }
      while ( v1 != HIDWORD(a1) );
      if ( (_DWORD *)v1 != v3 )
        break;
    }
LABEL_20:
    a1 = sub_94700(
           (int)"common/filestuff.c",
           191,
           "%s: %s",
           "void unmark_fd_no_cloexec(int)",
           "fd not found in open_fds");
LABEL_21:
    v3 = (_DWORD *)HIDWORD(a1);
  }
  HIDWORD(a1) = v3 + 1;
LABEL_29:
  if ( v1 != HIDWORD(a1) )
  {
    LODWORD(a1) = memmove(v3, (const void *)HIDWORD(a1), v1 - HIDWORD(a1));
    v1 = dword_475514;
  }
  dword_475514 = v1 - 4;
  return a1;
}
