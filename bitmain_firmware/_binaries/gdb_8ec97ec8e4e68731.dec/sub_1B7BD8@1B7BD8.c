void sub_1B7BD8()
{
  _DWORD *v0; // r4
  int v1; // r3
  _DWORD *v2; // r5

  v0 = *(_DWORD **)(dword_487D2C + 36);
  if ( v0 )
  {
    do
    {
      while ( 1 )
      {
        v1 = v0[3];
        v2 = (_DWORD *)*v0;
        if ( (v1 & 8) == 0 && (v1 & 2) != 0 )
          break;
        v0 = (_DWORD *)*v0;
        if ( !v2 )
          return;
      }
      ((void (__fastcall *)(_DWORD *))loc_1B7600)(v0);
      sub_33AC04(v0);
      v0 = v2;
    }
    while ( v2 );
  }
}
