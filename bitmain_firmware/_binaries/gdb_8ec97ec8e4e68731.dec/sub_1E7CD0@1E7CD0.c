int __fastcall sub_1E7CD0(const char **a1)
{
  int v2; // r0
  int result; // r0
  _DWORD *v4; // r5
  bool v5; // zf
  _DWORD *v6; // r0
  _DWORD *v7; // r0

  v2 = sub_16F654((int)a1);
  result = ((int (__fastcall *)(int))loc_1E2770)(v2);
  v4 = (_DWORD *)dword_488C94;
  if ( *(_DWORD *)(*(_DWORD *)(dword_488C94 + 408) + 4 * (_DWORD)(a1[6] + 2)) )
  {
    if ( dword_48935C )
    {
      v6 = (_DWORD *)sub_242FC8(result);
      sub_2594B0(*v6, "notif: process: '%s' ack pending event\n", *a1);
    }
    ((void (__fastcall *)(const char **, _DWORD))a1[3])(a1, *v4);
    *(_DWORD *)(v4[102] + 4 * (_DWORD)(a1[6] + 2)) = 0;
    while ( 1 )
    {
      sub_1E4EB8((char **)v4, v4 + 1, 0, 0, 0);
      v5 = strcmp((const char *)*v4, "OK") == 0;
      result = (int)a1;
      if ( v5 )
        break;
      sub_1F768C();
    }
  }
  else if ( dword_48935C )
  {
    v7 = (_DWORD *)sub_242FC8(result);
    return sub_2594B0(*v7, "notif: process: '%s' no pending reply\n", *a1);
  }
  return result;
}
