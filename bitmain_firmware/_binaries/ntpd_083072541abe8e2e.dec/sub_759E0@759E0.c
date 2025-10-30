int __fastcall sub_759E0(FILE *a1)
{
  int v1; // r0
  int v2; // r0
  bool v3; // zf

  v1 = fileno(a1);
  if ( !fsync(v1) )
    return 0;
  v2 = *_errno_location();
  v3 = v2 == 95;
  if ( v2 != 95 )
    v3 = v2 == 22;
  if ( v3 )
    return 0;
  else
    return sub_7A990(v2, "./../lib/isc/unix/stdio.c", 127);
}
