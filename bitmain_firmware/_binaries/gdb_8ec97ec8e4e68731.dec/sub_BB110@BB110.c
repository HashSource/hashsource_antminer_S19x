void __fastcall sub_BB110(_DWORD *a1)
{
  _DWORD *v1; // r5

  if ( a1 )
  {
    sub_BAAEC(a1);
  }
  else
  {
    v1 = (_DWORD *)sub_1CD14C(dword_487D2C, dword_478234);
    if ( v1 )
    {
      if ( *v1 )
      {
        ((void (*)(void))sub_323B84)();
        sub_323B84(v1[1]);
        *v1 = 0;
        v1[1] = 0;
        v1[2] = 0;
        v1[3] = 0;
      }
    }
  }
}
