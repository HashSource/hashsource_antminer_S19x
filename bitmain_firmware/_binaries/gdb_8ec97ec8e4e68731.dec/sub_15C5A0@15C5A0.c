int __fastcall sub_15C5A0(_DWORD *a1, const char *a2)
{
  _DWORD *v4; // r0
  int v5; // r0
  _DWORD *v6; // r0
  int v7; // r0
  _DWORD *v8; // r0

  v4 = (_DWORD *)sub_242FC8(a1);
  v5 = sub_2594B0(*v4, "{ get_prev_frame (this_frame=");
  v6 = (_DWORD *)sub_242FC8(v5);
  if ( a1 )
    v7 = sub_2594B0(*v6, "%d", *a1);
  else
    v7 = sub_2594B0(*v6, "<NULL>");
  v8 = (_DWORD *)sub_242FC8(v7);
  return sub_2594B0(*v8, ") -> // %s}\n", a2);
}
