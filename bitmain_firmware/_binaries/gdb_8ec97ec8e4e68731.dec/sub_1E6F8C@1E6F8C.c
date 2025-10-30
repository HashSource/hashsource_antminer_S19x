int __fastcall sub_1E6F8C(int a1)
{
  int v1; // r0
  int v2; // r0
  int v3; // r4
  _DWORD *v5; // r0

  v1 = sub_16F654(a1);
  v2 = ((int (__fastcall *)(int))loc_1E2770)(v1);
  v3 = dword_488C94;
  if ( !dword_48A590 )
  {
    if ( !*(_DWORD *)(dword_488C94 + 8) )
      goto LABEL_3;
    return sub_258B6C(v2);
  }
  v5 = (_DWORD *)sub_242FC8(v2);
  v2 = sub_2594B0(*v5, "remote_pass_ctrlc called\n");
  if ( *(_DWORD *)(v3 + 8) )
    return sub_258B6C(v2);
LABEL_3:
  if ( *(_DWORD *)(v3 + 48) )
    return sub_1E3318(v2);
  else
    return sub_231F0C(qword_4878EC, HIDWORD(qword_4878EC), unk_4878F4);
}
