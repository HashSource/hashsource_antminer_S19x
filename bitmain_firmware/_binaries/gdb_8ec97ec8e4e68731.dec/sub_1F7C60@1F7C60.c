_DWORD *__fastcall sub_1F7C60(int a1, const char *a2)
{
  size_t v4; // r4
  _DWORD *result; // r0
  _DWORD *v6; // r0
  int v7; // r0
  _DWORD *v8; // r0

  v4 = strlen((const char *)off_46DB30);
  result = (_DWORD *)strncmp(a2, (const char *)off_46DB30, v4);
  if ( !result && a2[v4] == 58 )
  {
    if ( *(_DWORD *)(a1 + 4 * (dword_46DB48 + 2)) )
    {
      if ( dword_48935C )
      {
        v6 = (_DWORD *)sub_242FC8(0);
        return (_DWORD *)sub_2594B0(*v6, "notif: ignoring resent notification\n");
      }
    }
    else
    {
      *(_DWORD *)(a1 + 4 * (dword_46DB48 + 2)) = sub_1F7718((int)&off_46DB30, (int)&a2[v4 + 1]);
      v7 = ((int (__fastcall *)(_DWORD, _UNKNOWN **))loc_1F7794)(*(_DWORD *)a1, &off_46DB30);
      result = (_DWORD *)sub_232950(v7);
      if ( result )
        result = sub_1532BC(*(_DWORD **)(a1 + 4));
      if ( dword_48935C )
      {
        v8 = (_DWORD *)sub_242FC8(result);
        return (_DWORD *)sub_2594B0(*v8, "notif: Notification '%s' captured\n");
      }
    }
  }
  return result;
}
