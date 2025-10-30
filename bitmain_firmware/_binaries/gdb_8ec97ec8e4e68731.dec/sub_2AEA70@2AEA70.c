int __fastcall sub_2AEA70(int a1)
{
  int v2; // r0
  int v3; // r3
  int result; // r0
  int v5; // [sp+30h] [bp-3Ch]

  if ( (*(_BYTE *)(a1 + 43) & 4) != 0 )
  {
    ((void (__fastcall *)(int))loc_2A6C48)(3);
    return 0;
  }
  else
  {
    *(_DWORD *)(a1 + 124) = 3;
    if ( sub_2A89C8(a1) < 0 )
    {
      ((void (__fastcall *)(int))loc_2A6C48)(1);
      return 0;
    }
    else
    {
      v2 = sub_2ADBE8(a1, ".data", 291);
      v3 = v2;
      if ( v2 )
      {
        *(_QWORD *)(v2 + 80) = 0;
        result = *(_DWORD *)(a1 + 4);
        *(_DWORD *)(v3 + 28) = 0;
        *(_DWORD *)(v3 + 36) = v5;
        *(_DWORD *)(a1 + 160) = v3;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}
