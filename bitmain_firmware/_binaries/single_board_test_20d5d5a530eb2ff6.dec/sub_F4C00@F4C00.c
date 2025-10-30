int sub_F4C00()
{
  int *v0; // r4
  __int64 v1; // r0
  struct stat v3; // [sp+0h] [bp-5Ch] BYREF

  v0 = &dword_6E1AF8;
  do
  {
    LODWORD(v1) = 3;
    if ( *v0 != -1 )
    {
      LODWORD(v1) = _fxstat(3, *v0, &v3) + 1;
      if ( (_DWORD)v1 )
      {
        v1 = *((_QWORD *)v0 + 1);
        if ( v1 == v3.st_dev && v0[4] == v3.st_ino && ((v3.st_mode ^ v0[5]) & 0xFFFFFE00) == 0 )
        {
          v1 = *((_QWORD *)v0 + 3);
          if ( v1 == v3.st_rdev )
            LODWORD(v1) = close(*v0);
        }
      }
    }
    *v0 = -1;
    v0 += 8;
  }
  while ( v0 != (int *)&unk_6E1B78 );
  return v1;
}
