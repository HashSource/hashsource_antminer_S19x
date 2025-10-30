int __fastcall sub_333C44(int a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7; // r0
  int *v8; // r4
  int v9; // r0
  int v10; // r6

  if ( a2 != 1030 )
    return fcntl(a1, a2, a3);
  if ( dword_48FEE4 < 0 )
  {
    v5 = sub_333C44(a1, 0, a3);
    if ( v5 < 0 || dword_48FEE4 != -1 )
      return v5;
  }
  else
  {
    v5 = fcntl(a1, 1030, a3);
    if ( v5 >= 0 || *_errno_location() != 22 )
    {
      dword_48FEE4 = 1;
      return v5;
    }
    v5 = sub_333C44(a1, 0, a3);
    if ( v5 < 0 )
      return v5;
    dword_48FEE4 = -1;
  }
  v7 = fcntl(v5, 1);
  if ( v7 < 0 || fcntl(v5, 2, v7 | 1) == -1 )
  {
    v8 = _errno_location();
    v9 = v5;
    v10 = *v8;
    v5 = -1;
    close(v9);
    *v8 = v10;
  }
  return v5;
}
