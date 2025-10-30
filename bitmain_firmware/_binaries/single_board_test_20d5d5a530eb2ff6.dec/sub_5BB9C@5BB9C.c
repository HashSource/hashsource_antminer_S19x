int __fastcall sub_5BB9C(_DWORD **a1)
{
  size_t v2; // r5
  size_t v4; // r0

  if ( !a1 )
    return -1;
  v2 = 0;
  if ( !a1[5] )
  {
    v2 = sub_57EAC((int)*a1, (int)a1[2], (unsigned int)a1[4]);
    if ( !sub_57568(v2) )
    {
      v4 = fwrite(a1[2], 1u, v2, (FILE *)a1[1]);
      if ( v2 == v4 )
        v2 = v4;
      else
        v2 = -1;
    }
  }
  sub_577DC(*a1);
  free(a1[2]);
  free(a1);
  return v2;
}
