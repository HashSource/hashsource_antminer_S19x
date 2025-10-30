int __fastcall sub_2B61F8(int result, int a2)
{
  _BYTE *v2; // r3
  int v3; // r2
  bool v4; // zf
  int v5; // r2
  int v6; // r2
  int v7; // r3
  bool v8; // zf

  if ( ((*(_DWORD *)(result + 40) >> 5) & 0x42) == 0 && *(char ***)(a2 + 16) != &off_470950 )
  {
    v2 = *(_BYTE **)(a2 + 4);
    if ( v2 )
    {
      if ( *v2 == 36 )
      {
        v3 = (unsigned __int8)v2[1];
        v4 = v3 == 120;
        if ( v3 != 120 )
          v4 = v3 == 97;
        v5 = v3 & 0xEF;
        result = v4;
        if ( v5 == 100 )
          v6 = result | 1;
        else
          v6 = result;
        if ( v6 )
        {
          v7 = (unsigned __int8)v2[2];
          v8 = v7 == 46;
          if ( v7 != 46 )
            v8 = v7 == 0;
          if ( v8 )
            *(_DWORD *)(a2 + 12) |= 0x20u;
        }
      }
    }
  }
  return result;
}
