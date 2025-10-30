void sub_2719AC()
{
  int v0; // r1
  _DWORD *v1; // r5
  int v2; // r4
  int v3; // r1
  _DWORD *v4; // r6
  int v5; // [sp+4h] [bp-1Ch] BYREF

  v0 = dword_48AA18;
  if ( dword_48AA18 )
  {
    do
    {
      while ( 1 )
      {
        v1 = *(_DWORD **)(v0 + 40);
        v2 = *(_DWORD *)(v0 + 44);
        v3 = v1[26];
        if ( *(_BYTE *)(v3 + 32) || !*(_DWORD *)(v3 + 4) )
          break;
        *(_BYTE *)(v3 + 33) = 0;
LABEL_6:
        v0 = v2;
        if ( !v2 )
          return;
      }
      v4 = sub_270FE0(0, (_BYTE *)*v1, 0, 1);
      if ( !v4 )
      {
        *(_BYTE *)(v1[26] + 33) = 0;
        goto LABEL_6;
      }
      sub_33B48C(v4 + 12, v1 + 12);
      v5 = 0;
      sub_27020C(&v5, v1, 0, 1);
      sub_26FA70(v4);
      v0 = v2;
    }
    while ( v2 );
  }
}
