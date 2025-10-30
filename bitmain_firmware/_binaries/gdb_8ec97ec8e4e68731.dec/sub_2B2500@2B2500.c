int __fastcall sub_2B2500(int a1)
{
  _DWORD *v2; // r0

  if ( !dword_48FD10 )
  {
    dword_48FD10 = 1;
    nullsub_126();
  }
  v2 = (_DWORD *)sub_2ACBF4(a1, 8);
  if ( !v2 )
    return 0;
  *(_DWORD *)(a1 + 160) = v2;
  *v2 = 0;
  v2[1] = 0;
  return 1;
}
