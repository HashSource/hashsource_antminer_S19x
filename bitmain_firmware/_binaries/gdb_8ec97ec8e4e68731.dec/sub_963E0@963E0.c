int __fastcall sub_963E0(int a1, int fd)
{
  int v2; // r3
  bool v3; // zf
  _DWORD *v4; // r2

  if ( dword_475510 == dword_475514 )
  {
LABEL_7:
    close(fd);
    return 0;
  }
  if ( fd != *(_DWORD *)dword_475510 )
  {
    v2 = dword_475510 + 4;
    while ( 1 )
    {
      v3 = dword_475514 == v2;
      v4 = (_DWORD *)v2;
      v2 += 4;
      if ( v3 )
        break;
      if ( fd == *v4 )
        return 0;
    }
    goto LABEL_7;
  }
  return 0;
}
