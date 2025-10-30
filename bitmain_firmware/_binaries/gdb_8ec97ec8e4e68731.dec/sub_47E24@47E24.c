unsigned __int64 __fastcall sub_47E24(void *dest, unsigned __int64 a2, unsigned __int64 a3)
{
  _DWORD *v4; // r4
  bool v6; // zf
  int v7; // r3
  unsigned __int64 v9; // r2
  size_t v10; // r0
  unsigned __int64 v11; // r6

  v7 = a2 | HIDWORD(a2);
  v6 = v7 == 0;
  if ( v7 )
    LOWORD(v4) = 9740;
  v9 = *(_QWORD *)&dword_46AFA8;
  if ( v6 )
  {
    if ( (unsigned __int64)(*(_QWORD *)&dword_46AFA8 + 1LL) > 1 )
      sub_92050(&unk_47263C);
    v4 = &unk_47260C;
    *(_QWORD *)&dword_46AFA8 = 0;
    dword_472648 = 0;
    sub_92080(&unk_47263C);
    sub_92044(&unk_47263C, "<osdata type=\"I sockets\">\n", 26);
    sub_47ABC((FILE *)2, 1);
    sub_47ABC((FILE *)2, 0);
    sub_47ABC((FILE *)0xA, 1);
    sub_47ABC((FILE *)0xA, 0);
    sub_92044(&unk_47263C, "</osdata>\n", 11);
    dword_472648 = sub_92094(&unk_47263C);
    v10 = strlen((const char *)dword_472648);
    v9 = v10;
    dword_46AFAC = 0;
    dword_46AFA8 = v10;
  }
  else
  {
    HIWORD(v4) = 71;
  }
  if ( a2 >= v9 )
  {
    sub_92050(&unk_47263C);
    v4[15] = 0;
    *(_QWORD *)&dword_46AFA8 = 0;
    return 0;
  }
  else
  {
    v11 = v9 - a2;
    if ( v9 - a2 > a3 )
      v11 = a3;
    memcpy(dest, (const void *)(v4[15] + a2), v11);
    return v11;
  }
}
