int __fastcall sub_60844(int a1, int a2)
{
  _DWORD *v2; // r4
  int v3; // r11
  int v5; // r9
  int i; // r0
  int v7; // r0
  int v8; // r8
  int v9; // r6

  v2 = (_DWORD *)dword_48769C;
  v3 = dword_487668;
  dword_487668 = dword_48769C;
  if ( dword_48769C )
  {
    v5 = a1 + 8;
    for ( i = sub_191AC0(a1); ; i = sub_191AC0(v7) )
    {
      v7 = sub_605EC(i);
      v8 = v7;
      if ( v7 )
      {
        v9 = ps_getpid_0(a2);
        v7 = ps_getpid_0(v5);
        if ( v9 == v7 )
          v7 = sub_2594B0(*(_DWORD *)(v8 + 36), "*running,thread-id=\"%d\"\n", *(_DWORD *)(a1 + 20));
      }
      v2 = (_DWORD *)*v2;
      if ( !v2 )
        break;
      dword_487668 = (int)v2;
    }
  }
  dword_487668 = v3;
  return 0;
}
