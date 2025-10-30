int __fastcall sub_59778(int a1, int a2)
{
  int result; // r0
  int v5; // [sp+8h] [bp-Ch] BYREF
  int v6; // [sp+Ch] [bp-8h] BYREF

  if ( *(_DWORD *)(a1 + 28) )
  {
    sub_5A078(*(_DWORD *)(a2 + 16), &v6);
    (*(void (__fastcall **)(int))(a1 + 28))(v6);
  }
  result = sub_5A158(*(_DWORD *)(a2 + 16));
  if ( *(_DWORD *)(a2 + 20) )
  {
    if ( *(_DWORD *)(a1 + 32) )
    {
      sub_5A078(*(_DWORD *)(a2 + 20), &v5);
      (*(void (__fastcall **)(int))(a1 + 32))(v5);
    }
    return sub_5A158(*(_DWORD *)(a2 + 20));
  }
  return result;
}
