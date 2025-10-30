void __fastcall sub_203310(int a1)
{
  int v1; // r2
  int v2; // r2

  if ( a1 )
  {
    v1 = *(_DWORD *)(a1 + 4);
    dword_4893EC = a1;
    v2 = *(_DWORD *)(v1 + 4);
    dword_4893FC = 1;
    dword_4893F8 = *(_DWORD *)(v2 + 16);
  }
  else if ( !dword_4893EC )
  {
    sub_203034(0);
  }
}
