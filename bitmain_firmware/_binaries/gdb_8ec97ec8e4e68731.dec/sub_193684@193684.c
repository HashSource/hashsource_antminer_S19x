void sub_193684()
{
  _DWORD *v0; // r4
  _DWORD *v1; // r5
  int v2; // r0

  v0 = *(_DWORD **)(dword_487D2C + 36);
  if ( v0 )
  {
    do
    {
      while ( 1 )
      {
        v1 = (_DWORD *)*v0;
        v2 = sub_1B6B24(v0, dword_4879D4);
        if ( v2 )
        {
          if ( *(_DWORD *)(v2 + 8) )
            break;
        }
        v0 = v1;
        if ( !v1 )
          return;
      }
      ((void (__fastcall *)(_DWORD *))loc_1B7600)(v0);
      sub_33AC04(v0);
      v0 = v1;
    }
    while ( v1 );
  }
}
