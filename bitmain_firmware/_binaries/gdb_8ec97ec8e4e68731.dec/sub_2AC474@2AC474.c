_DWORD *sub_2AC474()
{
  _DWORD *v0; // r0
  int v1; // r1
  _DWORD *v2; // r4
  bool v3; // zf
  int v4; // r2
  int v5; // r5
  void *v7; // r0
  void *v8; // r0

  v0 = sub_2AB4EC(0xB0u);
  v2 = v0;
  if ( v0 )
  {
    v3 = dword_48BBF0 == 0;
    if ( dword_48BBF0 )
    {
      v1 = dword_48BBF4;
      v4 = dword_48BBF0 - 1;
    }
    else
    {
      v4 = dword_48BBF8;
    }
    if ( dword_48BBF0 )
    {
      dword_48BBF0 = v4;
      v4 = v1 - 1;
    }
    else
    {
      v1 = v4 + 1;
    }
    v0[9] = v4;
    if ( v3 )
      dword_48BBF8 = v1;
    else
      dword_48BBF4 = v4;
    v5 = sub_324BF0();
    v2[42] = v5;
    if ( v5 )
    {
      v2[33] = &unk_4115CC;
      if ( !sub_2AA92C((int)(v2 + 18), (int)sub_2AD6C0, 184, 13) )
      {
        v7 = v2;
        v2 = 0;
        free(v7);
      }
    }
    else
    {
      ((void (__fastcall *)(int))loc_2A6C48)(6);
      v8 = v2;
      v2 = 0;
      free(v8);
    }
  }
  return v2;
}
