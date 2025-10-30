int __fastcall sub_BB174(_DWORD **a1, _DWORD *a2)
{
  int v4; // r0
  int v5; // r1
  bool v6; // zf
  int v7; // r1
  _DWORD *v8; // [sp+4h] [bp-4h]

  v8 = *a1;
  if ( (*a1)[3] == a2[1] && re_exec(**a1) )
  {
    v4 = *a2;
    v5 = *(_DWORD *)(*a2 + 4);
    if ( v5 == *(_DWORD *)(*a2 + 8) )
    {
      sub_BB7A4();
    }
    else
    {
      v6 = v5 == 0;
      v7 = v5 + 4;
      if ( !v6 )
        *(_DWORD *)(v7 - 4) = v8;
      *(_DWORD *)(v4 + 4) = v7;
    }
  }
  return 1;
}
