int __fastcall sub_1562F4(int a1)
{
  char *v1; // r1
  int v2; // r2
  char *v3; // r3

  v1 = off_46D5A4[0][27];
  v2 = *((_DWORD *)v1 + 1);
  if ( !v2 )
    return v2;
  if ( a1 != v2 )
  {
    v3 = v1 + 16;
    while ( 1 )
    {
      v2 = *((_DWORD *)v3 + 1);
      v1 = v3;
      v3 += 16;
      if ( !v2 )
        break;
      if ( v2 == a1 )
        return *(_DWORD *)v1;
    }
    return v2;
  }
  return *(_DWORD *)v1;
}
