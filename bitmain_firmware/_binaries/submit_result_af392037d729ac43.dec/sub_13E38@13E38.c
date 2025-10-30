int __fastcall sub_13E38(_DWORD *a1, char *a2)
{
  bool v2; // zf

  v2 = a1 == 0;
  if ( a1 )
    v2 = a2 == 0;
  if ( v2 || *a1 )
    return 0;
  else
    return sub_125C8((int)(a1 + 2), a2);
}
