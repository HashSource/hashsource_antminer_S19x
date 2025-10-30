int __fastcall sub_11191C(_DWORD *a1, _DWORD *a2)
{
  signed int v4; // r4
  int *v5; // r6
  int v6; // r0
  int v7; // r0
  signed int v8; // r4
  int v9; // r0
  _DWORD *v10; // r0

  if ( !a1 || sub_D9B28((int)a1) )
  {
    v4 = 0;
    v5 = 0;
    while ( v4 < sub_10C010((int)a2) )
    {
      v6 = sub_10C01C(a2, v4);
      v7 = sub_10E89C(v6);
      v5 = (int *)v7;
      if ( !v7 )
      {
        sub_D0048(11, 110, 108, (int)"crypto/x509/x509_vfy.c", 1960);
        return 0;
      }
      if ( !sub_D9B28(v7) )
        goto LABEL_9;
      ++v4;
    }
    if ( !v5 )
    {
      sub_D0048(11, 110, 107, (int)"crypto/x509/x509_vfy.c", 1968);
      return 0;
    }
LABEL_9:
    v8 = v4 - 1;
    if ( v8 >= 0 )
    {
      do
      {
        v9 = sub_10C01C(a2, v8);
        v10 = (_DWORD *)sub_10E89C(v9);
        --v8;
        sub_D9D74(v10, v5);
      }
      while ( v8 != -1 );
    }
    if ( a1 )
      sub_D9D74(a1, v5);
  }
  return 1;
}
