char *__fastcall optionLoadOpt(char *result, int a2)
{
  int v2; // r5
  _WORD v4[54]; // [sp+0h] [bp-70h] BYREF

  v2 = (int)result;
  if ( (unsigned int)result > 0xF && (*(_DWORD *)(a2 + 16) & 0x28) == 0 )
  {
    result = (char *)_xstat64(3, *(_DWORD *)(a2 + 24), v4);
    if ( result )
    {
      if ( (*(_DWORD *)(v2 + 12) & 4) != 0 )
        sub_7E374(*(_DWORD *)(v2 + 28), (int)"stat", *(_DWORD *)(a2 + 24));
    }
    else if ( (v4[8] & 0xF000) == 0x8000 )
    {
      return sub_88EFC(v2, *(_DWORD *)(a2 + 24), 0);
    }
    else if ( (*(_DWORD *)(v2 + 12) & 4) != 0 )
    {
      *_errno_location() = 22;
      sub_7E374(*(_DWORD *)(v2 + 28), (int)"stat", *(_DWORD *)(a2 + 24));
    }
  }
  return result;
}
