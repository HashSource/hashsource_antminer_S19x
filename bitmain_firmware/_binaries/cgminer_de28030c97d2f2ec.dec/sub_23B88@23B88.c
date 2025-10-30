int __fastcall sub_23B88(_DWORD *a1, unsigned int a2)
{
  _DWORD *v6; // [sp+Ch] [bp-8h]

  if ( a1 && *a1 == 7 )
    return 0;
  if ( !a1 || *a1 != 1 )
    return 0;
  if ( sub_66B34(a1) < a2 )
    return 0;
  v6 = (_DWORD *)sub_66B80(a1, a2);
  if ( v6 && *v6 == 2 )
    return sub_677D0(v6);
  else
    return 0;
}
