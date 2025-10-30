int __fastcall sub_85DC4(int a1, int a2)
{
  int v4; // [sp+Ch] [bp-8h]

  if ( *(_DWORD *)(a1 + 6268) == 538832 || *(_DWORD *)(a1 + 6268) == 539168 )
  {
    v4 = sub_89108(a2, a1 + 6272);
    if ( v4 )
      *(_DWORD *)(a1 + 8324) = *(_DWORD *)(v4 + 1028);
  }
  return 0;
}
