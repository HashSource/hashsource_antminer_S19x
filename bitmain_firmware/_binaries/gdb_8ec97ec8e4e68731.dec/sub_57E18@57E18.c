void __fastcall sub_57E18(_DWORD **a1)
{
  _DWORD *v2; // r4
  void *v3; // r0
  _DWORD *v4; // r5
  int v5; // r6
  int v6; // r5

  v2 = *a1;
  if ( *a1 )
  {
    do
    {
      if ( (int)v2[5] > 0 )
      {
        v5 = v2[6];
        v6 = 0;
        do
        {
          ++v6;
          sub_57E18(v5);
          v5 += 4;
        }
        while ( v2[5] > v6 );
      }
      v3 = (void *)v2[1];
      v4 = (_DWORD *)*v2;
      if ( v3 )
        free(v3);
      free(v2);
      v2 = v4;
    }
    while ( v4 );
  }
  *a1 = 0;
}
