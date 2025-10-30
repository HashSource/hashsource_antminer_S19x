unsigned int __fastcall optionLoadOpt(unsigned int result, int a2)
{
  int v3; // r5
  _WORD v4[54]; // [sp+0h] [bp-70h] BYREF

  if ( result > 0xF && (*(_DWORD *)(a2 + 16) & 0x28) == 0 )
  {
    v3 = result;
    result = _xstat64(3, *(_DWORD *)(a2 + 24), v4);
    if ( result )
    {
      if ( (*(_DWORD *)(v3 + 12) & 4) != 0 )
        sub_7CF18(*(_DWORD *)(v3 + 28), (int)"stat", *(_DWORD *)(a2 + 24));
    }
    else if ( (v4[8] & 0xF000) == 0x8000 )
    {
      return sub_879A8(v3, *(_DWORD *)(a2 + 24), 0);
    }
    else if ( (*(_DWORD *)(v3 + 12) & 4) != 0 )
    {
      *_errno_location() = 22;
      sub_7CF18(*(_DWORD *)(v3 + 28), (int)"stat", *(_DWORD *)(a2 + 24));
    }
  }
  return result;
}
