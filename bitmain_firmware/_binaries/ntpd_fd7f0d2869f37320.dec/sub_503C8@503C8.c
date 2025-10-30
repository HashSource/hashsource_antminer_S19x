int __fastcall sub_503C8(int a1, int a2)
{
  bool v3; // zf
  int v4; // r7
  __int64 v5; // r0
  unsigned int v6; // r2
  int v7; // r0
  int v8; // r1
  int result; // r0

  v3 = sys_peer == a2;
  if ( sys_peer != a2 )
    v3 = sys_peer == 0;
  if ( v3 )
  {
    v4 = *(_DWORD *)(a2 + 84);
    LODWORD(v5) = v4;
    ++*(_DWORD *)(v4 + 776);
    HIDWORD(v5) = *(_DWORD *)(v4 + 232);
    v6 = *(_DWORD *)(v4 + 236);
    dword_BE604 = current_time;
    sub_3A258(v5, v6);
    v7 = *(_DWORD *)(v4 + 232);
    v8 = *(_DWORD *)(v4 + 236);
    *(_BYTE *)(v4 + 40) = 0;
    *(_QWORD *)(v4 + 256) = 0;
    *(_QWORD *)(v4 + 248) = 0x3F847AE147AE147BLL;
    *(_DWORD *)(v4 + 224) = v7;
    *(_DWORD *)(v4 + 228) = v8;
    return sub_3A534(a2);
  }
  return result;
}
