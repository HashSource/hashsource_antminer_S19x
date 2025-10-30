int __fastcall sub_186EC4(_DWORD *a1)
{
  if ( (_UNKNOWN *)off_46D590[0] == &unk_3BBD30 )
    return 1;
  if ( off_46D590[0] == "step" )
    return *a1 != 0;
  if ( off_46D590[0] == "replay" )
    return sub_23272C(dword_46BBCC, dword_46BBD0, dword_46BBD4, dword_48794C) != 0;
  return 0;
}
