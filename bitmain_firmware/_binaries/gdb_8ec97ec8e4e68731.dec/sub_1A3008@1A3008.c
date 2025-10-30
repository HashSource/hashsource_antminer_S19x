void __fastcall sub_1A3008(void **a1)
{
  _DWORD *v2; // r6
  int v3; // r2
  void *v4; // r1
  _DWORD *v5; // r0
  int v6; // r4
  void *v7; // r0

  v2 = *a1;
  v3 = *((_DWORD *)*a1 + 1);
  if ( ((_BYTE)a1[1] & 1) == 0 )
  {
LABEL_11:
    if ( !v3 )
      sub_1A2FEC(a1[3]);
    goto LABEL_8;
  }
  v4 = a1[1];
  v5 = a1[2];
  if ( (2 * (int)v4) >> 2 > 0 )
  {
    v6 = 0;
    do
    {
      while ( v3 )
      {
        if ( (2 * (int)v4) >> 2 <= ++v6 )
          goto LABEL_7;
      }
      v7 = (void *)v5[v6++];
      sub_1A2FEC(v7);
      v4 = a1[1];
      v5 = a1[2];
      v3 = v2[1];
    }
    while ( (2 * (int)v4) >> 2 > v6 );
  }
LABEL_7:
  if ( !v3 )
  {
    sub_1A2FEC(v5);
    v3 = v2[1];
    goto LABEL_11;
  }
LABEL_8:
  if ( !*v2 )
    sub_1A2FEC(a1);
}
