_DWORD *__fastcall sub_183F84(int a1)
{
  _DWORD *v2; // r4
  int v3; // r2

  v2 = sub_9836C(0xB8u);
  sub_183E58((int)v2, a1);
  v3 = dword_487918;
  if ( dword_487918 )
  {
    while ( *(_DWORD *)(v3 + 4) )
      v3 = *(_DWORD *)(v3 + 4);
    *(_DWORD *)(v3 + 4) = v2;
  }
  else
  {
    dword_487918 = (int)v2;
  }
  sub_1BA074(v2);
  if ( a1 )
  {
    v2[3] = a1;
    *((_BYTE *)v2 + 148) = 0;
    *((_QWORD *)v2 + 19) = 0;
    sub_1BA130(v2);
  }
  return v2;
}
