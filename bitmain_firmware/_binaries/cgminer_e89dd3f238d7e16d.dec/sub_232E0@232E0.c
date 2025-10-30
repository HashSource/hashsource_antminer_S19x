int __fastcall sub_232E0(_DWORD *a1, unsigned int a2)
{
  _DWORD *v6; // [sp+Ch] [bp-8h]

  if ( a1 && *a1 == 7 )
    return 0;
  if ( !a1 || *a1 != 1 )
    return 0;
  if ( a2 > sub_65E3C(a1) )
    return 0;
  v6 = (_DWORD *)sub_65E88(a1, a2);
  if ( v6 && *v6 == 2 )
    return sub_66AE0(v6);
  else
    return 0;
}
