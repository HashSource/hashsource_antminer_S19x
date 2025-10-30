int __fastcall sub_187B78(int a1)
{
  int v2; // r0
  _DWORD *v3; // r4

  v2 = ps_getpid_0((int)&qword_4878EC);
  v3 = (_DWORD *)dword_487944;
  if ( !dword_487944 )
    return 0;
  while ( v2 != v3[1] )
  {
    v3 = (_DWORD *)*v3;
    if ( !v3 )
      return 0;
  }
  if ( !sub_98F78(v3 + 3, &qword_475848) && v3[9] == a1 )
    return v3[7];
  else
    return 0;
}
