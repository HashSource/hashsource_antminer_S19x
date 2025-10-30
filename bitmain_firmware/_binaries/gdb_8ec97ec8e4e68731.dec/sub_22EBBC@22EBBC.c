int sub_22EBBC()
{
  int v0; // r4
  int v2; // [sp+4h] [bp-Ch]
  __int64 v3; // [sp+8h] [bp-8h]

  v0 = dword_4899A0;
  v2 = dword_4878EC;
  v3 = qword_4878F0;
  if ( !dword_4899A0 )
    return 0;
  while ( !(*(int (__fastcall **)(int, int, _DWORD, _DWORD))(v0 + 332))(v0, v2, v3, HIDWORD(v3)) )
  {
    v0 = *(_DWORD *)v0;
    if ( !v0 )
      return 0;
  }
  return 1;
}
