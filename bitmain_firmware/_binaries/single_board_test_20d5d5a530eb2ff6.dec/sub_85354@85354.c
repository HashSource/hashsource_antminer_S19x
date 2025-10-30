int __fastcall sub_85354(int a1, int a2, int a3, int a4)
{
  _DWORD *v6; // r6
  int v7; // r3
  bool v8; // zf

  if ( a3 )
  {
    v6 = (_DWORD *)(a1 + 232);
    v7 = *(_DWORD *)(a1 + 232);
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 236);
    v6 = (_DWORD *)(a1 + 236);
  }
  sub_10F0FC(v7);
  v8 = a4 == 0;
  if ( a4 )
    v8 = a2 == 0;
  *v6 = a2;
  if ( !v8 )
    sub_10F198(a2);
  return 1;
}
