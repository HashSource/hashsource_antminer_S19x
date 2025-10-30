void __fastcall sub_18A654(int a1)
{
  _DWORD *v1; // r5
  int v2; // r0
  _DWORD *v3; // r0

  v1 = (_DWORD *)a1;
  if ( dword_487930 )
  {
    v3 = (_DWORD *)sub_242FC8(a1);
    a1 = sub_2594B0(*v3, "infrun: stop_waiting\n");
  }
  *v1 = 0;
  if ( !dword_487950 )
  {
    v2 = sub_232950(a1);
    if ( v2 )
      sub_18A0C0(v2);
  }
}
