int __fastcall sub_8E450(int a1)
{
  if ( !*(_DWORD *)(a1 + 1140) || (*(_DWORD *)(a1 + 40) & 1) != 0 )
    return 0;
  if ( sub_95448(a1) || sub_95464(a1) )
    return 0;
  sub_8DB08(*(_DWORD **)(a1 + 1504), *(_DWORD *)(a1 + 1140));
  return 1;
}
