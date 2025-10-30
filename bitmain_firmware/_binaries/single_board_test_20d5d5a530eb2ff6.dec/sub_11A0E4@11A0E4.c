int __fastcall sub_11A0E4(_DWORD *a1)
{
  int v2; // r0
  _DWORD *v3; // r5

  v2 = a1[20];
  if ( v2 )
  {
    if ( sub_10C010(v2) )
    {
      if ( a1[7] )
      {
        v3 = (_DWORD *)a1[20];
        if ( v3 )
        {
          if ( sub_10C010(a1[20]) > 0 && a1[7] )
            return sub_119244((int)a1, v3, 0);
        }
      }
    }
  }
  a1[24] = 1;
  return 0;
}
